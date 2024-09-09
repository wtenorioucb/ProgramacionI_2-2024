#include<iostream>
using namespace std;
int main()
{
	float numero, numero2;
	cout << "Ingrese un numero: ";
	cin >> numero;
    cout << "Ingrese un numero: ";
	cin >> numero2;
	if (numero == numero2)
	{
        if (numero==2)
		{
        	if (numero2==2)	
			{
				cout<< numero << " son amigos"<< endl;
			}
			else 
			{
				cout<< numero << " no son amigos"<< endl;
			}
		}
	}
return 0;
}