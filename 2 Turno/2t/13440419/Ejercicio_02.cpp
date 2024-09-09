//PRIMERA SIMULACIÓN De EXAMEN PARCIAL - SEGUNDO TURNO 
// Materia: Programación 1, Paralelo 1
// Estudiante: Grecia Daniela Castillo Ali
// Fecha: 28/08/2024

#include <iostream>
using namespace std;

int main(){
    int elecc, dias,horas,min,sec;
    cout << "Ingrese que tiempo quiere transformar en segundos: " << endl << "1-. Dias" << endl << "2-. Horas"<< endl << "3-. Minutos"<< endl << "4-. Segundos" << endl;
    cin >> elecc;

    switch (elecc)
    {
    case 1:
        cout<<"ingrese la cantidad de dias: ";
        cin>> dias;
        horas=24;
        min=60;
        sec=60;
        dias= horas*min*sec;
        cout << "la cantidad de dias en segundos es " << dias;
        break;

    case 2:
        cout << "Ingrese la cantidad de horas: ";
        cin>> horas;
        min=60;
        sec=60;
        horas=min*sec;
        cout << "la cantidad en horas en segundos es " << horas;
        break;

    case 3:
        cout << "Ingrese la cantidad de minutos: ";
        cin>> min;
        min=min*60;
        cout << "la cantidad en minutos en segundos es " << min;

        break;

    case 4:
        cout << "ingrese la canidad de segundos: ";
        cin>> sec;
        cout << "la cantidad de segundos es " << sec;
        break; 

    default:
        cout<< "no existe esta opción";
        break;
        
    }
/*

    system ("cls");
*/
    return 0;
}