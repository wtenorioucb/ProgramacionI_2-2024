// PRIMERA SIMULACION DEL EXAMEN PARCIAL - SEGUNDO PARCIAL
// Materia: Programacion 1, Paralelo 1
// Estudiante: Gloria Naghely Quisbert Quiroga
// Fecha: 28/8/24

#include <iostream>
using namespace std;

int main()
{
    int InvertirNumero (int);
    int numero;
    cout<< "ingrese un numero: ";
    cin>> numero;

    int inv=0,a;
    for (int i=1;i<=numero;i++)
    {
    inv= inv+i;
    a=inv;
    }
    cout << a;
    return 0;
}