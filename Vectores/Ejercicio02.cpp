#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int j = 0;
    // Vector sin inicializar ni indicar tamaño
    vector<double> arreglo_1;
    // Vector con tamaño 5 y componentes inicilizadas
    vector<double> arreglo_2(5,3.1415);
    system("cls");
    cout << "MOSTRAR DATOS VECTOR CON FOR NORMAL" << endl;
    cout << "===================================" << endl;
    for(int i = 0; i < arreglo_2.size(); i++) // Con el mtodo .size() se obtiene el tamaño del vector
    {
        // Mostrar las componentes con un ciclo
        cout << "Elemento " << i << ": " << arreglo_2[i] << endl;
    }
    arreglo_1 = arreglo_2;
    arreglo_1.resize(10);
    cout << "MOSTRAR DATOS VECTOR CON FOR EACH" << endl;
    cout << "=================================" << endl;
    for(auto valor : arreglo_1)
    {
        cout << "Elemento " << j << ": " << valor << endl;
        j++;
    }
    cout << "MOSTRAR DATOS VECTOR BORRANDO ELEMENTOS" << endl;
    cout << "=======================================" << endl;
    arreglo_1.erase(arreglo_1.begin()+3, arreglo_1.begin()+6);
    for(auto valor : arreglo_1)
    {
        cout << valor << endl;
    }
    arreglo_1.push_back(4.33);
    arreglo_1.push_back(5.33);
    cout << "MOSTRAR DATOS VECTOR DESPUES DEL push_back" << endl;
    cout << "=======================================" << endl;
    for(auto valor : arreglo_1)
    {
        cout << valor << endl;
    }
    arreglo_1.insert(arreglo_1.begin()+3, 66.66);
    cout << "MOSTRAR DATOS VECTOR DESPUES DEL push_back" << endl;
    cout << "=======================================" << endl;
    for(auto valor : arreglo_1)
    {
        cout << valor << endl;
    }
    return 0;
}