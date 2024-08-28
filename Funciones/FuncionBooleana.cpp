#include <iostream>

using namespace std;

bool EsParImpar(int);

int main()
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (EsParImpar(numero))
        cout << "El número es PAR";
    else
        cout << "El número es IMPARPAR";
    
    return 0;
}

bool EsParImpar(int numero)
{
    if (numero % 2 == 0)
        return true;
    else
        return false;
    
};