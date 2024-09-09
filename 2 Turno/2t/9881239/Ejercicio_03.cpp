/*PRIMERA SIMULAACION DE EXAMEN PARCIAL- SEGUNDO TURNO
MATERIA: Programacion I, Paralelo 1
Estudiante: Alvaro Alejandro Ochoa Segales
Fecha: 28/08/24*/
#include <iostream>
using namespace std;
int num_am(int num)
{
    int suma=0;
    for (int i=0; i<=num/2; i++)
       if (num%i==0)
       {
         suma=suma+num;
       }
   return suma;
}

int main()
{
    int num1, num2, amig1, amig2;
    cout<<"ingrese un numero "<<endl;
    cin>>num1;
    cout<<"ingrese otro numero "<<endl;
    cin>>num2;
    amig1=num_am(num1);
    amig2=num_am(num2);
    if (amig1==amig2)
    return 0;
}