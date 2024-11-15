// Empleando recursividad hallar la sumatoria de la serie:
// 1 - 2 + 3 - 4 + 5 – 6 + 7 – 8 + 9 - 10..... para N términos

// Empleando recursividad hallar la sumatoria de la serie:
// 1 - 2 + 3 - 4 + 5 – 6 + 7 – 8 + 9 - 10..... para N términos


#include <iostream>

using namespace std;

int serie3(int);

int main()
{
    system("cls");
    cout << "La suma del enesimo término es: " << serie3(10);
    return 0;
}

int serie3(int n)
{
    if (n == 1)
        return 1;
    else
    {
        if (n % 2 == 0) // Par
            return serie3(n-1) - n ;
        else // Impar
            return serie3(n-1) + n;
    }
}