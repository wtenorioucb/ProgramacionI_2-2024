#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct structEquiposLPFB
{
    char nombreEquipo[50];
    char colorCamiseta[50];
    char departamento[30];
    int anioCreacion;
};

struct structResultadosLPFB
{
    char nombreEquipoLocal[50];
    char nombreEquipoVisitante[50];
    int golesEquipoLocal;
    int golesEquipoVisitante;
    char fechaPartido[10];
};

void ingresarEquipos()
{
    ofstream equiposFile("EquiposLPFB.bin", ios::binary | ios::app);

    if (!equiposFile.is_open())
    {
        cout << "Error al abrir el archivo de equipos." << endl;
        return;
    }

    structEquiposLPFB equipo;

    cout << "Ingrese datos de los equipos (Ingrese '0' para terminar):" << endl;

    while (true)
    {
        cout << "Nombre del equipo: ";
        cin.getline(equipo.nombreEquipo, 50);

        if (strcmp(equipo.nombreEquipo, "0") == 0)
            break;

        cout << "Color de camiseta: ";
        cin.getline(equipo.colorCamiseta, 50);

        cout << "Departamento: ";
        cin.getline(equipo.departamento, 30);

        cout << "Anio de creacion: ";
        cin >> equipo.anioCreacion;
        cin.ignore();

        equiposFile.write(reinterpret_cast<char *>(&equipo), sizeof(structEquiposLPFB));
    }

    equiposFile.close();
}

void ingresarResultados()
{
    ifstream equiposFile("EquiposLPFB.bin", ios::binary);

    if (!equiposFile.is_open())
    {
        cout << "Error al abrir el archivo de equipos." << endl;
        return;
    }

    ofstream resultadosFile("ResultadosLPFB.bin", ios::binary | ios::app);

    if (!resultadosFile.is_open())
    {
        cout << "Error al abrir el archivo de resultados" << endl;
        equiposFile.close();
        return;
    }

    structEquiposLPFB equipo;
    structResultadosLPFB resultado;

    cout << "Ingrese resultados de los partidos (Ingrese '0' para terminar):" << endl;

    while (true)
    {
        cout << "Nombre del equipo local: ";
        cin.getline(resultado.nombreEquipoLocal, 50);

        if (strcmp(resultado.nombreEquipoLocal, "0") == 0)
            break;

        bool equipoLocalExiste = false;

        while (equiposFile.read(reinterpret_cast<char *>(&equipo), sizeof(structEquiposLPFB)))
        {
            if (strcmp(resultado.nombreEquipoLocal, equipo.nombreEquipo) == 0)
            {
                equipoLocalExiste = true;
                break;
            }
        }

        equiposFile.clear(); // Reiniciar el estado

        if (!equipoLocalExiste)
        {
            cout << "El equipo local no existe" << endl;
            continue;
        }

        cout << "Nombre del equipo visitante: ";
        cin.getline(resultado.nombreEquipoVisitante, 50);

        bool equipoVisitanteExiste = false;
        equiposFile.seekg(0);

        while (equiposFile.read(reinterpret_cast<char *>(&equipo), sizeof(structEquiposLPFB)))
        {
            if (strcmp(resultado.nombreEquipoVisitante, equipo.nombreEquipo) == 0)
            {
                equipoVisitanteExiste = true;
                break;
            }
        }

        equiposFile.clear();

        if (!equipoVisitanteExiste)
        {
            cout << "El equipo visitante no existe. Ingrese un equipo válido." << endl;
            continue;
        }

        cout << "Goles equipo local: ";
        cin >> resultado.golesEquipoLocal;

        cout << "Goles equipo visitante: ";
        cin >> resultado.golesEquipoVisitante;

        cout << "Fecha del partido (MM/DD/AA): ";
        cin.ignore();
        cin.getline(resultado.fechaPartido, 10);

        resultadosFile.write(reinterpret_cast<char *>(&resultado), sizeof(structResultadosLPFB));
    }

    equiposFile.close();
    resultadosFile.close();
}

struct EquipoInfo
{
    string nombreEquipo;
    int puntos;
    int partidosJugados;
    int partidosGanados;
    int partidosEmpatados;
    int partidosPerdidos;
    int golesFavor;
    int golesContra;
};

void generarReporte()
{
    ifstream equiposFile("EquiposLPFB.bin", ios::binary);

    if (!equiposFile.is_open())
    {
        cout << "Error al abrir el archivo de equipos." << endl;
        return;
    }

    ifstream resultadosFile("ResultadosLPFB.bin", ios::binary);

    if (!resultadosFile.is_open())
    {
        cout << "Error al abrir el archivo de resultados." << endl;
        equiposFile.close();
        return;
    }

    structEquiposLPFB equipo;
    structResultadosLPFB resultado;

    vector<EquipoInfo> infoEquipos;

    while (equiposFile.read(reinterpret_cast<char *>(&equipo), sizeof(structEquiposLPFB)))
    {
        EquipoInfo equipoInfo;
        equipoInfo.nombreEquipo = equipo.nombreEquipo;
        equipoInfo.puntos = 0;
        equipoInfo.partidosJugados = 0;
        equipoInfo.partidosGanados = 0;
        equipoInfo.partidosEmpatados = 0;
        equipoInfo.partidosPerdidos = 0;
        equipoInfo.golesFavor = 0;
        equipoInfo.golesContra = 0;

        resultadosFile.clear();
        resultadosFile.seekg(0);

        while (resultadosFile.read(reinterpret_cast<char *>(&resultado), sizeof(structResultadosLPFB)))
        {
            if (strcmp(resultado.nombreEquipoLocal, equipo.nombreEquipo) == 0 || strcmp(resultado.nombreEquipoVisitante, equipo.nombreEquipo) == 0)
            {
                equipoInfo.partidosJugados++;

                if (strcmp(resultado.nombreEquipoLocal, equipo.nombreEquipo) == 0)
                {
                    equipoInfo.golesFavor += resultado.golesEquipoLocal;
                    equipoInfo.golesContra += resultado.golesEquipoVisitante;

                    if (resultado.golesEquipoLocal > resultado.golesEquipoVisitante)
                    {
                        equipoInfo.partidosGanados++;
                    }
                    else if (resultado.golesEquipoLocal == resultado.golesEquipoVisitante)
                    {
                        equipoInfo.partidosEmpatados++;
                    }
                    else
                    {
                        equipoInfo.partidosPerdidos++;
                    }
                }
                else
                {
                    equipoInfo.golesFavor += resultado.golesEquipoVisitante;
                    equipoInfo.golesContra += resultado.golesEquipoLocal;

                    if (resultado.golesEquipoVisitante > resultado.golesEquipoLocal)
                    {
                        equipoInfo.partidosGanados++;
                    }
                    else if (resultado.golesEquipoVisitante == resultado.golesEquipoLocal)
                    {
                        equipoInfo.partidosEmpatados++;
                    }
                    else
                    {
                        equipoInfo.partidosPerdidos++;
                    }
                }
            }
        }

        equipoInfo.puntos = 3 * equipoInfo.partidosGanados + equipoInfo.partidosEmpatados;
        infoEquipos.push_back(equipoInfo);
    }

    equiposFile.close();
    resultadosFile.close();

    sort(infoEquipos.begin(), infoEquipos.end(), [](const EquipoInfo &a, const EquipoInfo &b) {
        if (a.puntos == b.puntos)
        {
            return (a.golesFavor - a.golesContra) > (b.golesFavor - b.golesContra);
        }
        return a.puntos > b.puntos;
    });

    cout << setw(20) << "Equipo" << setw(10) << "Puntos" << setw(5) << "PJ" << setw(5) << "G" << setw(5) << "E" << setw(5) << "P" << setw(5) << "GF" << setw(5) << "GC" << setw(5) << "DG" << endl;

    for (const auto &infoEquipo : infoEquipos)
    {
        cout << setw(20) << infoEquipo.nombreEquipo << setw(10) << infoEquipo.puntos << setw(5) << infoEquipo.partidosJugados << setw(5) << infoEquipo.partidosGanados << setw(5) << infoEquipo.partidosEmpatados
             << setw(5) << infoEquipo.partidosPerdidos << setw(5) << infoEquipo.golesFavor << setw(5) << infoEquipo.golesContra << setw(5) << infoEquipo.golesFavor - infoEquipo.golesContra << endl;
    }
}

int main()
{
    int opcion;

    do
    {
        cout << "Menú:" << endl;
        cout << "1. Ingreso de datos de los equipos de la LPFB." << endl;
        cout << "2. Ingreso de los resultados de los partidos." << endl;
        cout << "3. Reporte de la tabla de posiciones." << endl;
        cout << "4. Salir." << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        cin.ignore();

        switch (opcion)
        {
        case 1:
            ingresarEquipos();
            break;

        case 2:
            ingresarResultados();
            break;

        case 3:
            generarReporte();
            break;

        case 4:
            cout << "Ah salido del programa" << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
        }

    } while (opcion != 4);

    return 0;
}
