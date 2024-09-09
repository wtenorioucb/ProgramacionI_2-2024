// PRIMERA SIMULACION DE EXAMEN PARCIAL-SEGUNDO TURNO
// MATERIA PROGRAMACION I, PARALELO 1
// ESTUDIANTE NEIDER QUISPE PAYE
// FECHA 28/08/2024

#include <iostream>
using namespace std;
int dias_segundo();
int hora_segundo();
int minuto_segundo();
int main()
{
    system("cls");
    int dias=0,hora=0,minuto=0,segundo=0,resultado=0;
    cout << "ingrese en dias ";
    cin >> dias;
    cout << "ingrese una horas ";
    cin >> hora;
    cout << "ingrese una minutos ";
    cin >> minuto;
    cout << "ingrese una segundos ";
    cin >> segundo;
    
    dias=24*60*60;
    hora=3600;
    minuto=60;
    segundo=segundo;
    
    resultado=dias+hora+minuto+segundo;
    cout <<"el resultado en segundos: "<<resultado<<endl;
    return 0;
}
int dias_segundo()
{
    int dias;
    dias=24*60*60;
    return dias;
}
int hora_segundo()
{
    int hora;
    hora=3600;
    return hora;
}
int minuto_segundo()
{
    int minuto;
    minuto=60;
    return minuto;
}
