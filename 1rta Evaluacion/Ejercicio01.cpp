#include <iostream>

using namespace std;

void DesplegarReporte(int);

int main()
{
    int segundos = 0;
    system("cls");
    cout << "Ingresar la cantidad de segundos: ";
    cin >> segundos;
    DesplegarReporte(segundos);
    return 0;
}

void DesplegarReporte(int segundos)
{
    int horas = segundos / 3600;
    int minutos = (segundos - (horas * 3600))/60;
    int segundos_resto = segundos - ((minutos * 60) + (horas * 3600));
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos_resto << endl;
}