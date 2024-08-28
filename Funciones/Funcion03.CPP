// EFECTOS LATERALES
#include <iostream>

using namespace std;

// Variables Globales
int resultado01;

// PROTIPOS
int Sumar(int valor1, int valor2);

int main()
{
    int resultado02; // Variable local del main()
    resultado01 = 3;
    resultado02 = Sumar(2,3);
    cout << "El resultado es: " << resultado02 << endl;
    cout << "El valor de la variable resultado1 es: " << resultado01;
    return 0;
}

// Funcion que suma dos valores
int Sumar(int valor1, int valor2)
{
    resultado01 = valor1 + valor2;
    return (resultado01);
}