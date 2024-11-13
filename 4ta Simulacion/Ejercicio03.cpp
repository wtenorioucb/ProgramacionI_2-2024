#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void LimpiarSalasCine(string[3][50], string[3][30]);
void MostrarOcupacionSalasCine(string[3][50], string[3][30]);
void SimularOcupacionSalasCine(int, string[3][50], string[3][30], vector<string> nombres);
void ContarNombreMasRepetido(string[3][50], string[3][30], vector<string> nombres);

int main()
{
    vector<string> nombres(10);
    string SalaCineN[3][50];
    string SalaCine4D[3][30];
    int nroPersonas = 0;
    nombres={"NOM 01", "NOM 02", "NOM 03", "NOM 04", "NOM 05", "NOM 06", "NOM 07", "NOM 08", "NOM 09", "NOM 10"};
    system("cls");
    srand(time(NULL));
    LimpiarSalasCine(SalaCineN, SalaCine4D);
    cout << "Ingrese el número de personas que ingresarán al cine: ";
    cin >> nroPersonas;
    SimularOcupacionSalasCine(nroPersonas, SalaCineN, SalaCine4D, nombres);
    MostrarOcupacionSalasCine(SalaCineN, SalaCine4D);
    ContarNombreMasRepetido(SalaCineN, SalaCine4D, nombres);
    return 0;
}

void LimpiarSalasCine(string SalaCineN[3][50], string SalaCine4D[3][30])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            SalaCineN[i][j] = "-";
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            SalaCine4D[i][j] = "-";
        }
    }
}

void MostrarOcupacionSalasCine(string SalaCineN[3][50], string SalaCine4D[3][30])
{
    int ocupacion = 0;
    cout << "SALA DE CINE NORMAL" << endl;
    cout << "===================" << endl;
    for (int i = 0; i < 3; i++)
    {
        ocupacion = 0;
        for (int j = 0; j < 50; j++)
        {
            cout << SalaCineN[i][j] << "\t";
            if (SalaCineN[i][j] != "-")
                ocupacion++;         
        }
        cout << endl << "Nro asientos ocupados: " << ocupacion << endl;
    }
    cout << "\nSALA DE CINE 4D E-Motion" << endl;
    cout << "========================" << endl;
    for (int i = 0; i < 3; i++)
    {
        ocupacion = 0;
        for (int j = 0; j < 30; j++)
        {
            cout << SalaCine4D[i][j] << "\t";
            if (SalaCineN[i][j] != "-")
                ocupacion++;
        }
        cout << endl << "Nro asientos ocupados: " << ocupacion << endl;
    }
}

void SimularOcupacionSalasCine(int nroPersonas, string SalaCineN[3][50], string SalaCine4D[3][30], vector<string> nombres)
{
    int indicePersona, indiceTipoCine, indiceSala;
    int indiceSalaN0 = 0,indiceSalaN1 = 0, indiceSalaN2 = 0;
    int indiceSala4D0 = 0,indiceSala4D1 = 0, indiceSala4D2 = 0;
    for (int i = 1; i <= nroPersonas; i++)
    {
        indicePersona = rand() % ((9 + 1));
        cout << "indicePersona: " << indicePersona << endl;
        indiceTipoCine = 1 + rand() % ((2 + 1) - 1);
        cout << "indicePersona: " << indiceTipoCine << endl;
        switch (indiceTipoCine)
        {
            case 1: // Sala Normal
                indiceSala = rand() % ((2 + 1));
                cout << "indiceSala: " << indiceSala << endl;
                switch (indiceSala)
                {
                    case 0:
                        SalaCineN[indiceSala][indiceSalaN0] = nombres[indicePersona];
                        indiceSalaN0++;
                        break;
                    case 1:
                        SalaCineN[indiceSala][indiceSalaN1] = nombres[indicePersona];
                        indiceSalaN1++;
                        break;
                    case 2:
                        SalaCineN[indiceSala][indiceSalaN2] = nombres[indicePersona];
                        indiceSalaN2++;
                        break;
                }
                break;
            case 2: // Sala 4D
                indiceSala = rand() % ((2 + 1));
                cout << "indiceSala: " << indiceSala << endl;
                switch (indiceSala)
                {
                    case 0:
                        SalaCine4D[indiceSala][indiceSala4D0] = nombres[indicePersona];
                        indiceSala4D0++;
                        break;
                    case 1:
                        SalaCine4D[indiceSala][indiceSala4D1] = nombres[indicePersona];
                        indiceSala4D1++;
                        break;
                    case 2:
                        SalaCine4D[indiceSala][indiceSala4D2] = nombres[indicePersona];
                        indiceSala4D2++;
                        break;
                }
                break;
        }
    }
}

void ContarNombreMasRepetido(string SalaCineN[3][50], string SalaCine4D[3][30], vector<string> nombres)
{
    vector<int> contadorNombres(10,0);
    int mayor = 0, indiceMayor = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            if (SalaCineN[i][j] != "-")
            {
                for (int k = 0; k < 10; k++)
                {
                    if (nombres[k] == SalaCine4D[i][j])
                    {
                        contadorNombres[k]++;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (SalaCine4D[i][j] != "-")
            {
                for (int k = 0; k < 10; k++)
                {
                    if (nombres[k] == SalaCine4D[i][j])
                    {
                        contadorNombres[k]++;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (contadorNombres[i] > mayor)
        {
            mayor = contadorNombres[i];
            indiceMayor = i;
        }   
    }
    cout << endl << "NOMBRE MAS REPETIDO: " << nombres[indiceMayor] << endl;
    cout << "CANTIDAD DE VECES: " << contadorNombres[indiceMayor] << endl;
}