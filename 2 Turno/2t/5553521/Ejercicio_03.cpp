
#include <iostream>
using namespace std ;
int main(){
    system("cls");
    int num1;
    int num2;
    int div1,div2;


    cout<<"ingrese el primer numero :"; cin>> num1;
    cout<<"ingrese el segundo numero : "; cin>>num2;

    for (int  i = 1; i <=num1; i++)
    {
        while (num1/i)
        div1+=div1;
    }
    for (int i = 1; i <=num2; i++)
        while (num2/i)
        {
            div2+=div2;
        }
        
    
    if (div1==num2&&div2==num1)
    {
        
        cout<<"son numeros amigos";

    }
    else{
        cout<<"no son numeros amigos";

    }
    return 0;


    
    

}
