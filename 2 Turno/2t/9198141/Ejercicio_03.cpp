//PRIMERA SIMULACION DE EXAMEN PARCIAL
//Materia: Programacion I, Paralelo 1
//Estudiante: Daniela Alana Yampasi Sandi
//Fecha:28/08/2024

#include <iostream>
using namespace std;


int main(){
    int n1,n2;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;
    int c1=0;
    int c2=0;
    for (int i=1; i<=n1; i++)
        if (n1 % i == 0){
            
            c1= c1+i;
        }
    
    for (int j=1; j<=n2; j++)
        if (n2 % j == 0){
        
            c2= c2+j;
        }
    if (c1 == c2)
        cout << n1 <<" sy " << n2 <<" son numeros amigos";
    else
        cout << n1 <<" y " << n2 <<" no son numeros amigos";

    return 0;
}