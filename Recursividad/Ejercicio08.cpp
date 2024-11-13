#include <iostream>

using namespace std;

unsigned long long ackermann(int, int);

int main()
{
    int n, m;
    system("cls");
    cout << "Ingrese el valor de M: ";
    cin >> m;
    cout << "Ingrese el valor de N: ";
    cin >> n;
    cout << "El resultado es: " << ackermann(m,n);
    return 0;
}

unsigned long long ackermann(int m, int n)
{
    unsigned long long resultado;
    if (m == 0)
        resultado = n + 1;
    else if (n == 0)
        resultado = ackermann(m-1, 1);
    else
        resultado = ackermann(m-1, ackermann(m, n-1));
    return resultado;
}
