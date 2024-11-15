#include <iostream>
#include <wchar.h>
#include <string>
#include <fstream>

using namespace std;

void leerArchivo(string);
void crearArchivo(string);
void adicionarTextoArchivo(string);

int main()
{
    string nombreArchivo;
    setlocale(LC_ALL, "");
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);
    nombreArchivo = nombreArchivo + ".txt";
    //crearArchivo(nombreArchivo);
    adicionarTextoArchivo(nombreArchivo);
    leerArchivo(nombreArchivo);
    return 0;
}

void crearArchivo(string nombreArchivo)
{
    ofstream archivo;
    archivo.open(nombreArchivo);
    if (archivo.fail())
    {
        cout << "No fue posible crear el archivo" << endl;
    }
    else
    {
        archivo << "Hola mundo !";
        archivo.close();
    }
}

void adicionarTextoArchivo(string nombreArchivo)
{
    ofstream archivo;
    archivo.open(nombreArchivo, ios::app);
    if (archivo.fail())
    {
        cout << "No fue posible crear el archivo" << endl;
    }
    else
    {
        archivo << "\nHola mundo, sexto mensaje.";
        archivo.close();
    }
}

void leerArchivo(string nombreArchivo)
{
    ifstream archivo;
    string lineaTexto;
    archivo.open(nombreArchivo);
    if (archivo.fail())
    {
        cout << "No fue posible abrir el archivo" << endl;
    }
    else
    {
        while (!archivo.eof())
        {
            getline(archivo, lineaTexto);
            cout << lineaTexto << endl;
        }
        archivo.close();
    }
}
