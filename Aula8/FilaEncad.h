#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include "No.h"

using namespace std;

class FilaEncad
{
private:
    No *ini;
    No *fim;      // ponteiros para os No’s extremos
public:
    FilaEncad ();
    ~FilaEncad();
    float consultaInicio();
    void entra(float val); // insere No no fim
    void sai();            // elimina No do início da fila
    bool vazia();          // verifica se fila está vazia
    void InvFila(FilaEncad* F);
    float TransformFila(FilaEncad *F);
    void imprime();

};

#endif // FILA_H_INCLUDED
