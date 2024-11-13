#include <iostream>
#include <vector> // Libreria para utilizar vectores
#include <stdlib.h>
#include <time.h>

using namespace std;

void LlenarVector(vector<int>&);
void MostrarVector(vector<int>);
float PromedioVector(vector<int>);

int main()
{
    int n;
    vector<int> vNumeroEnteros(0);
    srand(time(NULL));
    system("cls");
    cout << "Cuantos elementos tiene su vector: ";
    cin >> n;
    vNumeroEnteros.resize(n);
    LlenarVector(vNumeroEnteros);
    MostrarVector(vNumeroEnteros);
    cout << "\nEl promedio de los elementos es: " << PromedioVector(vNumeroEnteros);
    return 0;
}

void LlenarVector(vector<int>& vNumeroEnteros)
{
    for (int i = 0; i < vNumeroEnteros.size(); i++)
    {
        vNumeroEnteros[i] = 1 + rand() % ((100 + 1) - 1);
    }
}

void MostrarVector(vector<int> vNumeroEnteros)
{
    for (int i = 0; i < vNumeroEnteros.size(); i++)
    {
        cout << vNumeroEnteros[i] << "\t";
    }
}

float PromedioVector(vector<int> vNumeroEnteros)
{
    float suma = 0;
    for (int i = 0; i < vNumeroEnteros.size(); i++)
    {
        suma += vNumeroEnteros[i];
    }
    return (suma / vNumeroEnteros.size());
}