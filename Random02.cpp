#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    cout << "Random entre 20 y 30: ";
    cout << 20 + rand() % ((30 + 1) - 20);
    return 0;
}



