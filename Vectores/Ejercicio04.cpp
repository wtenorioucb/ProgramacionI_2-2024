#include <iostream>
#include <vector> // Libreria para utilizar vectores

using namespace std;

int main()
{
    // int edades[5] = {1,1,1,1,1};
    vector<int> edades_bol(5, 88);
    vector<int> edades_per(5);
    system("cls");
    cout << "Edad BOL" << endl;
    for (int i = 0; i < edades_bol.size(); i++)
    {
        cout << "Edad " << i+1 << ": " << edades_bol[i] << endl;
    }
    edades_per = edades_bol;
    cout << "Edad PER" << endl;
    for (int i = 0; i < edades_per.size(); i++)
    {
        cout << "Edad " << i+1 << ": " << edades_per[i] << endl;
    }
    return 0;
}
