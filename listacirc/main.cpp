#include <iostream>
#include<stdlib.h>

#include "ListaCirc.h"
using namespace std;

int main()
{
    int x;
    ListaCirc l;
    l.InserePrimeiro(x);
    cout << endl;
    delete l;
    return 0;
}
