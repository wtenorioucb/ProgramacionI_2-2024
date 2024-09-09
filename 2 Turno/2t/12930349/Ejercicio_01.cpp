//PRIMERA SIMULACIÓN DE EXAMEN PARCIAL-SEGUNDO TURNO
//Materia:Programacion 1,Paralelo 1
//Estudiante:Cecilia Belen Medrano Pallares
//Fecha:28/08/2024
#include <iostream>
using namespace std;
int main( ){
    system("cls");
    int num,digito;
    int inverso=0;
    cout<<"Introduce un numero:";
    cin >>num;
    while(num!=0){
        digito=num%10;
        inverso=inverso*10+digito;
        num=num/10;
    }
    cout<<"El numero inverso es: "<<inverso;
    return 0;
}