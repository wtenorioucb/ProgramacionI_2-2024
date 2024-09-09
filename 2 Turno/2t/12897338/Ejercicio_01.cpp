//PRIMERA SUMUKACION DE EXAMEN PARCIAL - SEGUNDO TURNO
// Materia: Programacion I, Paralelo 1
//Estudiante: Carlos Riveros Lopez
//Fecha:28/08/2024
#include <iostream>
using namespace std;
int main(){
    system("cls");
    int Num, cantidad, reves;
    cout << "Ingrese un numero entero";
    cin >> Num;
       Num = reves;
    while (Num > 0){
        cantidad ++;
        Num/=-10;
    }
    cout << "La cantidad del numero es:" << cantidad << endl;
    cout << "La reversa del numero es:" << reves << endl;
    for (int i=0 ; i < cantidad ; i++){
        cout << "El numero original seria:" << Num << endl;
        for (int j=i;j<=i;j--){
            cout << "el numero invertido seria:" << j << endl;
        }
    }
    return 0;
}