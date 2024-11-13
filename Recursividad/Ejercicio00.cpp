#include <iostream>
#include <wchar.h>

using namespace std;

int busquedaBinariaRecursiva(int[], int, int, int);

int main()
{
    int v[] = {2,4,14,23,34,67};
    int n = 9;
    setlocale(LC_ALL, "");
    cout << "Resultado: " << busquedaBinariaRecursiva(v,34,0,5);
    return 0;
}

int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha){
    if (izquierda > derecha) return -1;
 
    int indiceDeLaMitad = (izquierda + derecha) / 2;
 
    int valorQueEstaEnElMedio = arreglo[indiceDeLaMitad];
    if (busqueda == valorQueEstaEnElMedio)
    {
        return indiceDeLaMitad;
    }
    
    if (busqueda < valorQueEstaEnElMedio)
    {
        // Entonces está hacia la izquierda
        derecha = indiceDeLaMitad - 1;
    }
    else
    {
        // Está hacia la derecha
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}