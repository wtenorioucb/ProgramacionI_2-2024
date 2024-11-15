#include <iostream>
// Libreria para elmanejo de Archivos
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

const string NOMBRE_ARCHIVO = "Personas.txt";

struct structEstudiante
{
    char nombres[30];
    char apellidos[30];
    char materia[50];
    int nota;
};

structEstudiante ingresarDatosEstudiante();
void adicionarDatosArchivo(structEstudiante);
void leerDatosEstudiante();

int main()
{
    //adicionarDatosArchivo(ingresarDatosEstudiante());
    leerDatosEstudiante();
    return 0;
}

structEstudiante ingresarDatosEstudiante()
{
    structEstudiante estudiante;
    cout << "Ingresar nombre del estudiante: ";
    cin.getline(estudiante.nombres, 30);
    cout << "Ingresar nombre del estudiante: ";
    cin.getline(estudiante.apellidos, 30);
    cout << "Ingresar nombre de la materia: ";
    cin.getline(estudiante.materia, 50);
    cout << "Ingresar nombre del estudiante: ";
    cin >> estudiante.nota;
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
    ifstream archivo;
    string lineaTexto;
    string aux;
    string::size_type sz;
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
            estudiante.nota = aux;
            cout << estudiante.nota << endl;
        }
    }
    else
        cout << "El archivo NO se pudo abrir." << endl;
    archivo.close();
}
