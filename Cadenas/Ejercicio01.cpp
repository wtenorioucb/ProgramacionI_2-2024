#include <iostream>
#include <string>

using namespace std;

int main()
{
    char cadena1[30] = "Willy Tenorio";
    char *cadena2 = "Willy Tenorio";
    string cadena3 = "Willy Tenorio";
    system("cls");
    cout << "char cadena1[30]: " << cadena1 << endl;
    cout << "char *cadena2: " << cadena2 << endl;
    cout << "string cadena3: " << cadena3 << endl;
    return 0;
}
