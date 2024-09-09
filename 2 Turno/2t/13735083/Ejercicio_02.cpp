//PRIMERA SIMULACION DE EXAMEN PARCIAL-SEGUNDO TURNO
//MATERIA: Programacion,Paralelo 1
//Estudiante: Luz Camila Flores Valda
//Fecha:28/08/2024


#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int dias;
    cout<<"Ingrese los dias: ";
    cin>>dias;

    int horas;
    cout<<"Ingrese las horas: ";
    cin>>horas;

    int minutos;
    cout<<"Ingrese los minutos: ";
    cin>>minutos;

    int segundos;
    cout<<"Ingrese los segundos: ";
    cin>>segundos;
  
    int segundo_dias=dias*24*60*60;
    int segundo_horas=horas*60*60;
    int segundo_minutos=minutos*60;
    int segundo_segundo=segundos;

    cout<<segundo_dias<<endl;
    cout<<segundo_horas<<endl;
    cout<<segundo_minutos<<endl;
    cout<<segundo_segundo<<endl;

    int res=0;
    res=segundo_dias+segundo_horas+segundo_minutos+segundo_segundo;
    cout<<"Los segundos totales son: "<<res<<endl;

    return 0;
}
    
  