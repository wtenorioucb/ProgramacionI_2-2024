#include <iostream>
// Libreria para elmanejo de Archivos
#include <fstream>

using namespace std;

int main()
{
    // Abrir el archivo para escribir
    ofstream salida;
    // 1. Abrir el archivo
    salida.open("MensajesHola.txt");
    // 2. Realizar las operaciones
    salida << "Hola mundo, primer mensaje." << endl;
    salida << "Hola mundo, segundo mensaje." << endl;
    salida << "Hola mundo, tercer mensaje." << endl;
    // 3. Cerrar el archivo
    salida.close();
    return 0;
}
