#ifndef LISTADENCAD_H_INCLUDED
#define LISTADENCAD_H_INCLUDED

#include "No.h"
class ListaDEncad
{
  private:
    No* pri; // ponteiro para o primeiro No da lista
    No* it; // ponteiro auxiliar para percorrer a lista
  public:
    ListaDEncad();
    float Consulta();
    void Atribui(float val);
    bool Busca(float val);
    // operações para percorrer a lista
    void Inicio(); // coloca o ponteiro it no início
    void ProximoNo(); // avança o ponteiro it
    bool FimDaLista(); // verifica se it está no final

    void InserePri(float val);//insere um novo nó contendo val no início da lista
    void EliminaPri(); // elimina o primeiro nó da lista
    void EliminaIt();
    ~ListaDEncad();
};
#endif // LISTADENCAD_H_INCLUDED
