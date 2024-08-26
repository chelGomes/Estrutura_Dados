#ifndef ARVBIN_H_INCLUDED
#define ARVBIN_H_INCLUDED
#include "No.h"

class ArvBin
{
  private:
    TNo* raiz; // ponteiro para o No raiz da �rvore
    bool AuxBusca(TNo *p, int C);
    TNo* Libera(TNo *p);
    void AuxInOrdem(TNo *p);
    int Impares(TNo *p);

  public:
    ArvBin();
    int ConsultaRaiz();
    // cria novo No como raiz das sub-�rvores � esquerda
    // (sae) e � direita (sad)
    void Cria(int C, ArvBin *sae, ArvBin *sad);
    bool Vazia(); // verifica se a �rvore est� vazia
    bool Busca(int C);
    void InOrdem();
    int Soma();
    float Media();
    float MediaPar();
    int MaiorVal();
    int MenorVal();
    ~ArvBin();
};

#endif // ARVBIN_H_INCLUDED
