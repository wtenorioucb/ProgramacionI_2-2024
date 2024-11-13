//Serie: 1, 1, 2, 4, 7, 11, 18, 36, 65,...
//Los dos primeros t�rminos son arbitrarios (el segundo impar).
//A partir del tercero, si el t�rmino anterior es impar,
//se obtiene sumando los dos t�rminos anteriores; si es par, sumando los tres t�rminos anteriores.

#include <iostream>
#include <wchar.h>

using namespace std;

int serie1(int);

int main()
{
    system("cls");
    for (int i = 1; i <= 20; i++)
        cout << "\t" << serie1(i);
    return 0;
}

int serie1(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
    {
        if (serie1(n-1) % 2 == 0) // Par
            return serie1(n-1) + serie1(n-2) + serie1(n-3);
        else // Impar
            return serie1(n-1) + serie1(n-2);
    }
}
