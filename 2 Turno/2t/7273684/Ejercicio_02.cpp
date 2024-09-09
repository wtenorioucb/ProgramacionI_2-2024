//PRIMERA SIMULACIÓN DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programación 1, Paralelo 4
//Estudiante: Guadalupe Carolina Barreta Aguilar
//Fecha: 28/08/2024

#include <iostream>
using namespace std;
int main ()
{
    system("cls");

    //Ingresamos los datos por teclado
    int dia,hora,minuto, segundo, DIA_TOTAL, HORA_TOTAL, MINUTO_TOTAL,SEGUNDOS_TOTAL;
    cout << "Ingrese los siguientes datos con números enteros"<<endl;
    cout << "Ingrese la cantidad de días:"<<endl;
    cin >> dia;
    cout << "Ingrese la cantidad de horas:"<<endl;
    cin >> hora;
    cout <<"Ingrese la cantidad de minutos:"<<endl;
    cin >> minuto;
    cout << "Ingrese la cantidad de segundos"<<endl;
    cin >> segundo;

    //Calculamos el total de segundos
    DIA_TOTAL = dia * 86400;
    HORA_TOTAL =hora * 3600;
    MINUTO_TOTAL = minuto * 60;
    SEGUNDOS_TOTAL = DIA_TOTAL + HORA_TOTAL + MINUTO_TOTAL + segundo;

    //Mostramos el resultado por pantalla
    cout << "El número total de segundos según los datos ingresados es: "<< SEGUNDOS_TOTAL <<endl;

    return 0;
}