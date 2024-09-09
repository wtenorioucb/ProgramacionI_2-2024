//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programación 1, paralelo 1
//Estudiante: Luis Adolfo quispe huacani 
//Fecha: 28/08/24
#include <iostream>
using namespace std;
int main() {
    int dias;
    int horas;
    int minutos;
    int segundos;

    cout << "introduzca los dias: "<< endl;
    cin >> dias;
    cout << "introduzca las horas: "<< endl;
    cin >> horas;
    cout << "introduzca los minutos: "<<endl;
    cin >> minutos;
    cout << "introduzca los segundos: "<<endl;
    cin >> segundos;

    int segundos_1 = 0;
    int segundos_2 = 0;
    int segundos_3 = 0;
    

    segundos_1 = (((dias * 24)*60)*60);
    segundos_2 = ((horas * 60)*60);
    segundos_3 = (minutos * 60);
    cout <<"el total de los segundos es: "<< segundos_1 + segundos_2 + segundos_3 + segundos << endl;

    system ("pause");
    return 0;

}