#include <iostream>
#include <string>

using namespace std;

int main()
{
    char nombre[30];
    int edad;
    system("cls");
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cin.ignore();
    cout << "Ingresa tu nombre: ";
    cin.getline(nombre, 30);
    cout << endl << "-------------" << endl;
    cout << "Tu nombre es: " << nombre << endl;
    cout << "Tu edad es: " << edad << endl;
    return 0;
}
