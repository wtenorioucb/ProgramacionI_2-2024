#include <iostream>

using namespace std;

int FuncionR(int);
int SumaDigitosR(int);

int main()
{
    int n = 0;
    system("cls");
    cout << "Ingrese el elemento:";
    cin >> n;
    cout << "El valor del termino " << n << "es: " << FuncionR(n);
    return 0;
}

int FuncionR(int n)
{
    int suma = 0;
    if (n == 1 || n == 2)
        return 1;
    else
    {
        for (int i = 1; i <= n - 1; i++)
        {
            suma += SumaDigitosR(FuncionR(i));
        }
        return suma;
    }
}

int SumaDigitosR(int numero)
{
    int suma = 0;
    if (numero / 10 == 0)
    {
        suma += numero;
        return suma;
    }
    else
    {
        suma += (numero % 10) + SumaDigitosR(numero / 10);
        return suma;
    }
}