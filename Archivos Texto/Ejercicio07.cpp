#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const char* NOMBRE_ARCHIVO = "Archivo01.txt";

void escribir_hola(fstream&);

int main()
{
    fstream archivo;
    archivo.open(NOMBRE_ARCHIVO,ios::app);
    escribir_hola(archivo);
    archivo.close();
}

void escribir_hola(fstream &canal_salida)
{
   canal_salida << endl << "HOLA" << endl;
}
