#include <iostream>
#include <cstdlib>
#include "ArvGrau3.h"

using namespace std;

ArvGrau3::ArvGrau3()
{
    raiz = NULL;
}
char ArvGrau3::ConsultaRaiz()
{
    if (raiz != NULL)
        return raiz->consultaInfo();
    else
    {
        cout << "Árvore vazia!" << endl;
        exit(1);
    }
}

void ArvGrau3::CortaFolha()
{
    AuxCortaFolha(raiz);
}
No3* ArvGrau3::AuxCortaFolha(No3* p)
{
    if(p == NULL)
    {
        return NULL;
    }
    else
    {
        if(p->consultaEsq()== NULL && p->consultaDir() == NULL && p->consultaMeio() == NULL)
        {
            delete p;
            p = NULL;
            return p;
        }
        p->atribEsq(AuxCortaFolha(p->consultaEsq()));
        p->atribDir(AuxCortaFolha(p->consultaDir()));
        p->atribMeio(AuxCortaFolha(p->consultaMeio()));
    }
}


ArvGrau3::~ArvGrau3()
{
    raiz = libera(raiz);
}

void ArvGrau3::cria(char x, ArvGrau3 *sae, ArvGrau3 *sad,ArvGrau3 *meio)
{
    No3 *p = new No3();
    p->atribInfo(x);
    p->atribEsq(sae->raiz);
    p->atribDir(sad->raiz);
    p->atribMeio(meio->raiz);
    raiz = p;
}

No3* ArvGrau3::libera(No3 *p)
{
    if (p != NULL)
    {
        p->atribEsq(libera(p->consultaEsq()));
        p->atribDir(libera(p->consultaDir()));
        p->atribMeio(libera(p->consultaMeio()));
        delete p;
        p = NULL;
    }
    return NULL;

}
void ArvGrau3::emOrdem()
{
    cout << "Arvore Binaria: ";
    auxEmOrdem(raiz);
}

void ArvGrau3::auxEmOrdem(No3 *p)
{
    if (p != NULL)
    {
        cout << p->consultaInfo() << " ";
        auxEmOrdem(p->consultaEsq());
        auxEmOrdem(p->consultaMeio());
        auxEmOrdem(p->consultaDir());
    }
}
