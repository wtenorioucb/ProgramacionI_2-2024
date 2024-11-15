#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

// Libreria para el manejo de Archivos
#include <fstream>

using namespace std;

const string NOMBRE_ARCHIVO = "Personas.txt";

struct structEstudiante
{
    char nombres[30];
    char apellidos[30];
    char materia[50];
    char nota[3];
};

structEstudiante ingresarDatosEstudiante();
void adicionarDatosArchivo(structEstudiante);
void leerDatosEstudiante();
void MenuPrincipal();
void SeleccionarOpcionMenu();

int main()
{
    SeleccionarOpcionMenu();
    return 0;
}

void MenuPrincipal()
{
    system("cls");
    cout << "\tMENU PRINCIPAL" << endl;
    cout << "==========================" << endl;
    cout << "\t1. Ingresar Datos estudiante" << endl;
    cout << "\t2. Leer Archivo" << endl;
    cout << "\t0. SALIR" << endl;
}

void SeleccionarOpcionMenu()
{
    int opcion = 0;
    do
    {
        MenuPrincipal();
        cout << "Seleccione una opcion:";
        cin >> opcion;
        switch (opcion)
        {
            case 0:
                break;
            case 1:
                adicionarDatosArchivo(ingresarDatosEstudiante());
                system("pause");
                break;
            case 2:
                leerDatosEstudiante();
                system("pause");
                break;
            default:
                cout << "USTED NO HA SELECCIONADO NINGUNA OPCION" << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}

structEstudiante ingresarDatosEstudiante()
{
    structEstudiante estudiante;
    cout << "Ingresar nombre del estudiante: ";
    cin.ignore();
    cin.getline(estudiante.nombres, 30);
    cout << "Ingresar apellidos del estudiante: ";
    cin.getline(estudiante.apellidos, 30);
    cout << "Ingresar nombre de la materia: ";
    cin.getline(estudiante.materia, 50);
    cout << "Ingresar la nota: ";
    cin.getline(estudiante.nota, 3);
    return estudiante;
}

void adicionarDatosArchivo(structEstudiante estudiante)
{
    ofstream archivo;
    archivo.open(NOMBRE_ARCHIVO, ios::app);
    archivo << estudiante.nombres << ";" << estudiante.apellidos << ";" << estudiante.materia << ";" << estudiante.nota << endl;
    archivo.close();
}

void leerDatosEstudiante()
{
    system("cls");
    ifstream archivo;
    string lineaTexto;
    string aux;
    int pos = 0;
    structEstudiante estudiante;
    archivo.open(NOMBRE_ARCHIVO);
    if (archivo.good())
    {
        while (!archivo.eof())
        {
            getline(archivo, lineaTexto);
            cout << lineaTexto << endl;
            aux = lineaTexto.substr(0, lineaTexto.find(';'));
            strncpy(estudiante.nombres, aux.c_str(), 30);
            cout << estudiante.nombres << endl;

            pos = lineaTexto.find(';') + 1;
            lineaTexto.erase(0,pos);
            aux = lineaTexto.substr(0, lineaTexto.find(';'));
            strncpy(estudiante.apellidos, aux.c_str(), 30);
            cout << estudiante.apellidos << endl;

            pos = lineaTexto.find(';') + 1;
            lineaTexto.erase(0,pos);
            aux = lineaTexto.substr(0, lineaTexto.find(';'));
            strncpy(estudiante.materia, aux.c_str(), 30);
            cout << estudiante.materia << endl;

            pos = lineaTexto.find(';') + 1;
            lineaTexto.erase(0,pos);
            aux = lineaTexto.substr(0, lineaTexto.find(';'));
            strncpy(estudiante.nota, aux.c_str(), 3);
            cout << estudiante.nota << endl;
        }
    }
    else
        cout << "El archivo NO se pudo abrir." << endl;
    archivo.close();
}
