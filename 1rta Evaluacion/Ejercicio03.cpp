#include <iostream>

using namespace std;

int SumaDivisores(int);

int main()
{
    int numero = 0;
    system("cls");
    cout << "Ingrese un número: ";
    cin >> numero;
    if (SumaDivisores(SumaDivisores(numero)) == numero)
        cout << "El numero " << numero << " tiene un numero amigo, el " << SumaDivisores(numero);
    else
        cout << "NO tiene amigos";
    return 0;
}

int SumaDivisores(int n)
{
    int suma_divisores = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            suma_divisores += i;
        }
    }
    return suma_divisores;    
}