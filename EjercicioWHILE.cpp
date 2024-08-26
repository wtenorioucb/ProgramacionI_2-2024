#include <iostream>

using namespace std;

int main()
{
    int dato, suma;
    suma = 0;
    system("cls");
    do
    {
        cout << "Ingrese un número: ";
        cin >> dato;
        suma = suma + dato;
    } while (dato != 0);
    cout << "La suma de los datos ingresados es: " << suma;
    return 0;
}