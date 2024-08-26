#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include "no.h"

using namespace std;

class PilhaEncadeada
{
private:
    No* topo;                // ponteiro p/ o No do topo
public:
    PilhaEncadeada();
    ~PilhaEncadeada();
    float consultaTopo();
    void empilha(float val); // insere No no Topo
    void desempilha();       // elimina No do Topo
    bool vazia();            // verifica se está vazia
    float RetornaTopo(PilhaEncadeada *p);
    PilhaEncadeada(Concatena(PilhaEncadeada *p1));
    float CopiaPilha(PilhaEncadeada *p);
};

#endif // PILHA_H_INCLUDED
