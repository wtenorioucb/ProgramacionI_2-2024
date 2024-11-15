#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "123";
    int num = stoi(str);
    cout << "Número convertido: " << num << std::endl;

    // Ejemplo con base 16 (hexadecimal)
    string hexStr = "1A";
    int hexNum = stoi(hexStr, nullptr, 16);
    cout << "Número hexadecimal convertido: " << hexNum << std::endl;

    // Ejemplo con posición
    string strWithText = "123abc";
    size_t pos;
    int numWithPos = stoi(strWithText, &pos);
    cout << "Número: " << numWithPos << ", posición de parada: " << pos << std::endl;

    return 0;
}