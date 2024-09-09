//PRIMERA SIMULACIÓN DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programación I, Paralelo 1
//Estudiante: W. Gardenia Choque Cruz
//Fecha: 28/08/2024

#include <iostream>
using namespace std;

int main()
{ 
    system ("cls");
    int dias = 0, horas = 0, minutos = 0, segundos = 0;
    

    cout << "Ingrese la cantidad de dias: " << endl;
    cin >> dias; 
    cout << "Ingrese la cantidad de horas: " << endl;
    cin >> horas;
    cout << "Ingrese la cantidad de minutos: " << endl;
    cin >> minutos;
    cout << "Ingrese la cantidad de segundos: " << endl;
    cin >> segundos;
    cout << "Los segundos totales son : " << (dias * (24 * 3600)) + (horas * 3600) + (minutos * 60) + segundos << " segundos";
    
    return 0;
}