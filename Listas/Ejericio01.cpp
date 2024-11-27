#include <iostream>
#include <list>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{
    list<int> lista;
    int n;
    int aleatorio;
    system("cls");
    srand(time(NULL));
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        aleatorio = rand() % 1000;
        lista.push_back(aleatorio);
    }
    lista.sort();
    for (int elemento : lista)
    {
        cout << elemento << "\t";
    }
    return 0;
}
