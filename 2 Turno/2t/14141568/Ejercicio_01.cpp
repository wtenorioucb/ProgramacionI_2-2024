//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//MATERIA: Programacion I, Paralelo 1
//Estudiante: Eduardo Antonio Cruz Cala
//Fecha: 28/08/2024

#include <iostream>

using namespace std;

int main()
{
    system ("cls");
    int numero; 
    double copia;
    int digitos = 0;
    cout << "Ingrese un Numero: ";
    cin >> numero;
    copia = numero;
    while (numero > 0)
    {
        digitos = numero % 10;
        cout << digitos; 
        numero = numero / 10;
    }
    
    return 0;
}
