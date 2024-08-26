#ifndef LISTASENCAD_H_INCLUDED
#define LISTASENCAD_H_INCLUDED

#include "No.h"
class ListaSEncad
{
  private:
    No* pri; // ponteiro para o primeiro No da lista
    No* it; // ponteiro auxiliar para percorrer a lista
  public:
    ListaSEncad();
    float Consulta();
    void Atribui(float val);
    bool Busca(float val);
    // opera��es para percorrer a lista
    void Inicio(); // coloca o ponteiro it no in�cio
    void ProximoNo(); // avan�a o ponteiro it
    bool FimDaLista(); // verifica se it est� no final

    void InserePri(float val);//insere um novo n� contendo val no in�cio da lista
    void EliminaPri(); // elimina o primeiro n� da lista
    void EliminaIt();
    ~ListaSEncad();
    void ImprimeLista();
    int ValMaioresK(ListaSEncad*Lista,int k);
    void RemoveVal(float Val);
};
#endif // LISTASENCAD_H_INCLUDED
