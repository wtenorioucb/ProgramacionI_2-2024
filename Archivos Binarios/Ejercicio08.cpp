#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string lineaTexto;
    // Solo para leer un archivo
    ifstream archivoLectura; 
    // Solo para escribir un archivo
    ofstream archivoEscritura; 
    // Aperturar un archivo para leer datos
    archivoLectura.open("NombreArchivo.txt"); 
    // Aperturar un archivo para escribir datos
    archivoEscritura.open("NombreArchivo.txt", ios::app); 
    // Escribir una linea de texto
    archivoEscritura << "Linea de texto";
    // Leer linea x linea el archivo aperturado
    while (!archivoLectura.eof())
    {
        getline(archivoLectura, lineaTexto);
        cout << lineaTexto << endl;
    }
    archivoLectura.close(); // Cerrar un archivo
    return 0;
}
