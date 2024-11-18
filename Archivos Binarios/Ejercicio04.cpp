#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Crear variable para abrir el archivo en modo escritura
    ofstream archivo;
    // Abrir el archivo
    archivo.open("Archivo04.txt");
    // Ingresar datos al arrchivo
    archivo << "Hola mundo con archivos,";
    // Cerrar el archivo
    archivo.close();
    return 0;
}