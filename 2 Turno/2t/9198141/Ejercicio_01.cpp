//PRIMERA SIMULACION DE EXAMEN PARCIAL
//Materia: Programacion I, Paralelo 1
//Estudiante: Daniela Alana Yampasi Sandi
//Fecha:28/08/2024

#include <iostream>
using namespace std;

int main(){
    int n1;
    cout << "Ingrese un numero entero";
    cin >> n1;
    int aum=0;
    int unir=0;
    while (n1>0){
      aum = n1*10;
      unir= aum + (n1%10);
      n1=n1/10;
    }
    cout <<n1;

    return 0;
}
