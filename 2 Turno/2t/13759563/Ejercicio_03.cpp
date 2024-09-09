//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programacion I, Paralelo 1
//Estudiante: Janely Kantati Sacaca Urquizo
//Fecha: 28/08/2024
#include <iostream>

using namespace std;

int main ()
{
    system("cls");

    int num1, num2;
    int sum1=0, sum2=0;

    //Pedimos los dos numeros a comparar
    cout << "ingrese dos numeros para verificar si son amigos: ";
    cin >> num1 >> num2;

    //bucle para empezar una division para hallar los divisores
    for (int i=1; i<=num1/2; i++)
    {
        if (num1 % i == 0)
            //suma de divisores
            sum1+=i;
    }
    for (int i=1; i<=num2/2 ;i++)
    {
        if (num2 % i == 0)
            sum2+=i;
    }

    //comparamos el numero ingresado con la suma de los divisores
    if (num1 == sum2 && num2 == sum1)
        //Resultado para los numeros que si son amigos
        cout << "los numeros ingresados son amigos";
    else
        //Resultado para los numeros que no son amigos
        cout << "los numero ingresados NO son amigos";
    
    return 0;
}
