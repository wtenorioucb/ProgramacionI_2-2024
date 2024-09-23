#include <iostream>
#include <vector> // Libreria para utilizar vectores

using namespace std;

void DesplegarVector(vector<int> edades);

int main()
{
    vector<int> edades(5, 85);
    system("cls");
    DesplegarVector(edades);
    edades.resize(10,34);
    DesplegarVector(edades);
    edades.erase(edades.begin()+3, edades.begin()+6);
    DesplegarVector(edades);
    edades.push_back(97);
    edades.push_back(98);
    edades.push_back(99);
    DesplegarVector(edades);
    edades.insert(edades.begin()+5, 0);
    DesplegarVector(edades);
    return 0;
}

void DesplegarVector(vector<int> edades)
{
    cout << endl << "El vector EDADES tiene " << edades.size() << " elementos." << endl;
    for (int i = 0; i < edades.size(); i++)
    {
        cout << "Vector EDADES, elemento " << i << ": " << edades[i] << endl;
    }
}