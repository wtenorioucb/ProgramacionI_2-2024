// PRIMERA SIMULACION DE EXAMEN PARCIAL-SEGUNDO TURNO
// MATERIA PROGRAMACION I, PARALELO 1
// ESTUDIANTE NEIDER QUISPE PAYE
// FECHA 28/08/2024

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int numero_1,numero_2,resultados_1=0,resultados_2=0;
    cout <<"ingrese un numero :"<<endl;
    cin >> numero_1,numero_2;
    for (int i = 0; i < numero_1; i++)
    {
        if (numero_1/i==0)
        {
            resultados_1=+resultados_1+i;
            cout<<"es un numero amigo del valor 1 :"<<endl;
        }
        else
        {
            cout<<"no es un numero amigo del valor 1:"<<endl;
        } 
    }
    for (int i = 0; i < numero_2; i++)
    {
        if (numero_2/i==0)
        {
            resultados_2=+resultados_2+i;
            cout<<"esun numero amigo del valor 2:"<<endl;
        }
        else
        {
            cout<<"no es un numero amigo del valor 2:"<<endl;
        } 
    }
    return 0;
}