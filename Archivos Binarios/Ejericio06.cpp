#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void MenuPrincipal();
void SeleccionarOpcionMenu();
void CrearArchivo();
void AdicionarTexto();
void MostrarContenido();

int main()
{
    SeleccionarOpcionMenu();
    return 0;
}

void MenuPrincipal()
{
    system("cls");
    cout << "\tMENU PRINCIPAL" << endl;
    cout << "==========================" << endl;
    cout << "\t1. Crear archivo" << endl;
    cout << "\t2. Adicionar texto" << endl;
    cout << "\t3. Ver contenido" << endl;
    cout << "\t0. SALIR" << endl;
}

void SeleccionarOpcionMenu()
{
    int opcion = 0;
    do
    {
        MenuPrincipal();
        cout << "Seleccione una opcion:";
        cin >> opcion;
        cin.ignore();
        switch (opcion)
        {
            case 0:
                break;
            case 1:
                CrearArchivo();
                system("pause");
                break;
            case 2:
                AdicionarTexto();
                system("pause");
                break;
            case 3:
                MostrarContenido();
                system("pause");
                break;
            default:
                cout << "USTED NO HA SELECCIONADO NINGUNA OPCION" << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}

void CrearArchivo()
{
    string NombreArchivo;
    ofstream Archivo;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, NombreArchivo);
    NombreArchivo += ".txt";
    Archivo.open(NombreArchivo);
    Archivo.close();
}

void AdicionarTexto()
{
    string NombreArchivo;
    string LineaTexto;
    ofstream Archivo;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, NombreArchivo);
    NombreArchivo += ".txt";
    Archivo.open(NombreArchivo, ios::app);
    cout << "Ingrese el contenido del archivo: " << endl;
    getline(cin, LineaTexto);
    Archivo << LineaTexto << endl;
    Archivo.close();
}

void MostrarContenido()
{
    string NombreArchivo;
    string LineaTexto;
    ifstream Archivo;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, NombreArchivo);
    NombreArchivo += ".txt";
    Archivo.open(NombreArchivo);
    while (!Archivo.eof())
    {
        getline(Archivo, LineaTexto);
        cout << LineaTexto << endl;
    }
    Archivo.close();
}

