#include <iostream>

using namespace std;

void TarjetaConviene(int);

int main()
{
    int monto = 0;
    system("cls");
    cout << "¿Cuántos Bs tiene?:";
    cin >> monto;
    TarjetaConviene(monto);
    return 0;
}

void TarjetaConviene(int monto)
{
    int tarjeta_10 = monto / 10;
    int tarjeta_30 = monto / 30;
    int tarjeta_50 = monto / 50;
    int tarjeta_100 = monto / 100;

    int cambio_10 = monto - (tarjeta_10 * 10);
    int cambio_30 = monto - (tarjeta_30 * 30);
    int cambio_50 = monto - (tarjeta_50 * 50);
    int cambio_100 = monto - (tarjeta_100 * 100);

    float monto_total_10 = (tarjeta_10 * 10) + ((tarjeta_10 * 10) * 0.05) + cambio_10;
    float monto_total_30 = (tarjeta_30 * 30) + ((tarjeta_30 * 30) * 0.1) + cambio_30;
    float monto_total_50 = (tarjeta_50 * 50) + ((tarjeta_50 * 50) * 0.20) + cambio_50;
    float monto_total_100 = (tarjeta_100 * 100) + ((tarjeta_100 * 100) * 0.30) + cambio_100;

    cout << "Monto total tarjetas 10 Bs: " << monto_total_10 << endl;
    cout << "Monto total tarjetas 30 Bs: " << monto_total_30 << endl;
    cout << "Monto total tarjetas 50 Bs: " << monto_total_50 << endl;
    cout << "Monto total tarjetas 100 Bs: " << monto_total_100 << endl;
}