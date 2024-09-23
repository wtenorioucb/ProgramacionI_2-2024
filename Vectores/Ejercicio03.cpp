#include <iostream>

using namespace std;

int main()
{
    int edades[] = {34,23,67,25,77,12,99,1};
    for (int i = 0; i < size(edades); i++)
    {
        cout << "Edad " << i+1 << ": " << edades[i] << endl;
    }
    
    return 0;
}
