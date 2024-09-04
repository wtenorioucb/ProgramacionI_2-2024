#include <iostream>

using namespace std;

void MenuOpciones();

int main()
{
    MenuOpciones();
    return 0;
}

void MenuOpciones()
{
    int opcion;
    int opcion_submenu1;
    opcion = 0;
    opcion_submenu1 = 0;
    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "\t1. Opcion 1" << endl;
        cout << "\t2. Opcion 2" << endl;
        cout << "\t3. Opcion 3" << endl;
        cout << "\t0. SALIR" << endl;
        cout << "\n\tIngrese la opcion: ";
        cin >> opcion;
        switch (opcion)
        {
            case 0:
                break;
            case 1:
                do
                {
                    system("cls");
                    cout << "MENU DE OPCION 1" << endl;
                    cout << "================" << endl;
                    cout << "\t1. Opcion 1.1" << endl;
                    cout << "\t2. Opcion 1.2" << endl;
                    cout << "\t0. SALIR" << endl;
                    cout << "\n\tIngrese la opcion: ";
                    cin >> opcion_submenu1;
                    switch (opcion_submenu1)
                    {
                        case 0:
                            break;
                        case 1:
                            cout << "Usted ha ingresado a la opcion 1.1" << endl;
                            system("pause");
                            break;
                        case 2:
                            cout << "Usted ha ingresado a la opcion 1.2" << endl;
                            system("pause");
                            break;
                        default:
                            cout << "No existe la opcion ingresada." << endl;
                            system("pause");
                            break;
                    }
                } while (opcion_submenu1 != 0);    
                break;
            case 2:
                cout << "Usted ha ingresado a la opcion 2" << endl;
                system("pause");
                break;
            case 3:
                cout << "Usted ha ingresado a la opcion 3" << endl;
                system("pause");
                break;
            default:
                cout << "No existe la opcion ingresada." << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}