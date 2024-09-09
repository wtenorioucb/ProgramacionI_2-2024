//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//MATERIA: Programacion I, Paralelo 1
//Estudiante: Eduardo Antonio Cruz Cala
//Fecha: 28/08/2024

#include <iostream>

using namespace std;

int main()
{
    system ("cls");
    int a, d_a = 0;
    int b, d_b = 0;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            d_a = d_a + i;
        }
    }
    for (int j = 1; j <= b; j++)
    {
        if (b % j == 0)
        {
            d_b = d_b + j;
        }
    }
    cout << d_a << " " << d_b << endl;
    if (d_a == d_b)
    {
        cout << "Son Numero Amigos." << endl;
    }
    else
    {
        cout << "No son Numero Amigos." << endl;
    }
    
    return 0;
}
