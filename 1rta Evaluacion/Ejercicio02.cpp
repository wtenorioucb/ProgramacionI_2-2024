#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void Simulacion(int);

int main()
{
    int n;
    srand(time(NULL));
    system("cls");
    cout << "Cuantas veces desea lanzar el dado: ";
    cin >> n;
    Simulacion(n);
    return 0;
}

void Simulacion(int n)
{
    int cara_dos, cara_cuatro, cara_seis,numero_aleatorio;
    cara_dos = 0;
    cara_cuatro = 0;
    cara_seis = 0;
    numero_aleatorio = 0;
    for (int i = 1; i <= n; i++)
    {
        numero_aleatorio = 1 + rand() % ((6 + 1) - 1);
        switch (numero_aleatorio)
        {
            case 2:
                cara_dos++;
                break;
            case 4:
                cara_cuatro++;
                break;
            case 6:
                cara_seis++;
                break;
        }
    }
    cout << cara_dos << " veces numero 2." << endl;
    cout << cara_cuatro << " veces numero 4." << endl;
    cout << cara_seis << " veces numero 6." << endl;
}
