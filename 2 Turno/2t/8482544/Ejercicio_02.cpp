/*PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO 
Materia: Programacion I, Paralelo 1
Estudiante: Agustin Pacheco Collazos
Fecha:28/08/2024*/

#include <iostream>
using namespace std;
int main(){
    system("cls");
    int dias, horas, minutos, segundos;
    cout<<("Ingrese los dias")<<endl;
    cin>>dias;
    cout<<("Ingrese las horas")<<endl;
    cin>>horas;
    cout<<("Ingrese los minutos")<<endl;
    cin>>minutos;
    cout<<("Ingrese los segundos")<<endl;
    cin>>segundos;
    dias=dias*24*60*60;
    horas=horas*60*60;
    minutos=minutos*60;
    segundos=segundos+dias+horas+minutos;
    cout<<("Un total de ")<<segundos<<(" segundos.");
    return 0;
}