#include <iostream>

using namespace std;

int main()
{
    float Temperaturas[5]; // Como definir vector
    float Promedio = 0;
    system("cls");
    // Como solicitar valores al usuario y asignarlos a los elemenstos del vector
    for (int i = 0; i < size(Temperaturas); i++)
    {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> Temperaturas[i];
    }
    // Como desplegar los elementos del vector
    for (int i = 0; i < size(Temperaturas); i++)
    {
        cout << "Elemento " << i + 1  << ": "  <<  Temperaturas[i]  << endl;
    }
    // Sacar el promedio de las temperaturas
    for (int i = 0; i < size(Temperaturas); i++)
    {
        Promedio += Temperaturas[i];
    }
    cout << "El promedio de temperaturas es: " << Promedio / size(Temperaturas);
    return 0;
}
