#include "pilha.h"

// construtor
PilhaEncadeada::PilhaEncadeada()
{
    topo = NULL;
}

// destrutor
PilhaEncadeada::~PilhaEncadeada()
{
    No* p = topo;
    while(topo != NULL)
    {
        topo = p->consultaProx();
        delete p;
        p = topo;
    }
}

void PilhaEncadeada::empilha(float val)
{
    No* p = new No();
    p->atribInfo(val);
    p->atribProx(topo);
    topo = p;
}

void PilhaEncadeada::desempilha()
{
    No* p;
    if(topo != NULL)
    {
        p = topo;
        topo = p->consultaProx();
        delete p;
    }
    else
    {
        cout << "Erro" << endl;
        exit(1);
    }
}

float PilhaEncadeada::consultaTopo()
{
    if(topo != NULL)
        return topo->consultaInfo();
    else
    {
        cout << "Pilha vazia!" << endl;
        exit(1);
    }
}

bool PilhaEncadeada::vazia()
{
    if(topo == NULL)
        return(true);
    else
        return(false);
}
