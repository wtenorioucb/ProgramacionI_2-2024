    #include <iostream>

    using namespace std;

    int SeleccionarOpcion();
    void DesplegarOpcionSeleccionada(int);

    int main()
    {    
        int opcionPrincipal;
        do
        {
            opcionPrincipal = SeleccionarOpcion();
            DesplegarOpcionSeleccionada(opcionPrincipal);
        } while (opcionPrincipal != 0);
        return 0;
    }

    // Esta función me muestra un menu y pide una selección
    int SeleccionarOpcion()
    {
        int opcion;
        cout << "MENU DE OPCIONES" << endl;
        cout << "1. Opcion A" << endl;
        cout << "2. Opcion B" << endl;
        cout << "3. Opcion C" << endl;
        cout << "0. SALIR" << endl;
        cout << "Ingrese un opcion: ";
        cin >> opcion;
        return opcion;
    }

    void DesplegarOpcionSeleccionada(int opcion)
    {
        switch (opcion)
        {
            case 1:
                cout << "Usted ha elegido la Opcion A" << endl;
                break;
            case 2:
                cout << "Usted ha elegido la Opcion B" << endl;
                break;
            case 3:
                cout << "Usted ha elegido la Opcion C" << endl;
                break;
            default:
                cout << "Usted no ha seleccionado ninguna opcion, intentelo de nuevo." << endl;
                break;
        }
    }