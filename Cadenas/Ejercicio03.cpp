#include <iostream>
#include <vector>
#include <string>

using namespace std;
 
int main()
{
    system("cls");
    string linea;
    vector<string> parrafo;
    cout << "Ingrese un parrafo, para finalizar el parrafo presione ENTER sin ningun caracter" << endl;
    while (getline(cin, linea))
    {
        if (linea.empty())
            break;
        parrafo.push_back(linea);
    }
    for (string &linea: parrafo)
    {
        cout << linea << endl;
    }
    return 0;
}