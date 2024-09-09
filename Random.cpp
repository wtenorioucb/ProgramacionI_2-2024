#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int valorInicial, valorFinal, nroAleatorio;
    float resultado = 0;
    float nroAleatorios;
    float vectorDado[6] = {0.0,0.0,0.0,0.0,0.0,0.0};
    cout << "¿Cuantos valores aleatorios desea generar?: ";
    cin >> nroAleatorios;
    cout << "En que valor INICIARA el número aleatorio: ";
    cin >> valorInicial;
    cout << "En que valor FINALIZARA el número aleatorio: ";
    cin >> valorFinal;
    for (int i = 0; i < nroAleatorios; i++)
    {
        nroAleatorio = valorInicial + rand() % (( valorFinal + valorInicial) - valorInicial);
        switch (nroAleatorio)
        {
            case 1:
                vectorDado[0]++;
                break;
            case 2:
                vectorDado[1]++;
                break;
            case 3:
                vectorDado[2]++;
                break;
            case 4:
                vectorDado[3]++;
                break;
            case 5:
                vectorDado[4]++;
                break;
            case 6:
                vectorDado[5]++;
                break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "La cara con el número " << i + 1 << " ha salido " << vectorDado[i] << " veces." << endl;
        resultado = (vectorDado[i] * 100) / nroAleatorios;
        cout << "Su frecuencia es: " << resultado << endl;
    }

    return 0;
}
