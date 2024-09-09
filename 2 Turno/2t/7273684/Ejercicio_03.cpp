//PRIMERA SIMULACIÓN DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programación 1, Paralelo 4
//Estudiante: Guadalupe Carolina Barreta Aguilar
//Fecha: 28/08/2024

#include <iostream>
using namespace std;
int main ()
{    
    system("cls");

    //Pedimos los datos por teclado
    int numero1, numero2, suma1, suma2;
    cout<< "Verificaremos si dos números son amigos"<<endl;
    cout << "Ingrese un primer número entero"<<endl;
    cin >> numero1;
    cout <<"Ingrese un segundo número entero"<<endl;
    cin >> numero2;

    //Proceso
    //Contador de 1 hasta la mitad del número, si el módulo es 0 se va adicionando
    
    for (int i = 1; i <= numero1/2; i++)
    {
            if (numero1%i == 0)
                suma1 += i;
    }

    for (int j = 1; j <= numero2/2; j++)
    {
            if (numero2%j == 0)
                suma2 += j;
    }

    //Mostrar el resultado
    if (numero1 == suma2 && numero2 == suma1)
        cout<<"Los números: "<< numero1 <<" y "<< numero2<< " son números amigos";
    else
        cout<<"Los números: "<< numero1 <<" y "<< numero2<< " son números amigos";
    return 0;
}