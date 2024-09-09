//PRIMERA SIMULACIÓN De EXAMEN PARCIAL - SEGUNDO TURNO 
// Materia: Programación 1, Paralelo 1
// Estudiante: Grecia Daniela Castillo Ali
// Fecha: 28/08/2024

#include <iostream>
using namespace std;

int main(){
    int num1, num2, div=0;
    cout << "Ingrese el primwer numero: ";
    cin>>num1;

    cout << "Ingrese en segundo numero: ";
    cin >>num2;

    for (int i = 1; i < num1; i++){
        if (num1 % i== 0){
            div++;
            
        }
        cout<<div<<"  ";
    }
    /*if (num2 == div){
        cout << "si";
    }*/


    return 0;
}
