#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int num, c;
    int inicio = 1;
    int fin = 6;
    srand(time(NULL));
    for(c = 1; c <= 100; c++)
    {
        // Número aleatorios entre 1 y 100:
        num = inicio + rand() % ((fin + 1) - inicio);
        cout << num << " ";
    }
    return 0;
}
