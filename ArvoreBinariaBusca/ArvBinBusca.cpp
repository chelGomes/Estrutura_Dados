#include <iostream>
#include "ArvBinBusca.h"

using namespace std;

ArvBinBusca::ArvBinBusca()
{
    raiz = NULL;
}

bool ArvBinBusca::vazia()
{
    return raiz == NULL;
}

void ArvBinBusca::insere(int C)
{
    raiz = auxInsere(raiz, C);
}

No* ArvBinBusca::auxInsere(No *p, int C)
{
    if(p == NULL)
    {
        p = new No;
        p->setInfo(C);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else if(C < p->getInfo())
        p->setEsq(auxInsere(p->getEsq(), C));
    else
        p->setDir(auxInsere(p->getDir(), C));
    return p;
}

bool ArvBinBusca::busca(int C)
{
    return auxBusca(raiz, C);
}

bool ArvBinBusca::auxBusca(No* p, int C)
{
    if(p == NULL)
        return false;
    else if(p->getInfo() == C)
        return true;
    else if(C < p->getInfo())
        return auxBusca(p->getEsq(), C);
    else
        return auxBusca(p->getDir(), C);
}

void ArvBinBusca::remove(int C)
{
    raiz = auxRemove(raiz, C);
}

No* ArvBinBusca::auxRemove(No* p, int C)
{
    if(p == NULL)
        return NULL;
    else if(C < p->getInfo())
        p->setEsq(auxRemove(p->getEsq(), C));
    else if(C > p->getInfo())
        p->setDir(auxRemove(p->getDir(), C));
    else
    {
        if(p->getEsq() == NULL && p->getDir() == NULL)
            p = removeFolha(p);
        else if((p->getEsq() == NULL) || (p->getDir() == NULL))
            p = remove1Filho(p);
        else
        {
            No *aux = menorSubArvDireita(p);
            int auxC = aux->getInfo();
            p->setInfo(auxC);
            aux->setInfo(C);
            p->setDir(auxRemove(p->getDir(), C));
        }
    }
    return p;
}

No* ArvBinBusca::removeFolha(No *p)
{
    delete p;
    return NULL;
}

No* ArvBinBusca::remove1Filho(No *p)
{
    No *aux;
    if(p->getEsq() == NULL)
        aux = p->getDir();
    else
        aux = p->getEsq();
    delete p;
    return aux;
}

No* ArvBinBusca::menorSubArvDireita(No *p)
{
    No *aux = p->getDir();
    while(aux->getEsq() != NULL)
        aux = aux->getEsq();
    return aux;
}

void ArvBinBusca::imprime()
{
    imprimePorNivel(raiz, 0);
}

void ArvBinBusca::imprimePorNivel(No* p, int nivel)
{
    if (p != NULL)
    {
        cout << "(" << nivel << ")";
        for(int i = 1; i <= nivel; i++)
            cout << "--";
        cout << p->getInfo() << endl;
        imprimePorNivel(p->getEsq(), nivel+1);
        imprimePorNivel(p->getDir(), nivel+1);
    }
}

ArvBinBusca::~ArvBinBusca()
{
    raiz = libera(raiz);
}

No* ArvBinBusca::libera(No *p)
{
    if(p != NULL)
    {
        p->setEsq(libera(p->getEsq()));
        p->setDir(libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return p;
}

float ArvBinBusca::mediaCaminho(int ch)
{
    int soma = 0, cont = 0;
    if(raiz != NULL)
    {
        No *p = raiz;
        while(p->getInfo() != ch && p != NULL)
        {
            cont = cont + 1;
            soma = soma + p->getInfo();
            if(ch > p->getInfo())
                p = p->getDir();
            else
                p = p->getEsq();
        }
        if(p != NULL) // soma contribuicao do no com valor ch
        {
            cont = cont + 1;
            soma = soma + p->getInfo();
        }
    }
    return (float)soma/cont;
}

int ArvBinBusca::maior()
{
    if(raiz != NULL)
    {
        No *p = raiz;
        while(p->getDir() != NULL)
            p = p->getDir();
            return p->getInfo();
    }
    else
    {
        cout<<"arvore vazia!";
        exit(1);
    }
    return maior();
}

int ArvBinBusca::menor()
{
    if(raiz != NULL)
    {
        No *p = raiz;
        while(p->getEsq() != NULL)
            p = p->getEsq();
        return p->getInfo();
    }
    else
    {
        cout<<"arvore vazia!";
        exit(2);
    }
    return menor();
}

int ArvBinBusca::removeMaior()

{

    if(raiz != NULL)
    {
        int valor;
        No *p = raiz, *pai = NULL;
        while(p->getDir() != NULL)
        {
            pai = p;
            p = p->getDir();

        }
        valor = p->getInfo();
        pai->setDir(NULL);
        delete p;
        return valor;
    }

}

int ArvBinBusca::removeMenor()
{
    if(raiz != NULL)
    {
        int val;
        No *p = raiz, *pai = NULL;
        while(p->getEsq() != NULL)
        {
            pai = p;
            p = p->getEsq();

        }
        val = p->getInfo();
        pai->setEsq(NULL);
        delete p;
        return val;
    }
}
int ArvBinBusca::auxContaParesCaminho(No *p, int x)
{
    if(p == NULL)
        return 0;
    else
    {
        int v = p->getInfo();
         bool par = v %2 == 0;

        if(x > v)
            if(par)
                return 1+auxContaParesCaminho(p->getDir(),x);
            else
                return auxContaParesCaminho(p->getDir(),x);
        else if(x < v)
            if(par)
                return 1+auxContaParesCaminho(p->getEsq(),x);
            else
                return auxContaParesCaminho(p->getEsq(),x);
        else if(par)
            return 1;
        else
            return 0;
    }
}


/*int ArvBinBusca::contaParesCaminho(int x)
{
   return auxContaParesCaminho(raiz,x);
}*/

void ArvBinBusca::imprimeF()
{
    imprimeFilhos(raiz,0);
}
void ArvBinBusca::imprimeFilhos(No* p, int x)
{
    if (p != NULL)
    {
        cout << "(" << x << ")";
        for(int i = 1; i <= x; i++)
            cout << "--";
        cout << p->getInfo() << endl;
        imprimeFilhos(p->getEsq(), x+1);
        imprimeFilhos(p->getDir(), x+1);
    }
}

void ArvBinBusca::imprimeC()
{
    imprimeCrescente(raiz);
}

void ArvBinBusca::imprimeCrescente(No* p)
{
  if(p != NULL)
  {
      if(p->getEsq() != NULL && p->getDir() != NULL)
      {
          imprimeCrescente(p->getDir());
          cout<<p->getInfo()<<endl;
          imprimeCrescente(p->getEsq());
      }
  }
}


void ArvBinBusca::imprimeD()
{
    imprimeDecrescente(raiz);
}

void ArvBinBusca::imprimeDecrescente(No* p)
{
    if(p != NULL)
    {
        if(p->getEsq() != NULL && p->getDir() != NULL)
        {
            imprimeDecrescente(p->getEsq());
            imprimeDecrescente(p->getDir());
            cout<<p->getInfo()<<endl;
        }
    }
}
