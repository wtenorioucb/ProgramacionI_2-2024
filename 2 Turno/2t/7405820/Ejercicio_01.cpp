//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programacion 1, Paralelo 1
//Estudiante: Carlos Esteban Itamari Siacara
//Fecha 28/08/2024

#include <iostream>

using namespace std;

int main(){
    system ("cls");
    int numero;
    int cantidad=0;
    int copia;
    cout <<"Ingrese el numero: "<<endl;
    cin >> numero;
    copia = numero;
    while(numero>0){
        cantidad++;
        numero/=10;
    }

    cout << "El numero tiene "<< cantidad << " digitos"<< endl;
    cout << "El numero es "<< copia << " invertido sera: "<< endl;
    for(int i=0; i < cantidad; i++){
        int digito;
        digito = copia % 10;
        cout << digito;
        copia/=10;
    }
    return 0;
}