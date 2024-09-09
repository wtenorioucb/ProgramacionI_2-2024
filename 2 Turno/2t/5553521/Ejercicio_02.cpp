
#include <iostream>
using namespace std ;
int main(){
    system("cls");
    int horas,minutos,segundos,dias;
    cout<<"ingrese los dias : ";
    cin>>dias;
    cout<<"ingrese las horas : ";
    cin>>horas;
    cout<<"ingrese los minutos : ";
    cin>>minutos;
    

    dias=dias*24;
    horas=horas*24;
    minutos=minutos*60;
    segundos=segundos*60;

    cout<<" el resultados en segundos es : "<<segundos;




    return 0;

    
    

    
    

}
