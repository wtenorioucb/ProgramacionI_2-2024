/*PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO 
Materia: Programacion I, Paralelo 1
Estudiante: Agustin Pacheco Collazos
Fecha:28/08/2024*/
#include <iostream>
using namespace std;
int main(){
    system("cls");
    int numero1, numero2;
    cout<<("Ingrese el primero numero\n");
    cin>>numero1;
    cout<<("Ingrese el segundo numero\n");
    cin>>numero2;
    int mult=1;
    int mult2=1;
    int sum1=0;
    int sum2=0;
    while (mult<numero1){
        if(numero1%mult==0)
        {
           sum1+=mult;
        }
        mult++;
    }
    while (mult2<numero2){
        if (numero2%mult2==0)
        {
            sum2+=mult2;
        }
        mult2++;
    }
    if(numero1==sum2 && numero2==sum1){
        cout<<numero1<<(" y ")<<numero2<<(" son numeros amigos")<<endl;
    }
    else{
        cout<<numero1<<(" y ")<<numero2<<(" no son numeros amigos")<<endl;
    }
    return 0;
}