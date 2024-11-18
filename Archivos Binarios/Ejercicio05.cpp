#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    system("cls");
    // Crear una variable para asociar el archivo para abrir el archivo en modo lectura
    ifstream archivo;
    // Abrir el archivo
    archivo.open("Archivo04.txt");
    // Crear una variable para leer las lineas de texto del archivo
    string lineaTexto;
    // Leer el archivo de texto hasta que finalice el archivo
    while (!archivo.eof())
    {
        getline(archivo, lineaTexto);
        cout << lineaTexto << endl;
    }
    // Cerrar el archivo
    archivo.close();
    return 0;
}