//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//MATERIA: Programacion I, Paralelo 1
//Estudiante: Eduardo Antonio Cruz Cala
//Fecha: 28/08/2024

#include <iostream>

using namespace std;

int main()
{
    system ("cls");
    int d, h, m ,s;
    int total;
    cout << "Ingrese los siguientes datos: " << endl;
    cout << "D: ";
    cin >> d;
    cout << "H: ";
    cin >> h;
    cout << "M: ";
    cin >> m;
    cout << "S: ";
    cin >> s;
    total = (s+(m*60)+((h*60*60)+(d*24*60*60)));
    cout << "El tiempo en segundos: ";
    cout << total;
    return 0;
}
