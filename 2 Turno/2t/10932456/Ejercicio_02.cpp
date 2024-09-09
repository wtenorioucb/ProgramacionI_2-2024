/*
// PRIMERA SIMULACIÓN DE EXAMEN PARCIAL - SEGUNDO TURNO 
// Materia: Programación I, Paralelo 1
// Estudiante: Akemi Yilah Machicado Diaz
// Fecha 28/08/2024
*/
#include <iostream>
using namespace std;
 int main ()
 {
    int dias;
    int horas;
    int minutos;
    int segundos;
    float total_segundos;
    cout<<"ingrese los dias";
    cin>>dias;
    cout<<"ingrese las horas";
    cin>>horas;
    cout<<"ingrese los minutos";
    cin>>minutos;
    cout<<"ingrese los segundos";
    cin>>segundos;
    total_segundos= (dias*24*60*60)+(horas*60*60)+(minutos*60)+segundos;
    cout<<"Los minutos totales del tiempo ingresado es "<<total_segundos<<endl;
    return 0;
 }