#ifndef LISTACIRC_H_INCLUDED
#define LISTACIRC_H_INCLUDED

#include "ListaCirc.h"
class ListaCirc
{
public:
    ListaCirc();
    ~ListaCirc();
    void InserePrimeiro(int val);

private:
    NoDuplo* pri;
    NoDuplo* ult;
    int n;
};


#endif // LISTACIRC_H_INCLUDED
