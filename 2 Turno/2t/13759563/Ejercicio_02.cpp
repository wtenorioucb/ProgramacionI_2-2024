//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programacion I, Paralelo 1
//Estudiante: Janely Kantati Sacaca Urquizo
//Fecha: 28/08/2024
#include <iostream>

using namespace std;

int main ()
{
    system("cls");

    int dias, horas, minutos, segundos;
    //creamos la variable para sumar los segundos
    int suma_segundos=0;

    //pedimos los datos al usuario
    cout << "ingrese los dias, horas, minutos y segundos: ";
    cin >> dias >> horas >> minutos >> segundos;

    //realizamos las conversiones a segundos y sumamos
    suma_segundos=segundos+(minutos*60)+(horas*60*60)+(dias*24*60*60);

    //Resultado
    cout << "el total de segundos en " << dias << " dia/s, " << horas << " hora/s, " << minutos << " minuto/s y " << segundos << " segundo/s." << endl;
    cout << "es " << suma_segundos << " segundos" << endl;
    return 0;
}
