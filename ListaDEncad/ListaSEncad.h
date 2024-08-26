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
    // opera��es para percorrer a lista
    void Inicio(); // coloca o ponteiro it no in�cio
    void ProximoNo(); // avan�a o ponteiro it
    bool FimDaLista(); // verifica se it est� no final

    void InserePri(float val);//insere um novo n� contendo val no in�cio da lista
    void EliminaPri(); // elimina o primeiro n� da lista
    void EliminaIt();
    ~ListaDEncad();
};
#endif // LISTADENCAD_H_INCLUDED
