#include <iostream>
#include <string>

using namespace std;

int main()
{
    char cadena1[30];
    char *cadena2 = new char[30];
    string cadena3;
    system("cls");
    cout << "Ingresar la variable cadena1: ";
    cin.getline(cadena1, 30);
    cout << "Ingresar la variable cadena2: ";
    cin.getline(cadena2, 30);
    cout << "Ingresar la variable cadena3: ";
    getline(cin, cadena3);
    cout << "char cadena1[30]: " << cadena1 << endl;
    cout << "char *cadena2: " << cadena2 << endl;
    cout << "string cadena3: " << cadena3 << endl;
    return 0;
}
