#include <iostream>

using namespace std;

// PROTIPOS
void AumentarValor(int pasoPorValor, int& pasoPorReferencia);

int main()
{
    int valor1 = 3;
    int valor2 = 5;
    AumentarValor(valor1, valor2);
    cout << "El valor de la variable valor1 es: " << valor1 << endl;
    cout << "El valor de la variable valor2 es: " << valor2 << endl;
    return 0;
}

// Funcion que aumenta en uno dos valor enviados
void AumentarValor(int pasoPorValor, int& pasoPorReferencia)
{
    pasoPorValor++;
    pasoPorReferencia++;
}