// Dado una cierta cantidad de libros, el nro. de páginas se almacena en un vector.
// Calcular cuantas páginas tienen todos los libros.

#include <iostream>
#include <wchar.h>
#include <vector>

using namespace std;

int totalPaginasLibros(int, vector<int>);

int main()
{
    system("cls");
    vector<int> libros;
    int nroLibros = 0;
    int nroPaginas = 0;
    cout << "Ingrese la cantidad de libros:";
    cin >> nroLibros;
    for (int i = 0; i < nroLibros; i++)
    {
        cout << "Cuantas paginas tiene el libro " << i + 1 << ": ";
        cin >> nroPaginas;
        libros.push_back(nroPaginas);
    }
    cout << "El número total de páginas es: " << totalPaginasLibros(nroLibros-1, libros);
    return 0;
}

int totalPaginasLibros(int nroLibro, vector<int> libros)
{
    if (nroLibro == 0)
    {
        if (libros[nroLibro] % 2 == 0)
        {
            return libros[0];
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if (libros[nroLibro] % 2 == 0)
        {
            return libros[nroLibro] + totalPaginasLibros(nroLibro - 1, libros);
        }
        else
        {
            return 0 + totalPaginasLibros(nroLibro - 1, libros);
        }
        
        
    }
        
}