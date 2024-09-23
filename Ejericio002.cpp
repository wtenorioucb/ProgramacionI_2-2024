#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int IngresoCantidad();
void CalculoDeCantidadProductos(int n, int &CantidadGalletas, int &CantidadFideos, int &CantidadChisitos, int &CantidadPipocas, int &CantidadPanetones);
float VentaTotal(int CantidadGalletas, int CantidadFideos, int CantidadChisitos, int CantidadPipocas, int CantidadPanetones);

int main()
{
    int n = 0;
    int CantidadGalletas = 0;
    int CantidadFideos = 0;
    int CantidadChisitos = 0;
    int CantidadPipocas = 0;
    int CantidadPanetones = 0;
    srand(time(NULL));
    n = IngresoCantidad();
    CalculoDeCantidadProductos(n, CantidadGalletas, CantidadFideos,CantidadChisitos, CantidadPipocas, CantidadPanetones);
    cout << "El monto total de mi compra es: " << VentaTotal(CantidadGalletas, CantidadFideos,CantidadChisitos, CantidadPipocas, CantidadPanetones) << endl;
    cout << "El IVA total de mi compra es: " << VentaTotal(CantidadGalletas, CantidadFideos,CantidadChisitos, CantidadPipocas, CantidadPanetones) * 0.13;
    return 0;
}

int IngresoCantidad()
{
    int n;
    int intentos = 0;
    do
    {
        system("cls");
        cout << "¿Cuántos productos desea comprar?: ";
        cin >> n;
        intentos++;
    } while (n <= 0 && intentos <= 5);
    
    return n;
}

void CalculoDeCantidadProductos(int n, int &CantidadGalletas, int &CantidadFideos, int &CantidadChisitos, int &CantidadPipocas, int &CantidadPanetones)
{
    // randamico = inicial + rand() % ( (final + 1) - inicial) )
    CantidadGalletas = 0 + rand() % ( (n + 1) - 0);
    CantidadFideos =  0 + rand() % ( (( n - CantidadGalletas) + 1) - 0);
    CantidadChisitos =  0 + rand() % ( (( n - ( CantidadGalletas + CantidadFideos) ) + 1) - 0);
    CantidadPipocas =  0 + rand() % ( (( n - ( CantidadGalletas + CantidadFideos + CantidadChisitos) ) + 1) - 0);
    CantidadPanetones =  0 + rand() % ( (( n - ( CantidadGalletas + CantidadFideos + CantidadChisitos + CantidadPipocas) ) + 1) - 0);
}

float VentaTotal(int CantidadGalletas, int CantidadFideos, int CantidadChisitos, int CantidadPipocas, int CantidadPanetones)
{
    float MontoTotal = 0.0;
    MontoTotal += CantidadGalletas * 3.5;
    MontoTotal += CantidadFideos * 12;
    MontoTotal += CantidadChisitos * 12;
    MontoTotal += CantidadPipocas * 10;
    MontoTotal += CantidadPanetones * 35;
    return MontoTotal;
}

