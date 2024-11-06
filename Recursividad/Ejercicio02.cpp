#include <iostream>
#include <wchar.h>

using namespace std;

int fibonacci(int);

int main()
{
    int n;
    system("cls");
    cout << "Ingrese la cantidad de números Fibonacci que quiere generar: ";
    cin >> n;
    for (int i=0; i<n; i++)
        cout << fibonacci(i) << endl;
}

int fibonacci(int n)
{
    int resultado;
    if (n == 0)
        resultado = 0;
    else if (n == 1)
        resultado = 1;
    else
        resultado = fibonacci(n-1) + fibonacci(n-2);
    return resultado;
}
