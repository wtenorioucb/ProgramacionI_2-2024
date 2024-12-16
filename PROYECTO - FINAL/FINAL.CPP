#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <windows.h>
#include <vector>
#include <cstdlib>
using namespace std;

struct elem_contrasenas
{
    int ID;
    char cuenta [30];
    char keyword[50];
    short estado;
};

void menu (string lista,string llave, string sus);
void crear (string lista,string llave);
void ver (string lista,string llave);
void editar (string lista,string llave);
void eliminar (string lista,string llave);
bool verificar_id (string lista, int id);

string login ();
string encriptador(string texto, string llave);
string decriptador(string texto, string llave);
string reverso(string principal);
bool vacio(const string& filename);

void menu_sus(string sus, string llave);
void detalles_sus(string sus, string llave);
void expandir(string sus);
void desuscrubirse(string sus);

int main()
{
    int id;
    string lista = "Lista.bin";
    string sus = "principal.txt";
    string llave;
    llave = login();
    menu(lista,llave, sus);
    return 0;
}

void menu (string lista, string llave ,string sus)
{
    int opcion=0;
    do {
        system("cls");
        cout << "MENU PRINCIPAL\n---\n";
        cout << "1. AGREGAR NUEVO PASSWORD."<< endl;
        cout << "2. VER LISTA DE PASSWORDS."<< endl;
        cout << "3. EDITAR PASSWORD."<< endl;
        cout << "4. ELIMINAR PASSWORD."<<endl;
        cout << "5. CUENTA Y SUSCRIPCION." << endl;
        cout << "0. SALIR.\nSeleccione una opcion:\t";
        cin >> opcion;
        switch (opcion)
        {
        case 0:
            break;
        case 1:
            crear(lista,llave);
            system("pause");
            break;
        case 2:
            ver(lista,llave);
            system("pause");
            break;
        case 3:
            editar(lista,llave);
            system("pause");
            break;
        case 4:
            eliminar(lista,llave);
            system("pause");
            break;
        case 5:
            menu_sus(sus,llave);
            system("pause");
            break;
        default:
            cout << "No se selecciono ninguna opcion.";
            break;
        }
    } while (opcion!=0);
}

void crear (string lista,string llave)
{
    ofstream archivo;
    elem_contrasenas contrasena;
    bool verificacion=false;
    system("cls");
    cout << "AGREGAR NUEVO PASSWORD\n";
    do
    {
        cout << "  Ingrese el ID:\t";
        cin >> contrasena.ID;
        if (!verificar_id(lista, contrasena.ID)) 
        {
            cout << "Numero de ID ya en uso. Intente de nuevo.\n";
        } 
        else 
        {
            verificacion = true;
        }
    } while (!verificacion);
    cout << "  Ingrese la cuenta:\t";
    cin.ignore();
    cin.getline(contrasena.cuenta,30);
    cout << "  Ingrese el password:\t";
    cin.getline(contrasena.keyword,50);

    strcpy(contrasena.keyword,(encriptador(contrasena.keyword,llave).c_str()));

    contrasena.estado=1;
    archivo.open (lista, ios::binary|ios::app);
    archivo.write((char*)&contrasena, sizeof(contrasena));
    archivo.close();
    cout << "El password y sus datos han sido agregados correctamente."<<endl;
}

void ver (string lista,string llave)
{
    ifstream archivo;
    elem_contrasenas contrasena;
    system("cls");
    archivo.open(lista, ios::binary);
    cout << "PASSWORDS ALMACENADOS" << endl;
    cout << left << setw(5) << "ID" << setw(30) << "CUENTA" << setw(50) << "PASSWORD" << endl;
    cout << string(60, '-') << endl;
    while (archivo.read((char*)&contrasena, sizeof(contrasena))) 
    {
        if (contrasena.estado == 1) 
        {
            cout << left << setw(5) << contrasena.ID;
            cout<< setw(30) << contrasena.cuenta;
            cout << setw(50) << decriptador(contrasena.keyword,llave) << endl;
        }
    }
}

void editar (string lista,string llave)
{
    fstream archivo;
    elem_contrasenas contrasena;
    string cuenta, key;
    bool verificacion=false;
    int id;
    bool encontrar = false;
    system("cls");
    archivo.open(lista, ios::binary | ios::in | ios::out);
    cout << "Ingrese el ID del password que se desea editar.\t";
    cin >> id;
    while (archivo.read((char*)&contrasena, sizeof(contrasena)))
    {
        if (contrasena.ID==id && contrasena.estado==1)
        {
            cin.ignore();
            cout << "EDITAR PASSWORD\n";
            cout << "  Ingrese la cuenta (" << contrasena.cuenta <<"):\t";
            getline(cin, cuenta);
            if (!cuenta.empty())
                cuenta.copy(contrasena.cuenta, cuenta.size(), 0);
            cout << "  Ingrese el password(" << decriptador(contrasena.keyword,llave) <<"):\t";
            getline(cin, key);
            if (!key.empty())
                key = encriptador(key,llave);
                key.copy(contrasena.keyword, key.size(), 0);
            archivo.seekp(-static_cast<int>(sizeof(contrasena)), ios::cur);
            archivo.write(reinterpret_cast<char*>(&contrasena), sizeof(contrasena));
            encontrar = true;
        }
    }
    if (encontrar)
    {
        cout << "El password y todos sus datos han sido modificados correctamente." << endl;
    }
    else
    {
        cout << "El ID ingresado no existe en los passwords almacenados." << endl;
    }
}

void eliminar (string lista,string llave)
{
    fstream archivo;
    elem_contrasenas contrasena;
    int id;
    bool encontrar = false;
    system("cls");
    archivo.open(lista, ios::binary | ios::in | ios::out);
    cout << "Ingrese el ID el password que desea eliminar.\t";
    cin >> id;
    while (archivo.read((char*)&contrasena, sizeof(contrasena)))
    {
        if (contrasena.ID== id)
        {
            contrasena.estado=0;
            archivo.seekp(-static_cast <int> (sizeof(contrasena)), ios::cur);
            archivo.write(reinterpret_cast <char*>(&contrasena), sizeof(contrasena));
            encontrar = true;
        }
    }
    archivo.close();
    if (encontrar)
    {
        cout << "El password y todos sus datos han sido borrados correctamente." << endl;
    }
    else
    {
        cout << "El ID ingresado no existe en los passwords alamacenados." << endl;
    }
}

bool verificar_id (string lista, int id)
{
    ifstream archivo (lista, ios::binary);
    if (!archivo.is_open())
    {
        return true;
    }
    int c=0;
    elem_contrasenas contrasena;
    
    while (archivo.read(reinterpret_cast<char*>(&contrasena), sizeof(contrasena)))
    {
        if(contrasena.ID==id && contrasena.estado==1)
        {
            archivo.close();
            return false;
        }
    }
    archivo.close();
    return true;
}

string encriptador(string texto, string llave)
{
    int suma = 0, placeholder = 0, tot = 94;
    string letra, real;
    for (int i = 0; i < llave.length();i++)
    {
        suma += ((int)llave[i]);
    }
    suma = suma % tot;
    for (int b = 0; b < texto.length(); b++)
    {
        placeholder = (int)texto[b];
        for (int i = 1; i<= suma; i++)
        {
            placeholder += 1;
            if (placeholder == 127) {placeholder = 33;}
        }
        letra = char(placeholder);
        real.append(letra);
    }
    return real;
}

string decriptador(string texto, string llave)
{
    int suma = 0, placeholder = 0, tot = 94;
    string letra, real;
    for (int i = 0; i < llave.length();i++)
    {
        suma += ((int)llave[i]);
    }
    suma = suma % tot;
    for (int b = 0; b < texto.length(); b++)
    {
        placeholder = (int)texto[b];
        for (int i = 1; i<= suma; i++)
        {
            placeholder -= 1;
            if (placeholder == 32) {placeholder = 126;}
        }
        letra = char(placeholder);
        real.append(letra);
    }
    return real;
}

string reverso(string principal)
{
    int largo;
    string resto = "", letra = "";
    
    largo = principal.length();
    for (int i = 0; i < largo; i++)
    {
        letra = principal[largo-i-1];
        resto.append(letra);
    }
    return (resto);
}

bool vacio(const string& filename) 
{
    ifstream file(filename);
    return file.peek() == ifstream::traits_type::eof();
}

string login ()
{
    system("cls");
    const string nombrearchi = "principal.txt";
    bool confirmacion = true;
    string usuario, contra_encriptada, fecha_inicio, venc="1";
    string contrasenia, contra_rever;
    if (vacio(nombrearchi))
    {   
        cout << "Cuenta no detectada, dirigiendose a la creacion de cuenta" << endl;
        system("pause");
        system("cls");
        cout << "Ingrese su usuario: "; getline(cin,usuario);
        cout << "Ingrese la fecha: "; getline(cin,fecha_inicio);
        while (confirmacion)
        {
            cout << "Ingrese su password: "; getline(cin,contrasenia);
            contra_rever = reverso(contrasenia);
            contra_encriptada = encriptador(contrasenia,contra_rever);
            system("cls");
            cout << "Confirme su password al escribirlo denuevo: "; getline(cin,contrasenia); system("cls");
            contra_rever = reverso(contrasenia);
            if (contrasenia != decriptador(contra_encriptada, contra_rever))
                {
                    cout << "Los passwords no coinciden, regresando a ingreso de password" << endl;
                    system("pause"); system("cls"); 
                }
            else
                {
                    ofstream archivo(nombrearchi, ios::app);
                    cout << "Password confirmado, usuario guardado" << endl;
                    archivo << usuario << endl << contra_encriptada << endl << fecha_inicio <<endl << venc;
                    archivo.close();
                    system("pause"); system("cls");
                    confirmacion = false;
                } 
        }
    }
    else
    {   
        ifstream archivo(nombrearchi);
        getline(archivo,usuario);
        getline(archivo,contra_encriptada);
        archivo.close();
        while(confirmacion)
        {
            system("cls");
            cout << "Usuario: " << usuario << endl;
            cout << "Ingrese el password: "; cin >> contrasenia;
            contra_rever = reverso(contrasenia);
            if(contrasenia == decriptador(contra_encriptada,contra_rever)) {cout << "Password correcto, continuando al programa" << endl; confirmacion = false; system("pause"); system("cls");}
            else {cout << "Password incorrecto, regresando a password"; system("pause");}
        }
        archivo.close();
    }
    return (contra_rever);
}

void menu_sus(string sus, string llave)
{
    int opcion=0;
    do {
        system("cls");
        cout << "MENU DE CUENTA\n---\n";
        cout << "1. DETALLES DE CUENTA."<< endl;
        cout << "2. EXTENSION DE SUSCRIPCION."<< endl;
        cout << "3. DESUSCRIBIRSE." << endl;
        cout << "0. SALIR.\nSeleccione una opcion:\t";
        cin >> opcion;
        switch (opcion)
        {
        case 0:
            break;
        case 1:
            detalles_sus(sus, llave);
            system("pause");
            break;
        case 2:
            expandir(sus);
            system("pause");
            break;
        case 3:
            desuscrubirse(sus);
            system("pause");
            break;
        default:
            cout << "No se selecciono ninguna opcion.";
            break;
        }
    } while (opcion!=0);
}

void detalles_sus(string sus, string llave)
{
    ifstream archivo (sus);
    string linea, dia, mes, fecha;
    int n=0;
    int m,v;
    system("cls");
    while (getline(archivo,linea))
    {
        ++n;
        switch (n)
        {
        case 1:
            cout << "Usuario: " << linea << endl;
            break;
        case 2:
            cout << "Password: " << reverso(llave)<< endl;
            break;
        case 3:
            cout << "Fecha de inicio: " << linea << endl;
            fecha=linea;           
            break;
        case 4:
            dia=fecha.substr(0,fecha.find('/'));
            fecha.erase(0,dia.size()+1);
            mes=fecha.substr(0,fecha.find('/'));
            fecha.erase(0,mes.size()+1);
            m=stoi(mes);
            v=stoi(linea);
            if (v==1)
            {
                cout << "Usted se encuentra en el periodo de prueba"<<endl;
            }
            else
            {
                cout << "La suscripcion dura "<< v << " meses." << endl;
            }
            break;
        default:
            break;
        }
    }
    archivo.close();
}

void expandir(string sus)
{
    system("cls");
    vector <string> v_lineas;
    string line;
    int n,m;
    ifstream archivo (sus);
    while (getline(archivo,line))
    {
        v_lineas.push_back(line);
    }
    archivo.close();
    m=stoi(v_lineas[3]);
    cout << "AMPLIAR SUSCRIPCION"<<endl;
    cout << "Ingrese por cuantos meses desea ampliar: "; cin >> n;
    m=n+m;
    v_lineas[3]=to_string(m);
    ofstream archivo_o (sus, ios::trunc);
    for (int i = 0; i < v_lineas.size(); i++)
    {
        archivo_o << v_lineas[i] << endl;
    }
    archivo_o.close();
}

void desuscrubirse(string sus)
{
    system("cls");
    int n;
    string lista= "Lista.bin";
    cout<< "DESUSCRIPCION\n"<< "Ingrese 1 si desea desuscribirse: ";
    cin >> n;
    if (n==1)
    {
        if (remove(sus.c_str()) == 0 && remove(lista.c_str())==0) 
        {
            cout << "Usted se ha desuscrito correctamente. Todas los passwords han sido borrados con exito." << endl;
            exit(0);
        } 
        else 
        {
            cerr << "Error al desuscribirse." << endl;
        }
    }
    else
    {
        cout << "Volviendo al menu..."<< endl; 
    }

}