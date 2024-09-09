/*PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO 
Materia: Programacion I, Paralelo 1
Estudiante: Agustin Pacheco Collazos
Fecha:28/08/2024*/

#include <iostream>
using namespace std;
int main(){
    system("cls");
    int Numero;
    cout<<("Ingrese un numero entero\n");
    cin>>Numero;
    while (Numero>=1){
        cout<<Numero%10;
        Numero/=10;
    }
    return 0;
}