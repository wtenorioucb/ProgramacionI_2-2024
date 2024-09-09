/*
// PRIMERA SIMULACIÓN DE EXAMEN PARCIAL - SEGUNDO TURNO 
// Materia: Programación I, Paralelo 1
// Estudiante: Akemi Yilah Machicado Diaz
// Fecha 28/08/2024
*/
#include <iostream>
using namespace std;
 int main ()
 {
    int numero1;
    int numero2;
    int suma1 = 0;
    int suma2 = 0;
    cout<<"ingrese el primer numero";
    cin>>numero1;
    cout<<"ingrese el segundo numero";
    cin>>numero2;
    for (int i=1; i<numero1; i++)
    {
        if (numero1%i==0)
        {
           i+=suma1; 
        }      
    }  
    for (int i=1 ; i<numero2; i++)
    {
        if (numero2%i==0)
        {
            i+=suma2; 
        }    
    }  
    if (suma1==suma2 or suma2==suma1)
    cout<<numero1<<" y "<< numero2<<" si son numeros amigos";
    if(suma1!=suma2 && suma2!=suma1)
    {
    cout<<numero1<<" y "<< numero2<<" no son numeros amigos";   
    }
    return 0;
 }