//PRIMERA SIMULACIÓN DE EXAMEN PARCIAL-SEGUNDO TURNO
//Materia:Programacion 1,Paralelo 1
//Estudiante:Cecilia Belen Medrano Pallares
//Fecha:28/08/2024
#include <iostream>
using namespace std;
int main( ){
    system ("cls");
    int num1,num2;
    int divisores1=0;
    int divisores2=0;
    cout<<"Introduce el primer numero: ";
    cin >>num1;
    cout<<"Introduce el segundo numero: ";
    cin >>num2;
    for(int i=1;i<=num1;i++){
        if(num1%i==0){
            divisores1+=i;}
    }
    for(int j=1;j<=num2;j++){
        if(num2%j==0){
            divisores2+=j;}
    }
    if(divisores1==divisores2){
        cout<<"Los numeros son amigos.";}
    else{
        cout<<"Los numeros no son amigos.";
        }  
    return 0;
}