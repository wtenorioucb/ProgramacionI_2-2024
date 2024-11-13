#include <iostream>

using namespace std;

// Definición de una estructura
struct persona
{
    char nombre[30];
    int edad;
};

int main()
{
    persona _persona;
    cout << "INGRESO DE DATOS" << endl;
    cout << "================" << endl;
    cout << "Ingrese el nombre: ";
    cin.getline(_persona.nombre,30);
    cout << "Ingrese la edad: ";
    cin >> _persona.edad;
    cout << "\nREPORTE" << endl;
    cout << "=======" << endl;
    cout << "El nombre es: " <<_persona.nombre << endl;
    cout << "La edad es: " <<_persona.edad << endl;
    return 0;
}
