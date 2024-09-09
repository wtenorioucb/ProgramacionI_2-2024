//PRIMERA SIMULACION DE EXAMEN PARCIAL - SEGUNDO TURNO
//Materia: Programación 1, paralelo 1
//Estudiante: Luis Adolfo quispe huacani 
//Fecha: 28/08/24
#include <iostream>
using namespace std;
int main() {
    int numero;
    int reverso = 0;
    cout << "introduzca un numero: "<< endl;
    cin >> numero;
    while (numero != 0)
    {
        reverso = reverso * 10 + numero % 10;
        numero/= 10;
    }
    
    cout << "el numero con cifras reversas es: " << reverso << endl;
    system ("pause");
    return 0;

}