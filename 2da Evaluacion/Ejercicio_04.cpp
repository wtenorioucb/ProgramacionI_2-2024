#include <iostream>
#include <vector>
#include <string.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

void SimularIngresoAutos(int n, vector<string> TipoAutos, string matrizAutos[3][9], int matrizCarga[3][9]);
void DesplegarDatos(string matrizAutos[3][9], int matrizCarga[3][9]);
void LimpiarMatriz(int matrizCarga[3][9]);

int main()
{
    vector<string> TipoAutos(4,"");
    string matrizAutos[3][9];
    int matrizCarga[3][9];
    int n = 0;
    srand(time(NULL));
    system("cls");
    TipoAutos = {"NORMAL", "VAGONETA", "CAMIONETA", "MINIBUS"};
    cout << "Ingrese la cantidad de autos: ";
    cin >> n;
    LimpiarMatriz(matrizCarga);
    SimularIngresoAutos(n, TipoAutos, matrizAutos, matrizCarga);
    DesplegarDatos(matrizAutos, matrizCarga);
    return 0;
}

void LimpiarMatriz(int matrizCarga[3][9])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            matrizCarga[i][j] = 0;
        }
    }
}

void SimularIngresoAutos(int n, vector<string> TipoAutos,string matrizAutos[3][9], int matrizCarga[3][9])
{
    int indiceGE = 0;
    int indiceGP = 0;
    int indiceGPP = 0;
    int aleatorioAuto = 0; // 0,1,2,3
    int aleatorioGasolina = 0; // 0 = GE,1 = GP,2 = GPP
    int aleatorioCantidadGas = 0;
    for (int i = 1; i <= n; i++)
    {
        aleatorioAuto = rand() % (3 + 1);
        cout << "aleatorioAuto: " << aleatorioAuto << endl;
        aleatorioGasolina = rand() % (2 + 1);
        cout << "aleatorioGasolina: " << aleatorioGasolina << endl;
        aleatorioCantidadGas = 5 + rand() % ((52 + 1) - 5);
        cout << "aleatorioCantidadGas: " << aleatorioCantidadGas << endl;
        switch (aleatorioGasolina)
        {
            case 0: // GE
                matrizAutos[aleatorioGasolina][indiceGE] = TipoAutos[aleatorioAuto];
                matrizCarga[aleatorioGasolina][indiceGE] = aleatorioCantidadGas;
                cout << "indiceGE: " << indiceGE << endl;
                indiceGE++;
                break;
            case 1: // GP
                matrizAutos[aleatorioGasolina][indiceGP] = TipoAutos[aleatorioAuto];
                matrizCarga[aleatorioGasolina][indiceGP] = aleatorioCantidadGas;
                cout << "indiceGP: " << indiceGP << endl;
                indiceGP++;
                break;
            case 2: // GPP
                matrizAutos[aleatorioGasolina][indiceGPP] = TipoAutos[aleatorioAuto];
                matrizCarga[aleatorioGasolina][indiceGPP] = aleatorioCantidadGas;
                cout << "indiceGPP: " << indiceGPP << endl;
                indiceGPP++;
                break;
        }
    }    
}

void DesplegarDatos(string matrizAutos[3][9], int matrizCarga[3][9])
{
    cout << "MATRIZ AUTOS" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << matrizAutos[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "MATRIZ CARGA GASOLINA" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << matrizCarga[i][j] << "\t";
        }
        cout << endl;
    }
}