#include <iostream>
#include <cstdlib>
#include "ArvBin.h"

using namespace std;

ArvBin::ArvBin()
{
    raiz = NULL;
}

int ArvBin::consultaRaiz()
{
    if (raiz != NULL)
        return raiz->getInfo();
    else
    {
        cout << "Árvore vazia!" << endl;
        exit(1);
    }
}

void ArvBin::cria(int x, ArvBin *sae, ArvBin *sad)
{
    No *p = new No();
    p->setInfo(x);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz = p;
}

bool ArvBin::vazia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

bool ArvBin::busca(int x)
{
    return auxBusca(raiz, x);
}

bool ArvBin::auxBusca(No *p, int C)
{
    if (p == NULL)
        return false;
    else if (p->getInfo() == C)
        return true;
    else if (auxBusca(p->getEsq(), C))
        return true;
    else
        return auxBusca(p->getDir(), C);
}

ArvBin::~ArvBin()
{
    raiz = libera(raiz);
}

No* ArvBin::libera(No *p)
{
    if (p != NULL)
    {
        p->setEsq(libera(p->getEsq()));
        p->setDir(libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return NULL;

}

void ArvBin::emOrdem()
{
    cout << "Arvore Binaria: ";
    auxEmOrdem(raiz);
}

void ArvBin::auxEmOrdem(No *p)
{
    if (p != NULL)
    {
        auxEmOrdem(p->getEsq());
        cout << p->getInfo() << " ";
        auxEmOrdem(p->getDir());
    }
}

int ArvBin::auxAltura(No* p)
{
    if(p == NULL)
        return - 1;
    else
    {
        int he = auxAltura(p->getEsq());
        int hd = auxAltura(p->getDir());
        if(he > hd)
            return he + 1;
        else
            return hd + 1;
    }
}

int ArvBin::auxNumNos(No* p)
{
    if(p == NULL)
        return 0;
    else
    {
        int ne = auxNumNos(p->getEsq());
        int nd = auxNumNos(p->getDir());
        return nd + ne + 1;
    }
}

int ArvBin:: auxFolhas(No* p)
{
    if(p==NULL)
        return 0;
    else if(p->getEsq() == NULL && p->getDir() == NULL)
        return 1;
    else
        auxFolhas(p->getEsq()) + auxFolhas(p->getDir());
}


float ArvBin::mediaNivel(int k)
{
    int nos = 0, s = 0;
    auxMediaNivel(raiz,0,k,&s,&nos);
    return(float)s/nos;

}

void ArvBin::auxMediaNivel(No *p,int nivel,int k,int *soma,int *nNos)
{
    if (p != NULL)
    {
        if(nivel == k)
        {
            *soma = *soma + p->getInfo();
            (*nNos) ++;
        }
        else
        {
            auxMediaNivel(p->getEsq(),nivel+1,k,soma,nNos);
            auxMediaNivel(p->getDir(),nivel+1,k,soma,nNos);
        }
    }
}

int ArvBin::auxImpares(No *p)
{
    if(p->getEsq() == NULL && p->getDir() == NULL)
    {
        if(p->getInfo()%2 != 0)
        {
            return 1;
        }
        return 0;
    }
    else
    {
       if(p->getInfo() %2 != 0)
        return 1+auxImpares(p->getEsq())+auxImpares(p->getDir());
        else return auxImpares(p->getEsq())+auxImpares(p->getDir());
    }
}

int ArvBin::Impares()
{
    return auxImpares(raiz);
}
int ArvBin::contaFolhas()
{
    return auxContaFolha(raiz);
}
int ArvBin::auxContaFolha(No *p)
{
    if(p->getEsq() == NULL && p->getDir() == NULL)
    {
        if(p->getInfo()%2 != 0)
        {
            return 1;
        }
        return 0;
    }
    else
    {

        return auxContaFolha(p->getEsq())+auxContaFolha(p->getDir());

    }
}
void ArvBin::auxImpNiveis(No *p,int nivel)
{
    if (p != NULL)
    {
        cout<<"("<<nivel<<")";
        for(int i=0; i < nivel; i++)
            cout<<"-----";
        cout<<"->";
        cout<< p->getInfo() << " "<<endl;
        auxImpNiveis(p->getEsq(),nivel+1);
        auxImpNiveis(p->getDir(),nivel+1);
    }
}

void ArvBin::auxImpNivel(No *p,int nivel,int k)
{
    if (p != NULL)
    {
        if(nivel == k)
            cout<< p->getInfo() << " "<<endl;
        else
        {
            auxImpNivel(p->getEsq(),nivel+1,k);
            auxImpNivel(p->getDir(),nivel+1,k);
        }
    }
}
int ArvBin::numFilhos(No *p)
{
    //considere p valido(p!=NULL
//retorn 0 se nao tem filhos
//retorn -1 se tem apenas o filho a esquerda
//retorn 1 se tem apenas o filho a direita
//retorn 2 se os 2 filhos

    if(p->getEsq()!= NULL && p->getDir()!= NULL)
        return 2;
    else if(p->getEsq()== NULL && p->getDir()== NULL)
       return -1;
       else if(p->getEsq()!= NULL && p->getDir()== NULL)
       return 1;
        else
        return 0;
}


/*void ArvBin::auxNumFilhos(No *p,int *n0f,int *n1fe,int *n1fd,int *n2f)
{
    if(p!=NULL)
    {
        int n = numFilhos(p);
        switch(n)
        case -1:*n1fe++;
        break;
        case 1:*n1fd++;
        break;
        case 0:*n0f++;
        break;
        case 2:*n2fe++;
        break;
    }
    auxNumFilhos(p->getEsq(),n0f,n1fe,n1fd,n2f);
}*/

void ArvBin::ImpFolha7()
{
    auxImpFolhas7(raiz);
}

No* ArvBin::auxImpFolhas7(No* p)
{
    if(p == NULL)
    {
        return NULL;
    }
    else
    {
        if(p->getEsq()== NULL && p->getDir() == NULL)
        {
            if(p->getInfo() %7 == 0)
                cout<<p->getInfo()<<endl;
            else
            {
                delete p;
                p = NULL;
            }
            return p;

        }
        p->setEsq(auxImpFolhas7(p->getEsq()));
        p->setDir(auxImpFolhas7(p->getDir()));
    }

}


void ArvBin::cont_i1f(){

    int contImpar = 0;
    int contFilho = 0;
    auxCont_i1f(&contImpar,&contFilho,raiz);
    cout<<"contImpar: "<<contImpar<< endl;
    cout<<"contFilho: "<< contFilho<< endl;

}


No* ArvBin::auxCont_i1f(int  *contImpar, int *contFilho, No* p)
{
    if(p == NULL)
    {
        return NULL;
    }
    else
    {
        if(p->getInfo() %2 !=0)
        {
            *contImpar = *contImpar +1;
        }
            if(p->getEsq() != NULL && p->getDir() == NULL){

                *contFilho = *contFilho +1;
            }
            if(p->getEsq() == NULL && p->getDir() != NULL)
            {
                 *contFilho = *contFilho +1;
            }

        p->setEsq(auxCont_i1f(contImpar,contFilho,p->getEsq()));
        p->setDir(auxCont_i1f(contImpar,contFilho,p->getDir()));
    }
}

float ArvBin::mediaPares()
{
   float mediaPares = 0.0;
   auxMediaPares(&mediaPares,raiz);
   cout<<"a media de pares:  "<<mediaPares<<endl;
}

No* ArvBin::auxMediaPares(float *mediaPares, No* p)
{
    if(p == NULL)
    {
        return NULL;
    }
    else
    {
        if(p->getInfo() %2 ==0)
        {
            *mediaPares = *mediaPares +1;
        }
        p->setEsq(auxMediaPares(mediaPares,p->getEsq()));
        p->setDir(auxMediaPares(mediaPares,p->getDir()));
    }
}

float ArvBin::mediaImpares()
{
    float mediaImpares = 0.0;
    auxMediaImpares(&mediaImpares,raiz);
    cout<<"a media de impares: "<<mediaImpares<<endl;
}

No* ArvBin::auxMediaImpares(float *mediaImpares, No* p)
{
    if(p == NULL)
    {
        return NULL;
    }
    else
    {
        if(p->getInfo() %2 !=0)
        {
            *mediaImpares = *mediaImpares +1;
        }
        p->setEsq(auxMediaImpares(mediaImpares,p->getEsq()));
        p->setDir(auxMediaImpares(mediaImpares,p->getDir()));
    }
}

int ArvBin::maiores()
{
    int maior = 0;
    auxMaiores(raiz,maior);
    cout<<"maior: "<<maior<<endl;
}


No* ArvBin::auxMaiores(No* p, int x)
{
    if(p != NULL)
    {
        if(p->getInfo() > x)
             auxMaiores(p->getDir(),x);
             x = p->getInfo();
             auxMaiores(p->getEsq(),x);
    }
}

int ArvBin::menores()
{
    int menor = 0;
    auxMenores(raiz,menor);
    cout<<"menor: "<<menor<<endl;
}

No* ArvBin::auxMenores(No* p, int x)
{
    if(p != NULL)
    {
        if(p->getInfo() < x)
            auxMenores(p->getDir(), x);
        x = p->getInfo();
        auxMenores(p->getEsq(),x);
    }
}

void ArvBin::impNiv()
{
    auxImpNiv(raiz,0);
}

void ArvBin::auxImpNiv(No* p, int niv)
{
    if (p != NULL)
    {
        cout<<"("<<niv<<")";
        for(int i=0; i < niv; i++)
            cout<<"-----";
        cout<<"->";
        cout<< p->getInfo() << " "<<endl;
        auxImpNiv(p->getEsq(),niv+1);
        auxImpNiv(p->getDir(),niv+1);
    }
}

void ArvBin::impNivEsq()
{
    auxImpNivEsq(raiz,0);
}

void ArvBin::auxImpNivEsq(No* p, int niv)
{
   if(p != NULL)
    {
        cout<<"("<<niv<<")";
        for(int i=0; i < niv; i++)
            cout<<"-----";
        cout<<"->";
        auxImpNivEsq(p->getEsq(),niv+1);
        cout<< p->getInfo() << " "<<endl;
        auxImpNivEsq(p->getDir(),niv+1);
    }
}

void ArvBin::impNivDir()
{
    auxImpNivDir(raiz,0);
}

void ArvBin::auxImpNivDir(No* p, int niv)
{
   if(p != NULL)
    {
        cout<<"("<<niv<<")";
        for(int i=0; i < niv; i++)
            cout<<"-----";
        cout<<"->";
        auxImpNivDir(p->getDir(),niv+1);
        cout<< p->getInfo() << " "<<endl;
        auxImpNivDir(p->getEsq(),niv+1);
    }
}
