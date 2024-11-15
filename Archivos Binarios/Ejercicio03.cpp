#include <iostream>
#include <fstream>

using namespace std;

struct Agenda
{
    char nombre[30];
    int edad;
};

void escribirArchivoBinario(string, Agenda);
void leerArchivoBinario(string, Agenda);

int main()
{
    string nombreArchivo;
    Agenda _agenda;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);

    _agenda = {"Willy Tenorio", 40};
    escribirArchivoBinario(nombreArchivo, _agenda);
    //leerArchivoBinario(nombreArchivo, _agenda);
    return 0;
}

void escribirArchivoBinario(string nombreArchivo, Agenda _agenda)
{
    ofstream archivoEscritura;
    archivoEscritura.open(nombreArchivo + ".bin",ios::out | ios::binary);
    archivoEscritura.write((char*)&_agenda, sizeof(Agenda));
    archivoEscritura.close();
}

void leerArchivoBinario(string nombreArchivo, Agenda _agenda)
{
    ifstream archivoLectura;
    archivoLectura.open(nombreArchivo + ".bin",ios::in | ios::binary);
    while (archivoLectura.read((char*)&_agenda, sizeof(Agenda)))
    {
        cout << "Nombre: " << _agenda.nombre << endl;
        cout << "Edad: " << _agenda.edad << endl;
    }
    archivoLectura.close();
}
