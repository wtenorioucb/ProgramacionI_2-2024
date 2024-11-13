// Dado una cierta cantidad de libros, el nro. de páginas se almacena en un vector.
// Calcular cuantas páginas tienen todos los libros.

#include <iostream>
#include <wchar.h>

using namespace std;

int totalPaginasLibros(int, int[]);

int main()
{
    system("cls");
    int libros[5] = {34,67,23,87,23};
    cout << "El número total de páginas es: " << totalPaginasLibros(5, libros);
    return 0;
}

int totalPaginasLibros(int nroLibro, int libros[])
{
    if (nroLibro == 0)
        return libros[0];
    else
        return libros[nroLibro] + totalPaginasLibros(nroLibro - 1, libros);
}
