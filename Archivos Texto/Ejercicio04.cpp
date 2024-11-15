#include <iostream>
#include <string>
// Libreria para elmanejo de Archivos
#include <fstream>

using namespace std;

int main()
{
    // Abrir el archivo para leer
    ifstream entrada;
    // 1. Abrir el archivo
    entrada.open("archivo.txt");
    // 2. Realizar las operaciones

    string lineaTexto;
    getline(entrada, lineaTexto);
    cout << lineaTexto << endl;
    getline(entrada, lineaTexto);
    cout << lineaTexto << endl;
    getline(entrada, lineaTexto);
    cout << lineaTexto << endl;

    // 3. Cerrar el archivo
    entrada.close();
    return 0;
}
