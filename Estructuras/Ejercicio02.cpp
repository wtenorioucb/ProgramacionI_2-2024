/* DEFINICION DE LIBRERIAS */
#include <iostream>
#include <vector>

using namespace std;

/* DEFINICION DE ESTRUCTURAS */
struct contacto
{
    int id;
    char nombres[30];
    char apellidos[30];
    unsigned long telefono;
    unsigned long celular;
    char email[50];
};

/* DEFINICIONES DE FUNCIONES */
void SeleccionarOpcionMenu(vector<contacto>&);
void AgregarContacto(vector<contacto>&);
void MostrarContactos(vector<contacto>);
void EliminarContacto(vector<contacto>&);
void ModificarContacto(vector<contacto>&);
void BuscarContacto(vector<contacto>);

/* PROGRAMA PRINCIPAL */
int main()
{
    vector<contacto> agenda;
    SeleccionarOpcionMenu(agenda);
    return 0;
}

/* FUNCIONES */

void MenuPrincipal()
{
    system("cls");
    cout << "\tMENU PRINCIPAL" << endl;
    cout << "==========================" << endl;
    cout << "\t1. Agregar contacto" << endl;
    cout << "\t2. Ver contactos" << endl;
    cout << "\t3. Buscar contacto" << endl;
    cout << "\t4. Eliminar contacto" << endl;
    cout << "\t5. Modificar contacto" << endl;
    cout << "\t0. SALIR" << endl;
}

void SeleccionarOpcionMenu(vector<contacto> &agenda)
{
    int opcion = 0;
    do
    {
        MenuPrincipal();
        cout << "Seleccione una opcion:";
        cin >> opcion;
        switch (opcion)
        {
            case 0:
                break;
            case 1:
                AgregarContacto(agenda);
                system("pause");
                break;
            case 2:
                MostrarContactos(agenda);
                system("pause");
                break;
            case 3:
                BuscarContacto(agenda);
                system("pause");
                break;
            case 4:
                EliminarContacto(agenda);
                system("pause");
                break;
            case 5:
                ModificarContacto(agenda);
                system("pause");
                break;
            default:
                cout << "USTED NO HA SELECCIONADO NINGUNA OPCION" << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}

void AgregarContacto(vector<contacto> &agenda)
{
    contacto DatosContacto;
    system("cls");
    cin.ignore();
    cout << endl << "AGREGAR CONTACTO" << endl;
    cout << "================" << endl;
    DatosContacto.id = agenda.size()+1;
    cout << "Ingresar nombres del contacto: ";
    cin.getline(DatosContacto.nombres, 30);
    cout << "Ingresar apellidos del contacto: ";
    cin.getline(DatosContacto.apellidos, 30);
    cout << "Ingresar telefono del contacto: ";
    cin >> DatosContacto.telefono;
    cout << "Ingresar celular del contacto: ";
    cin >> DatosContacto.celular;
    cin.ignore();
    cout << "Ingresar email del contacto: ";
    cin.getline(DatosContacto.email, 50);
    agenda.push_back(DatosContacto);
    cout << "El contacto ha sido agregado correctamente." << endl;
}

void MostrarContactos(vector<contacto> agenda)
{
    system("cls");
    cout << endl << "LISTADO CONTACTOS" << endl;
    cout << "=================" << endl;
    for (int i = 0; i < agenda.size(); i++)
    {
        cout << "\tCONTACTO ID: " << agenda[i].id << endl;
        cout << "\t----------------" << endl;
        cout << "\tNombres: " << agenda[i].nombres << endl;
        cout << "\tApellidos: " << agenda[i].apellidos << endl;
        cout << "\tTelefono: " << agenda[i].telefono << endl;
        cout << "\tCelular: " << agenda[i].celular << endl;
        cout << "\tEmail: " << agenda[i].email << endl;
        cout << "\t-------------------------" << endl << endl;
    }
}

void EliminarContacto(vector<contacto> &agenda)
{
    int id = 0;
    int indice = -1;
    system("cls");
    cout << "Ingrese el ID del contacto a eliminar: ";
    cin >> id;
    for (int i = 0; i < agenda.size(); i++)
    {
        // Buscamos si existe el ID ingresado y guardamos el indice del vector que lo apunta.
        if (agenda[i].id == id)
            indice = i;
    }
    if (indice == -1)
    {
        cout << "No se ha encontrado el ID del contacto." << endl;
    }
    else
    {
        agenda.erase(agenda.begin() + indice);
        cout << "Se ha eliminado el contacto con el ID: " << id << " correctamente." << endl;
    }    
}

void ModificarContacto(vector<contacto> &agenda)
{
    int id = 0;
    int indice = -1;
    system("cls");
    cout << "Ingrese el ID del contacto a modificar: ";
    cin >> id;
    for (int i = 0; i < agenda.size(); i++)
    {
        // Buscamos si existe el ID ingresado y guardamos el indice del vector que lo apunta.
        if (agenda[i].id == id)
            indice = i;
    }
    if (indice == -1)
    {
        cout << "No se ha encontrado el ID del contacto." << endl;
    }
    else
    {
        cout << endl << "MODIFICAR CONTACTO ID: " << id << endl;
        cout << "-----------------------" << endl;
        cin.ignore();
        cout << "Ingresar nombres del contacto: ";
        cin.getline(agenda[indice].nombres, 30);
        cout << "Ingresar apellidos del contacto: ";
        cin.getline(agenda[indice].apellidos, 30);
        cout << "Ingresar telefono del contacto: ";
        cin >> agenda[indice].telefono;
        cout << "Ingresar celular del contacto: ";
        cin >> agenda[indice].celular;
        cin.ignore();
        cout << "Ingresar email del contacto: ";
        cin.getline(agenda[indice].email, 50);
        cout << "Se ha modificado el contacto con el ID: " << id << " correctamente." << endl;
    }    
}

void BuscarContacto(vector<contacto> agenda)
{
    int id = 0;
    int indice = -1;
    system("cls");
    cout << "Ingrese el ID del contacto a buscar: ";
    cin >> id;
    for (int i = 0; i < agenda.size(); i++)
    {
        // Buscamos si existe el ID ingresado y guardamos el indice del vector que lo apunta.
        if (agenda[i].id == id)
            indice = i;
    }
    if (indice == -1)
    {
        cout << "No se ha encontrado el ID del contacto." << endl;
    }
    else
    {
        cout << "\tCONTACTO ID: " << agenda[indice].id << endl;
        cout << "\t----------------" << endl;
        cout << "\tNombres: " << agenda[indice].nombres << endl;
        cout << "\tApellidos: " << agenda[indice].apellidos << endl;
        cout << "\tTelefono: " << agenda[indice].telefono << endl;
        cout << "\tCelular: " << agenda[indice].celular << endl;
        cout << "\tEmail: " << agenda[indice].email << endl;
        cout << "\t-------------------------" << endl << endl;
    }    
}