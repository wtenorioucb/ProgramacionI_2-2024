#include <iostream>

using namespace std;

void VaciarMatriz(char[3][3]);
void MostrarMartriz(char[3][3]);
void Jugar(char[3][3]);
char VerificarGanador(char[3][3]);

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
    bool sw, sw_ganador;
    char figura_ganador = '-';
    do
    {
        sw = true;
        nro_jugadas++;
        if (nro_jugadas % 2 != 0) // Jugador 1
        {   
            do
            {
                system("cls");
                MostrarMartriz(matriz);
                cout << "JUGADOR 1" << endl; 
                cout << "Ingrese la fila: ";
                cin >> fila;
                cout << "Ingrese la columna: ";
                cin >> columna;
                if (matriz[fila][columna] == '-')
                {
                    matriz[fila][columna] = 'O';
                    figura_ganador = VerificarGanador(matriz);
                    if (figura_ganador != '-')
                    {
                        sw_ganador = true;
                    }
                    sw = false;
                }
                else
                {
                    cout << "Casilla ocupada, ingrese una casilla vacia." << endl;
                    MostrarMartriz(matriz);
                    system("pause");
                }
            } while (sw);
        }
        else // Jugador 2
        {
            do
            {
                system("cls");
                MostrarMartriz(matriz);
                cout << "JUGADOR 2" << endl; 
                cout << "Ingrese la fila: ";
                cin >> fila;
                cout << "Ingrese la columna: ";
                cin >> columna;
                if (matriz[fila][columna] == '-')
                {
                    matriz[fila][columna] = 'X';
                    figura_ganador = VerificarGanador(matriz);
                    if (figura_ganador != '-')
                    {
                        sw_ganador = true;
                    }
                    sw = false;
                }
                else
                {
                    cout << "Casilla ocupada, ingrese una casilla vacia." << endl;
                    MostrarMartriz(matriz);
                    system("pause");
                }
            } while (sw);
        }
    } while (nro_jugadas <= 9 || !sw_ganador);
    if (sw_ganador)
    {
        cout << "El ganador es: " << figura_ganador;
    }
    

}

char VerificarGanador(char matriz[3][3])
{
    char figura;
    bool sw;
    // Verificar Filas
    for (int i = 0; i < 3; i++)
    {
        figura = (matriz[i,0])[0];
        sw = true;
        for (int j = 0; j < 3; j++)
        {
            if (figura != (matriz[i,j])[0])
            {
                sw = false;
            }
        }
        if (sw)
        {
            return figura;
        }
    }
    return '-';
}