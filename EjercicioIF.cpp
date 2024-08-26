#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, numero3;
    system("cls");
    cout << "Ingrese un número 1: ";
    cin >> numero1;
    cout << "Ingrese un número 2: ";
    cin >> numero2;
    cout << "Ingrese un número 3: ";
    cin >> numero3;
    if (numero1 > numero2)
    {
        if (numero1 > numero3)
            cout << "El número mayor es: " << numero1;
        else
        {
            if (numero3 > numero2)
                cout << "El número mayor es: " << numero3;
            else
                cout << "El número mayor es: " << numero2;
        }
    }
    else
    {
        if (numero2 > numero3)
            cout << "El número mayor es: " << numero2;
        else
        {
            if (numero3 > numero1)
                cout << "El número mayor es: " << numero3;
            else
                cout << "El número mayor es: " << numero1;
        }
    }    
    return 0;
}