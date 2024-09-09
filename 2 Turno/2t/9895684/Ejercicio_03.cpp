//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programacion 1, Paralelo 1
//Estudiante: Luis Angel Soliz Tindal
//Fecha: 28/08/2024

#include <iostream>
#include <math.h>

using namespace std;

int numero;
int x;
int y;

int main(){
    system ("cls");
    cout << "ingrese un numero: ";
    cin >> numero;
    y=0;
    x=numero;
    for(int i = numero; i >= 1; i--){

        if (numero%i==0){
            y=y+i;
        }
        
    }
    cout << y;
}