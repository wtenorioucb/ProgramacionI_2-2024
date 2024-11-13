#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void LlenarMatriz(int matriz[100][100], int n, int m);
void MostrarMatriz(int matriz[100][100], int n, int m);
int main()
{
    int n,m;
    int mNumerosEnteros[100][100];
    srand(time(NULL));
    system("cls");
    cout << "Cuantos filas tiene su matriz: ";
    cin >> n;
    cout << "Cuantos columnas tiene su matriz: ";
    cin >> m;  
    LlenarMatriz(mNumerosEnteros,n,m);
    MostrarMatriz(mNumerosEnteros,n,m);
    return 0;
}

void LlenarMatriz(int matriz[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j] = 1 + rand() % ((100 + 1) - 1);
        }
    }
}

void MostrarMatriz(int matriz[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
