#include <iostream>
#include "pilha.h"
#include "fila.h"

using namespace std;

void imprime(PilhaEncadeada *p)
//imprime a pilha p e a esvazia
{
   cout<<endl;
   while(!p->vazia())
   {
      int topo = p->consultaTopo();
      cout<<topo<<" ";

    //void Empilha(float val); // insere No no Topo
      p->desempilha();
   }
}

void imprimePilha(PilhaEncadeada *p, int direcao){
   if(direcao == 0)
      imprime(p);
   else{
      PilhaEncadeada *q = new PilhaEncadeada();
      while(!p->vazia()){
         q->empilha(p->consultaTopo());
         p->desempilha();
      }
      imprime(q);
   }
}

float RetornaTopo(PilhaEncadeada *p){
    float topo = p->desempilha(topo);
    p->empilha(topo);
    return topo;
}


PilhaEncadeada *Concatena (PilhaEncadeada *p1,PilhaEncadeada *p2){
    while(!p2->vazia()){
        p1->empilha(p2->desempilha(p1));
    }
    return p1;
}


float CopiaPilha (PilhaEncadeada *p){

    FilaEncadeada *f = new Fila();
    while(!p->vazia()){
        f->entra(p->desempilha());
    }
    while(!f->vazia()){
        p->empilha(f->sai());
    }
    return p;
}

FilaEncadeada*FilaEncadeada::Intersecao(FilaEncadeada*f1,FilaEncadeada*f2){
    FilaEncadeada*f3 = new FilaEncadeada();
    while(!f1->vazia){
        while(!f2->vazia){
            if(f1->consultaInicio()== f2->consultaInicio())
                f3->entra(f2->consultaInicio);
            else
                f2->sai();
        }
        f1->sai();
    }
}

int main()
{
   PilhaEncadeada *pilha = new PilhaEncadeada();
   for(int i=0; i<13; i++)
      pilha->empilha(i);

   imprimePilha(pilha, 0);

   for(int i=0; i<13; i++)
      pilha->empilha(i);
   imprimePilha(pilha, 1);

   for (int i=0 ;i<13; i++)
    pilha->RetornaTopo(pilha);
   imprimePilha(pilha,2);

   return 0;
}
