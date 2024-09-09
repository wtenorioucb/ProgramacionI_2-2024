//PRIMERA SIMULACION DE EXAMEN PARCIAL-SEGUNDO TURNO
//MATERIA: Programacion,Paralelo 1
//Estudiante: Luz Camila Flores Valda
//Fecha:28/08/2024


#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int num;
    cout<<"Ingrese el numero: ";
    cin>>num;
    while(num != 0)
    {
        int digito=0;
        digito =num%10 ;
        num=num/10;
        cout<<digito<<endl;
        

    }
    return 0; 
    
}