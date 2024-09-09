// PRIMERA SIMULACION DEL EXAMEN PARCIAL - SEGUNDO PARCIAL
// Materia: Programacion 1, Paralelo 1
// Estudiante: Gloria Naghely Quisbert Quiroga
// Fecha: 28/8/24

#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2;
    cout << "Ingresa el primer numero";
    cin >> numero1;
    cout << "Ingresa el segundo numero";
    cin >> numero2;
    int suma=0;
    for (int i=1;i<=numero1;i++)
    {
        if (numero2%i==0)
        {
            for (int i=1;i<=numero2;i++)
            {
            if (numero1%numero2==0)
            {
                //suma = suma +i;
                cout << "los numero son amigos";

            }
            else
            cout << "los numeros no son amigos";
            }
        }
        else
        cout << "los numeros no son amigos";
    }
    return 0;
}