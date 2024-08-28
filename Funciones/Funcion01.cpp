#include <iostream>

using namespace std;

// PROTIPOS

void mensajeConsola(int);
void mensajeConsola(char*);
int suma(int valor1, int valor2);
void cambiarValor(int&);

int main()
{
    int valor1, valor2;
    cout << "Ingrese un valor: ";
    cin >> valor1;
    cout << "Ingrese un valor: ";
    cin >> valor2;
    mensajeConsola(suma(valor1,valor2));
    mensajeConsola(valor1);
    cambiarValor(valor1);
    mensajeConsola(valor1);
    mensajeConsola("Fin de programa");
    return 0;
}

// Envia un mensaje a consola SOBRECARGADO
void mensajeConsola(int mensaje)
{
    cout << "El resultado es: " << mensaje << endl;
}

// Envia un mensaje a consola SOBRCARGADO
void mensajeConsola(char *mensaje)
{
    cout << "El resultado es: " << mensaje << endl;
}

// Suma dos valores
int suma(int valor1, int valor2)
{
    return (valor1+valor2);
}

// Cambia el valor del parámetro que se ha enviado.
void cambiarValor(int &a)
{
    a = 30;
}
