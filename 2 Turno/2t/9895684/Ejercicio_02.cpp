//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programacion 1, Paralelo 1
//Estudiante: Luis Angel Soliz Tindal
//Fecha: 28/08/2024

#include <iostream>

using namespace std;

int opcion;
int valor;

int main(){
    system("cls");
    cout << "Que desea convertir?" << endl;
    cout << "Días(1)   Horas(2)   Minutos(3)   Segundos(4)" << endl;
    cin >> opcion;
    switch (opcion){
        case 1: cout << "Ingrese los dias: "<<endl;
        cin>>valor;
        valor=valor*86400;
        cout<<"El valor ingresado en segundos es: "<<valor;
        break;

        case 2: cout << "Ingrese las horas: "<<endl;
        cin>>valor;
        valor=valor*3600;
        cout<<"El valor ingresado en segundos es: "<<valor;
        break;

        case 3: cout << "Ingrese los minutos: "<<endl;
        cin>>valor;
        valor=valor*60;
        cout<<"El valor ingresado en segundos es: "<<valor;
        break;

        case 4: cout << "Ingrese los segundos: "<<endl;
        cin>>valor;
        cout<<"El valor ya esta en segundos: "<<valor;
        break;


        default: cout << "Opcion no valida...";
    }
    

}