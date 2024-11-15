#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const string NOMBRE_ARCHIVO = "Personas.bin";

struct structAgenda
{
    char ci[10];
    char nombre[50];
    unsigned long int celular;
};

void leerArchivo();

int main()
{
    leerArchivo();
    return 0;
}

void leerArchivo()
{
    structAgenda agenda;
    ifstream archivoLectura;
    archivoLectura.open(NOMBRE_ARCHIVO,ios::in | ios::binary);
    cout << "\nLISTADO DE DATOS" << endl;
    cout << "================" << endl;

    //archivoLectura.seekg(64, ios::cur); // Saltar 64 bytes
    //archivoLectura.seekg(0, ios::beg); // Volver al principio
    archivoLectura.seekg(0, ios::end); // Ir al final del fichero
    cout << "Ubicacion Inicial: " << archivoLectura.tellg() << endl << endl;
    archivoLectura.read((char*)&agenda, sizeof(structAgenda));

    cout << "\tCI: " << agenda.ci << endl;
    cout << "\tNombre: " << agenda.nombre << endl;
    cout << "\tCelular: " << agenda.celular << endl << endl;
    cout << "Ubicacion Final: " << archivoLectura.tellg() << endl << endl;
    cout << "Tamaño: " << sizeof(structAgenda) << endl;
    archivoLectura.close();
}


