#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include "no.h"

using namespace std;

class FilaEncadeada
{
private:
    No *ini;
    No *fim;      // ponteiros para os No’s extremos
public:
    FilaEncadeada ();
    ~FilaEncadeada();
    float consultaInicio();
    void entra(float val); // insere No no fim
    void sai();            // elimina No do início da fila
    bool vazia();          // verifica se fila está vazia
    FilaEncadeada(Intersecao(FilaEncadeada*f3));
};

#endif // FILA_H_INCLUDED
