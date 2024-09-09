//PRIMERA SIMULACIÓN DE EXAMEN PARCIAL-SEGUNDO TURNO
//Materia:Programacion 1,Paralelo 1
//Estudiante:Cecilia Belen Medrano Pallares
//Fecha:28/08/2024
#include <iostream>
using namespace std;
int main( ){
    system ("cls");
    int dias,horas,minutos,segundos;
    cout<<"Introduce el numero de dias: ";
    cin >>dias;
    cout<<"Introduce el numero de horas: ";
    cin >>horas;
    cout<<"Introduce el numero de minutos: ";
    cin >>minutos;
    cout<<"Introduce el numero de segundos: ";
    cin >>segundos;
    float totaldias=(dias%24)*60*60*60;
    float totalhoras=(horas*60*60);
    float totalminutos=(minutos*60);
    float TOTALSEGUNDOS=totaldias+totalhoras+totalminutos+segundos;
    cout<<"El resultado total en segundos es: "<<TOTALSEGUNDOS;
    return 0;
}