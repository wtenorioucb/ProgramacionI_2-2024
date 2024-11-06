// Hallar el valor m�ximo y m�nimo de un vector.

#include <iostream>
#include <wchar.h>

using namespace std;

int mayor (int[], int, int);
int menor (int[], int, int);

int main()
{
    int v[] = {1,9,2,14,9,3,-4,2,7};
    int n = 9;
    system("cls");
    cout << "El mayor valor del vector es: " << mayor(v, n-1, v[0]) << endl;
    cout << "El menor valor del vector es: " << menor(v, n-1, v[0]) << endl;
    return 0;
}

int mayor (int v[], int n, int maximo)
{
    if(n==0) return maximo;
    else
    {
        if(v[n]>maximo)
            maximo=v[n];
        return mayor(v, n-1, maximo);
    }
}

int menor (int v[], int n, int minimo)
{
    if(n==0) return minimo;
    else
    {
        if(v[n]<minimo)
            minimo=v[n];
        return menor(v, n-1, minimo);
    }
}
