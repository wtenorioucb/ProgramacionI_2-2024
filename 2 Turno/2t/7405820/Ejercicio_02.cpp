//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programacion 1, Paralelo 1
//Estudiante: Carlos Esteban Itamari Siacara
//Fecha 28/08/2024

#include <iostream>
using namespace std;

int main(){
    system ("cls");
    int dias, horas, minutos, segundos;

    cout <<"Ingrese la cantidad de dias: "<<endl;
    cin>> dias;
    cout <<"Ingrese la cantidad de horas: "<<endl;
    cin>> horas;
    cout <<"Ingrese la cantidad de minutos: "<<endl;
    cin>> minutos;
    cout <<"Ingrese la cantidad de segundos: "<<endl;
    cin>> segundos;

    horas= horas+(dias * 24);
    minutos = minutos+(horas * 60);
    segundos = segundos+(minutos * 60);

    cout <<"La cantidad de segundo es: "<< segundos <<endl;

    return 0;
}
