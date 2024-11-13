#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void LlenarMatriz(int matriz[100][100], int n);
void MostrarMatriz(int matriz[100][100], int n);
int main()
{
    int n;
    int mNumerosEnteros[100][100];
    srand(time(NULL));
    system("cls");
    cout << "Cuantos filas y columnas tiene su matriz: ";
    cin >> n;
    LlenarMatriz(mNumerosEnteros,n);
    MostrarMatriz(mNumerosEnteros,n);
    return 0;
}

void LlenarMatriz(int matriz[100][100], int n)
{
    int contador = 0;
    int inicio = 0;
    int fin = n;
    do
    {
        for (int i = inicio; i < fin; i++)
        {
            contador++;
            matriz[inicio][i] = contador;
        }
        for (int i = inicio+1; i < fin; i++)
        {
            contador++;
            matriz[i][fin-1] = contador;
        }
        for (int i = fin-2; i >= inicio; i--)
        {
            contador++;
            matriz[fin-1][i] = contador;
        }
        cout << endl << fin-2 << "-" << inicio;
        for (int i = 0; i < count; i++)
        {
            /* code */
        }
        

        contador = n*n;
    } while (contador < (n * n));
    
}

void MostrarMatriz(int matriz[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
