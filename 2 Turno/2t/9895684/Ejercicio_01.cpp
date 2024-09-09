//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programacion 1, Paralelo 1
//Estudiante: Luis Angel Soliz Tindal
//Fecha: 28/08/2024

#include <iostream>

using namespace std;

int numero;
float x;
int y;
int z;
float a;
int b;

int main(){
    system ("cls");
    cout << "Ingrese un número: "<< endl;
    cin >> numero;
    if (numero < 10){
      x=0;
      y=numero;
      cout << "el numero al reves es: "<< y << x << endl;
    }else{
        for (int i = numero; i <= 1; i--)
        {
            a=numero/10;
            b=a;
            x=a-b;
            x=x*10;
        }
        cout<<x;        
    }
}
