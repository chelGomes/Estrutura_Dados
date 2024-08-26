#ifndef ARVBIN_H_INCLUDED
#define ARVBIN_H_INCLUDED
#include "No.h"

class ArvBin
{
  public:
    ArvBin();
    ~ArvBin();
    int consultaRaiz();
    void cria(int x, ArvBin *sae, ArvBin *sad);
    bool vazia(); // verifica se a árvore está vazia
    bool busca(int x);
    void emOrdem();
    int altura(){return auxAltura(raiz);};
    int contaNos(){return auxAltura(raiz);};
    int contaNoFolhas(){return auxFolhas(raiz);};
    float mediaNivel(int k);
    //int contaImpar(){return auxImpares(raiz);};
    void ImpNiveis(){auxImpNiveis(raiz,0);};
    void ImpNivel(int k){auxImpNivel(raiz,0,k);};
    int Impares();
    int contaFolhas();
    void ImpFolha7();
    void cont_i1f();
    int impares1();
    float mediaPares();
    float mediaImpares();
    int maiores();
    int menores();
    void impNiv();
    void impNivDir();
    void impNivEsq();

  private:
    No* raiz; // ponteiro para o No raiz da árvore
    bool auxBusca(No *p, int C);
    No* libera(No *p);
    void auxEmOrdem(No *p);
    int auxAltura(No *p);
    int auxNumNos(No *p);
    int auxFolhas(No *p);
    int auxImpares(No *p);
    void auxImpNiveis(No *p,int nivel);
    void auxImpNivel(No *p,int nivel,int k);
    void auxMediaNivel(No *p,int nivel, int k,int *soma,int *nNos);
    int auxContaFolha(No *p);
    int numFilhos(No *p);
    No* auxImpFolhas7(No* p);
    No* auxCont_i1f(int  *contImpar, int *contFilho,No*p);
    int AuxImpares(No* Arv);
    No* auxMediaPares(float *mediaPares, No* p);
    No* auxMediaImpares(float *mediaImpares,No* p);
    No* auxMaiores(No* p, int x);
    No* auxMenores(No* p, int x);
    void auxImpNiv(No* p, int niv);
    void auxImpNivDir(No* p,int niv);
    void auxImpNivEsq(No* p,int niv);
};

#endif // ARVBIN_H_INCLUDED
