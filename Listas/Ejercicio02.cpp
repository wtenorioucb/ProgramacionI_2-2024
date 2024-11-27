#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{
    vector<int> lista;
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
    sort(lista.begin(), lista.end());
    for (int elemento : lista)
    {
        cout << elemento << "\t";
    }
    return 0;
}
