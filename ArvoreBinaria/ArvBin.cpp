#include <iostream>
#include <cstdlib>
#include "ArvBin.h"

using namespace std;

ArvBin::ArvBin()
{
    raiz = NULL;
}

//Operação ConsultaRaiz
int ArvBin::ConsultaRaiz()
{
    if (raiz != NULL)
        return raiz->consultaInfo();
    else
    {
        cout << "Árvore vazia!" << endl;
        exit(1);
    }
}

void ArvBin::Cria(int C, ArvBin *sae, ArvBin *sad)
{
    TNo *p = new TNo();
    p->atribInfo(C);
    p->atribEsq(sae->raiz);
    p->atribDir(sad->raiz);
    raiz = p;
}

bool ArvBin::Vazia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

bool ArvBin::Busca(int C)
{
    return AuxBusca(raiz, C);
}

bool ArvBin::AuxBusca(TNo *p, int C)
{
    if (p == NULL)
        return false;
    else if (p->consultaInfo() == C)
        return true;
    else if (AuxBusca(p->consultaEsq(), C))
        return true;
    else
        return AuxBusca(p->consultaDir(), C);
}

ArvBin::~ArvBin()
{
    raiz = Libera(raiz);
}

TNo* ArvBin::Libera(TNo *p)
{
    if (p != NULL)
    {
        p->atribEsq(Libera(p->consultaEsq()));
        p->atribDir(Libera(p->consultaDir()));
        delete p;
        p = NULL;
    }
    return NULL;

}

void ArvBin::InOrdem()
{
    AuxInOrdem(raiz);
}

void ArvBin::AuxInOrdem(TNo *p)
{
    if (p != NULL)
    {
        AuxInOrdem(p->consultaEsq());
        cout << p->consultaInfo() << " ";
        AuxInOrdem(p->consultaDir());
    }
}
int ArvBin::Impares(TNo *Arv)
{
    TNo *p = new TNo;
    TNo *aux = new TNo();
    if(p != NULL)
    {
        p = p->consultaEsq();
        p->atribEsq(p);
        aux = p;
        aux++;
    }
    return aux;
}

int ArvBin::Soma(TNo *a)
{
    int Soma;
    if(p != NULL)
       return Soma(a);
}

float ArvBin::Media(TNo *a)
{
    if(p != NULL)
        return Soma();
}

float ArvBin::MediaPar(TNo *a)
{
    if(p != NULL && p%2==0)
    return Soma();
}

int ArvBin::MaiorVal(TNo *a)
{
    TNo *p = new TNo;
    int maior;
    if(p!=NULL)
    {
        p = p->consultaDir();
        p->atribDir(p);
        maior = p;
    }
    return MaiorVal;
}

int ArvBin::MenorVal(TNo *a)
{
    TNo *p = new TNo;
    int menor;
    if(p!=NULL)
    {
        p = p->consultaEsq();
        p->atribEsq(p);
        menor = p;
    }
    return MenorVal;
}

int ArvBin::Maiores(TNo *a, int x)
{

}
