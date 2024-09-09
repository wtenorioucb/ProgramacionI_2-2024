/*PRIMERA SIMULAACION DE EXAMEN PARCIAL- SEGUNDO TURNO
MATERIA: Programacion I, Paralelo 1
Estudiante: Alvaro Alejandro Ochoa Segales
Fecha: 28/08/24*/
#include <iostream>
using namespace std;
int main()
{
    int dia, hora, minuto, seg1, seg2, seg3, seg4, seg_total;
    system("cls");
    cout<<"ingrese la cantidad de dias"<<endl;
    cin>>dia;
    cout<<"ingrese la cantidad de horas"<<endl;
    cin>>hora;
    cout<<"ingrese la cantidad de minutos"<<endl;
    cin>>minuto;
    cout<<"ingrese la cantidad de segundos"<<endl;
    cin>>seg4;
    seg1=dia*86400;
    seg2=hora*3600;
    seg3=minuto*60;
    seg_total=seg1+seg2+seg3+seg4;
    cout<<"la cantidad de seguntos totales es de "<< seg_total<<" seg";
     return 0;
}