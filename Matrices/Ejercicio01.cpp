#include <iostream>

using namespace std;

void VaciarMatriz(char[3][3]);
void MostrarMartriz(char[3][3]);
void Jugar(char[3][3]);

int main()
{
    char matriz[3][3];
    system("cls");
    VaciarMatriz(matriz);
    Jugar(matriz);
    return 0;
}

void VaciarMatriz(char matriz[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = '-';
        }
    }
}

void MostrarMartriz(char matriz[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void Jugar(char matriz[3][3])
{
    int nro_jugadas = 0;
    int fila = 0;
    int columna = 0;
    do
    {
        nro_jugadas++;
        if (nro_jugadas % 2 == 0) // Jugador 1
        {   
            do
            {
                system("cls");
                cout << "JUGADOR 1" << endl; 
                cout << "Ingrese la fila: ";
                cin >> fila;
                cout << "Ingrese la columna: ";
                cin >> columna;
                if (matriz[fila][columna] != '-')
                {
                    cout << "Casilla ocupada, ingrese una casilla vacia.";
                    system("pause");
                }
            } while (matriz[fila][columna] == '-');
            matriz[fila][columna] = 'O';
        }
        else // Jugador 2
        {
            system("cls");
            do
            {
                cout << "JUGADOR 2" << endl; 
                cout << "Ingrese la fila: ";
                cin >> fila;
                cout << "Ingrese la columna: ";
                cin >> columna;
                if (matriz[fila][columna] != '-')
                {
                    cout << "Casilla ocupada, ingrese una casilla vacia.";
                    system("pause");
                }
            } while (matriz[fila][columna] == '-');
            matriz[fila][columna] = 'X';
        }
        MostrarMartriz(matriz);
        system("pause");
    } while (nro_jugadas <= 9);   
}
