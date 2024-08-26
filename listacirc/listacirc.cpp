#include<iostream>
#include<stdlib.h>

#include "ListaCirc.h"

ListaCirc::ListaCirc()
{
    n = 0;
    pri = NULL;
    ult = NULL;
}

ListaCirc::~ListaCirc()
{
    delete [] n;
}

void ListaCirc::InserePrimeiro(int val)
{
    NoDuplo* p = new NoDuplo();
    p->setInfo(val);
    p->setProx(pri);
    p->setAnt(ult);

    if(n!=0)
    {
        pri->setAnt(p);
        ult->setProx(p);
    }
    else
    {
        ult = p;
    }
    pri = p;
    n++;
}
