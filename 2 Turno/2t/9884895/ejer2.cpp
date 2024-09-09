//PIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO 
//Materia: Proramacion I, Paalelo 1
//Estudiante: Samuel Silva
//Feca; 28/08/2024
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int dias, horas, minutos, segundos;
    int dias = 0 ;
    int resultados_seg;
    cout << "ingrese los dias" <<endl;
    cin >> dias;
    cout << "ingrese las horas" <<endl;
    cin >> horas;
    cout << "ingrese las minutos" <<endl;
    cin >> minutos;
    cout << "ingrese las segundos" <<endl;
    cin >> segundos;

    if(dias,horas,minutos,segundos){
        cout << "los dias son: " << dias << " las horas son: " << horas << "los minutos son: " << minutos << "los seundos son: "<< segundos <<endl;
    }
    else{ cout << " los datos estan incorectos";} 
    
    return 0;



}