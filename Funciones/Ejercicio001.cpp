#include <iostream>

using namespace std;

int z; // Global

int Sumar(int x, int &y);

int main()
{
    system("cls");
    int suma,x,y; // Local main()
    z = 3;
    x = 2;
    y = 3;
    suma = Sumar(x,y);
    cout << "Valor de la variable suma: " << suma << endl;
    cout << "Valor de la variable x: " << x << endl;
    cout << "Valor de la variable y: " << y << endl;
    cout << "Valor de la variable z: " << z << endl;
    return 0;
}

int Sumar(int x, int &y)
{
    //int z = 0; // Local Sumar()
    z = x + y;
    x = 200;
    y = 100;
    return z;
}