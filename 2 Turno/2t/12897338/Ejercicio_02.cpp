//PRIMERA SUMUKACION DE EXAMEN PARCIAL - SEGUNDO TURNO
// Materia: Programacion I, Paralelo 1
//Estudiante: Carlos Riveros Lopez
//Fecha:28/08/2024
#include <iostream>
using namespace std;
int main(){
    system ("cls");
    int dias , horas, minutos, segundos;
    cout << "Ingrese los dias" << endl;
    cin >> dias;
    cout << "Ingrese las horas" << endl;
    cin >> horas;
    cout << "Ingrese los minutos" << endl; 
    cin >> minutos;
    cout << "Ingrese los segundos" << endl;
    cin >> segundos;
    horas = horas +(dias * 24);
    minutos = segundos +(horas * 60);
    segundos = minutos + (minutos * 60);
    cout << "La acumulacion en todo en segundos seria:" << segundos << endl;
    return 0; 
}