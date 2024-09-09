//PRIMERA SIMULACION DEL EXAMEN PARCIAL-SEGUNDO TURNO
//Materia: Programacion 1, paralelo 1
//Estudiante: Jhair Anderson Cortez Peña
//Fecha: 28/08/2024
#include<iostream>
using namespace std;
int main()
{
	float dias, horas, minutos, segundos;
    cout<< "ingrese los dias: ";
    cin>> dias;
    cout<< "ingrese las horas: ";
    cin>> horas;
    cout<< "ingrese los minutos: ";
    cin>> minutos;
    cout<< "ingrese los segundos: ";
    cin>> segundos;
    minutos=segundos*60;
    horas=minutos*60;
    dias=horas*24;
    cout<< "los segundos totales son" << " " << dias << endl;

return 0;
}