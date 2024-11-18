#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void MenuPrincipal();
void SeleccionarOpcionMenu(string);
void AgregarContacto(string);
void MostrarContactos(string);
void EliminarContacto(string);
int ContarContactos(string);
void BuscarContacto(string);
void ModificarContacto(string);

struct contacto
{
    int id;
    char nombres[30];
    char apellidos[30];
    unsigned long telefono;
    unsigned long celular;
    char email[50];
    short estado;
};

int main()
{
    string NombreArchivo = "Agenda.bin";
    SeleccionarOpcionMenu(NombreArchivo);
    return 0;
}

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

void SeleccionarOpcionMenu(string NombreArchivo)
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
                system("cls");
                break;
            case 1:
                AgregarContacto(NombreArchivo);
                system("pause");
                break;
            case 2:
                MostrarContactos(NombreArchivo);
                system("pause");
                break;
            case 3:
                BuscarContacto(NombreArchivo);
                system("pause");
                break;
            case 4:
                EliminarContacto(NombreArchivo);
                system("pause");
                break;
            case 5:
                ModificarContacto(NombreArchivo);
                system("pause");
                break;
            default:
                cout << "USTED NO HA SELECCIONADO NINGUNA OPCION" << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}

void AgregarContacto(string NombreArchivo)
{
    ofstream archivo;
    contacto DatosContacto;
    system("cls");
    cin.ignore();
    cout << endl << "AGREGAR CONTACTO" << endl;
    cout << "================" << endl;
    DatosContacto.id = ContarContactos(NombreArchivo);
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
    DatosContacto.estado = 1;
    archivo.open(NombreArchivo, ios::binary|ios::app);
    archivo.write((char*)&DatosContacto, sizeof(DatosContacto));
    archivo.close();
    cout << "El contacto ha sido agregado correctamente." << endl;
}

void MostrarContactos(string NombreArchivo)
{
    ifstream archivo;
    contacto DatosContacto;
    system("cls");
    archivo.open(NombreArchivo, ios::binary);
    cout << endl << "LISTADO CONTACTOS" << endl;
    cout << "=================" << endl;
    while (archivo.read((char*)&DatosContacto, sizeof(DatosContacto)))
    {
        if (DatosContacto.estado == 1)
        {
            cout << "\tCONTACTO ID: " << DatosContacto.id << endl;
            cout << "\t----------------" << endl;
            cout << "\tNombres: " << DatosContacto.nombres << endl;
            cout << "\tApellidos: " << DatosContacto.apellidos << endl;
            cout << "\tTelefono: " << DatosContacto.telefono << endl;
            cout << "\tCelular: " << DatosContacto.celular << endl;
            cout << "\tEmail: " << DatosContacto.email << endl;
            cout << "\t-------------------------" << endl << endl;
        }
    }
}

int ContarContactos(string NombreArchivo)
{
    ifstream archivo;
    contacto DatosContacto;
    int contador = 0;
    archivo.open(NombreArchivo, ios::binary);
    while (archivo.read((char*)&DatosContacto, sizeof(DatosContacto)))
    {
        contador++;
    }
    return contador;
}

void EliminarContacto(string NombreArchivo)
{
    fstream archivo;
    contacto DatosContacto;
    int idContacto = 0;
    bool encontrar = false;
    system("cls");
    archivo.open(NombreArchivo, ios::binary | ios::in | ios::out);
    cout << "Ingrese el ID del contacto: " << endl;
    cin >> idContacto;
    while (archivo.read((char*)&DatosContacto, sizeof(DatosContacto)))
    {
        if (DatosContacto.id == idContacto)
        {
            DatosContacto.estado = 0;
            // Mover el puntero de archivo hacia atrás para sobreescribir el registro
            archivo.seekp(-static_cast<int>(sizeof(DatosContacto)), ios::cur);
            // Escribir el registro modificado
            archivo.write(reinterpret_cast<char*>(&DatosContacto), sizeof(DatosContacto));
            encontrar = true;
        }
    }
    if (encontrar)
        cout << "Se ha eliminado el contacto correctamente." << endl;
    else
        cout << "El ID ingresado, no existe en los contactos almacenados." << endl;
    
}

void BuscarContacto(string NombreArchivo)
{
    ifstream archivo;
    contacto DatosContacto;
    int idContacto = 0;
    bool encontrar = false;
    system("cls");
    archivo.open(NombreArchivo, ios::binary);
    cout << "Ingrese el ID del contacto: " << endl;
    cin >> idContacto;
    while (archivo.read((char*)&DatosContacto, sizeof(DatosContacto)))
    {
        if (DatosContacto.id == idContacto && DatosContacto.estado == 1)
        {
            cout << "\tCONTACTO ID: " << DatosContacto.id << endl;
            cout << "\t----------------" << endl;
            cout << "\tNombres: " << DatosContacto.nombres << endl;
            cout << "\tApellidos: " << DatosContacto.apellidos << endl;
            cout << "\tTelefono: " << DatosContacto.telefono << endl;
            cout << "\tCelular: " << DatosContacto.celular << endl;
            cout << "\tEmail: " << DatosContacto.email << endl;
            cout << "\t-------------------------" << endl << endl;
            encontrar = true;
        }
    }
    if (!encontrar)
        cout << "El ID ingresado, no existe en los contactos almacenados." << endl;
}

void ModificarContacto(string NombreArchivo)
{
    fstream archivo;
    contacto DatosContacto;
    string dato;
    int idContacto = 0;
    bool encontrar = false;
    system("cls");
    archivo.open(NombreArchivo, ios::binary | ios::in | ios::out);
    cout << "Ingrese el ID del contacto: " << endl;
    cin >> idContacto;
    while (archivo.read((char*)&DatosContacto, sizeof(DatosContacto)))
    {
        if (DatosContacto.id == idContacto && DatosContacto.estado == 1)
        {
            cin.ignore();
            cout << endl << "AGREGAR CONTACTO" << endl;
            cout << "================" << endl;
            cout << "Ingresar nombres del contacto (" << DatosContacto.nombres << "): ";
            getline(cin, dato);
            if (!dato.empty())
                dato.copy(DatosContacto.nombres, dato.size(), 0);
            cout << "Ingresar apellidos del contacto (" << DatosContacto.apellidos << "): ";
            cin.getline(DatosContacto.apellidos, 30);
            cout << "Ingresar telefono del contacto (" << DatosContacto.telefono << "): ";
            cin >> DatosContacto.telefono;
            cout << "Ingresar celular del contacto (" << DatosContacto.celular << "): ";
            cin >> DatosContacto.celular;
            cin.ignore();
            cout << "Ingresar email del contacto (" << DatosContacto.email << "): ";
            cin.getline(DatosContacto.email, 50);
            archivo.seekp(-static_cast<int>(sizeof(DatosContacto)), ios::cur);
            archivo.write(reinterpret_cast<char*>(&DatosContacto), sizeof(DatosContacto));
            encontrar = true;
        }
    }
    if (encontrar)
        cout << "Se ha modificado el contacto correctamente." << endl;
    else
        cout << "El ID ingresado, no existe en los contactos almacenados." << endl;
}