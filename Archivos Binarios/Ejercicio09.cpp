#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct persona
{
    char nombre[30];
    int edad;
};


int main()
{
    persona per;
    int sumaEdades = 0;
    int contadorRegistros = 0;
    ifstream archivo;
    string lineaTexto;
    string aux;
    int pos = 0;
    system("cls");
    archivo.open("Datos.txt");
    while (!archivo.eof())
    {
        getline(archivo, lineaTexto);
        aux = lineaTexto.substr(0, lineaTexto.find(';'));
        strncpy(per.nombre, aux.c_str(), 30);
        
        pos = lineaTexto.find(';') + 1;
        lineaTexto.erase(0,pos);
        aux = lineaTexto.substr(0, lineaTexto.find(';'));
        per.edad = stoi(aux);
        sumaEdades += per.edad;
        contadorRegistros++;
    }
    cout << "El promedio de las edades es: " << sumaEdades / contadorRegistros << endl;
    return 0;
}
