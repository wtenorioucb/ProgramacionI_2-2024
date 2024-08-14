#include <iostream>

using namespace std;

int main()
{
    int opcion;
    system("cls");
    cout << "MENU DE OPCIONES" << endl;
    cout << "================" << endl;
    cout << "1. Opcion 1" << endl;
    cout << "2. Opcion 2" << endl;
    cout << "3. Opcion 3" << endl;
    cout << "0. Salir" << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            cout << "A seleccionado la opción 1";
            break;
        case 2:
            cout << "A seleccionado la opción 2";
            break;
        case 3:
            cout << "A seleccionado la opción 3";
            break;
        default:
            cout << "No ha ingresado a ninguna opción";
            break;
    }
    return 0;
}