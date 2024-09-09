#include <iostream>

using namespace std;

// PROTIPOS
int Sumar(int valor1, int valor2);

int main()
{
    int valor1, valor2;
    cout << "Ingrese un valor: ";
    cin >> valor1;
    cout << "Ingrese un valor: ";
    cin >> valor2;
    cout << "El resultado es: " << Sumar(valor1,valor2);
    return 0;
}

// Funcion que suma dos valores
int Sumar(int valor1, int valor2)
{
    return (valor1+valor2);
}