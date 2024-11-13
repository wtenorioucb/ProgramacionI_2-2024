#include <iostream>
#include <wchar.h>

using namespace std;

/* FUNCIONES RECURSIVAS SIMPLES

    Factorial de un número

    4! = 4 x 3 x 2 x 1

    4! = 4 x 3!
    3! = 3 x 2!
    2! = 2 x 1!
    1! = 1
    0! = 1


*/

unsigned int factorial(unsigned int);

int main()
{
    system("cls");
    unsigned int n;
    cout << "Ingrese un valor: ";
    cin >> n;
    cout << "El factorial de " << n << " es igual a " << factorial(n);
    return 0;
}

//Muestra el factorial de un n�mero
unsigned int factorial(unsigned int n)
{
    if (n == 0) // Condici�n de SALIDA - CASO BASE
        n = 1;
    else
        n = n * factorial(n-1);
    return n;
}
