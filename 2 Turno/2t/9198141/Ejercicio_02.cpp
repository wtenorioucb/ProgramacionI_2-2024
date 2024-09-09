//PRIMERA SIMULACION DE EXAMEN PARCIAL
//Materia: Programacion I, Paralelo 1
//Estudiante: Daniela Alana Yampasi Sandi
//Fecha:28/08/2024

#include <iostream>
using namespace std;

int main(){
    int dias, horas, minutos, segundos;
    cout << "Ingrese el tiempo en dias, horas, minutos y segundos";
    cin >> dias >> horas >> minutos >> segundos;
        
        horas= horas + (dias * 24);
        minutos= minutos + (horas * 60);
        segundos= segundos + (minutos * 60);

    cout << "El tiempo ingresado en segundos es " << segundos;
     

    return 0;
}