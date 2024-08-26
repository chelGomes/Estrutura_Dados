#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include "No.h"

using namespace std;

class PilhaEncad
{
private:
    No* topo;                // ponteiro p/ o No do topo

public:
    PilhaEncad();
    ~PilhaEncad();
    float consultaTopo();
    void empilha(float val); // insere No no Topo
    void desempilha();       // elimina No do Topo
    bool vazia();            // verifica se está vazia

    void imprime();

};

#endif // PILHA_H_INCLUDED
