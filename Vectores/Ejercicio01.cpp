#include <iostream>

using namespace std;

int main()
{
    float Temperaturas[5];
    system("cls");
    Temperaturas[0] = 95.75;
    Temperaturas[1] = 83.0;
    Temperaturas[2] = 97.625;
    Temperaturas[3] = 72.5;
    Temperaturas[4] = 86.25;
    for (int i = 0; i < size(Temperaturas); i++)
    {
        cout << "Elemento " << i  << ": "  <<  Temperaturas[i]  << endl;
    }    
    return 0;
}
