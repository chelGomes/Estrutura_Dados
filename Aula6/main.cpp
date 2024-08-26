#include <iostream>
#include "Ponto2D.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l(10);

    l.insereUlt(24.76);
    l.insereUlt(3.1465);
    l.insereUlt(2.718);
    l.insereUlt(-1.10);
    l.insereUlt(99.0);

    int a;
    l.eliminaNoInicio(a);

    return 0;
}
