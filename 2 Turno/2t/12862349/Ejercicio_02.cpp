// PRIMERA SIMULACION DEL EXAMEN PARCIAL - SEGUNDO PARCIAL
// Materia: Programacion 1, Paralelo 1
// Estudiante: Gloria Naghely Quisbert Quiroga
// Fecha: 28/8/24

#include <iostream>
using namespace std;

int main()
{
    int dias,horas,minutos,segundos;
    cout <<"ingrese los dias: ";
    cin >> dias;
    cout <<"ingrese las horas: ";
    cin >> horas;
    cout <<"ingrese los minutos: ";
    cin >> minutos;
    cout <<"ingrese los segundos: ";
    cin >> segundos;

    horas= horas +(dias*24);
    minutos= minutos +(horas*60);
    segundos= segundos +(minutos*60);

    cout << "los segundos en total son: " <<segundos;

    return 0;

}