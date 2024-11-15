#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PISOS = 5;
const int CAPACIDAD_PISO = 30;

enum TipoVehiculo {
    AUTOMOVIL,
    VAGONETA,
    CAMIONETA,
    MINIVAN,
    VACIO
};

class Estacionamiento {
private:
    vector<vector<TipoVehiculo>> pisos;

public:
    Estacionamiento() {
        pisos.resize(PISOS, vector<TipoVehiculo>(CAPACIDAD_PISO, VACIO));
    }

    void simularEntradaVehiculos(int n) {
        srand(static_cast<unsigned int>(time(0))); // Inicializar la semilla para números aleatorios
        for (int i = 0; i < n; i++) {
            // Generar tipo de vehículo aleatorio
            TipoVehiculo vehiculo = static_cast<TipoVehiculo>(rand() % 4);
            bool estacionado = false;

            for (int p = 0; p < PISOS; p++) {
                for (int e = 0; e < CAPACIDAD_PISO; e++) {
                    if (pisos[p][e] == VACIO) {
                        pisos[p][e] = vehiculo;
                        cout << "Vehículo de tipo " << vehiculo << " estacionado en piso " << p + 1 << ", espacio " << e + 1 << "." << endl;
                        estacionado = true;
                        break;
                    }
                }
                if (estacionado) break;
            }
            if (!estacionado) {
                cout << "El estacionamiento está lleno. No se pudo estacionar el vehículo." << endl;
            }
        }
    }

    void contarAutomovilesPorPiso() const {
        for (int p = 0; p < PISOS; p++) {
            int contador = 0;
            for (int e = 0; e < CAPACIDAD_PISO; e++) {
                if (pisos[p][e] == AUTOMOVIL) {
                    contador++;
                }
            }
            cout << "Piso " << p + 1 << ": " << contador << " automóviles." << endl;
        }
    }

    void contarVagonetasYMinivans() const {
        int contadorVagonetas = 0;
        int contadorMinivans = 0;

        for (int p = 0; p < PISOS; p++) {
            for (int e = 0; e < CAPACIDAD_PISO; e++) {
                if (pisos[p][e] == VAGONETA) {
                    contadorVagonetas++;
                } else if (pisos[p][e] == MINIVAN) {
                    contadorMinivans++;
                }
            }
        }
        cout << "Total de vagonetas: " << contadorVagonetas << endl;
        cout << "Total de minivans: " << contadorMinivans << endl;
    }

    bool estacionamientoLleno() const {
        for (int p = 0; p < PISOS; p++) {
            for (int e = 0; e < CAPACIDAD_PISO; e++) {
                if (pisos[p][e] == VACIO) {
                    return false;
                }
            }
        }
        return true;
    }

    int contarEspaciosLibres() const {
        int espaciosLibres = 0;
        for (int p = 0; p < PISOS; p++) {
            for (int e = 0; e < CAPACIDAD_PISO; e++) {
                if (pisos[p][e] == VACIO) {
                    espaciosLibres++;
                }
            }
        }
        return espaciosLibres;
    }
};

int main() {
    Estacionamiento estacionamiento;
    int opcion;

    do {
        cout << "\n--- Menú de Estacionamiento ---" << endl;
        cout << "1. Simular entrada de N vehículos" << endl;
        cout << "2. Contar automóviles por piso" << endl;
        cout << "3. Contar vagonetas y minivans" << endl;
        cout << "4. Verificar si el estacionamiento está lleno" << endl;
        cout << "5. Contar espacios libres" << endl;
        cout << "0. Salir" << endl;
        cout << "Elija una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int n;
                cout << "Ingrese el número de vehículos a estacionar: ";
                cin >> n;
                estacionamiento.simularEntradaVehiculos(n);
                break;
            }
            case 2:
                estacionamiento.contarAutomovilesPorPiso();
                break;
            case 3:
                estacionamiento.contarVagonetasYMinivans();
                break;
            case 4:
                if (estacionamiento.estacionamientoLleno()) {
                    cout << "El estacionamiento está lleno." << endl;
                } else {
                    cout << "El estacionamiento NO está lleno." << endl;
                }
                break;
            case 5:
                cout << "Espacios libres: " << estacionamiento.contarEspaciosLibres() << endl;
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while (opcion != 0);

    return 0;
}
