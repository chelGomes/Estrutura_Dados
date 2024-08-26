#include "FilaEncad.h"

FilaEncad::FilaEncad()
{
    cout << "Criando FilaEncad" << endl;
    ini = NULL;
    fim = NULL;
}

FilaEncad::~FilaEncad()
{
    cout << "Destruindo FilaEncad" << endl;
    No* p = ini;
    while(ini != NULL)
    {
        ini = p->getProx();
        delete p;
        p = ini;
    }
    fim = NULL;
}

bool FilaEncad::vazia()
{
    if(ini == NULL)
        return true;
    else
        return false;
}

void FilaEncad::entra(float val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);
    if(fim == NULL)
        ini = p;
    else
        fim->setProx(p);
    fim = p;
}

float FilaEncad::consultaInicio()
{
    if(ini != NULL)
        return ini->getInfo();
    else
    {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
}

void FilaEncad::sai()
{
    No* p;
    if(ini != NULL)
    {
        p = ini;
        ini = p->getProx();
        if(ini == NULL)
            fim = NULL;
        delete p;
    }
    else
    {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
}

/*void FilaEncad::InvFila(FilaEncad* F)
{
    No* p;
    PilhaEncad p();
    while(!F->vazia())
    {
        float x = F->consultaInicio();
        p.empilha(x);
        F->sai();
    }
    while(!p.vazia())
    {
        float x = p.consultaTopo();
        F->entra(x);
        p.desempilha();
    }
}*/


void FilaEncad::InvFila(FilaEncad* F)
{
    PilhaEncad* P = new PilhaEncad();
    while(!F->vazia())
    {
        float x = F->consultaInicio();
        P.empilha(x);
        F->sai();
    }
    while(!P.vazia())
    {
        float x = P.consultaTopo();
        F->entra(x);
        P.desempilha();
    }
}
float FilaEncad::TransformFila(FilaEncad* F)
{
    int i = 0;
    float *vet = new float [500];
    while(F->vazia() != true && i < 500)
    {
        float A = F->consultaInicio();
        vet[i] = A;
        i++;
        F->sai();
    }
    return *vet;
}

void FilaEncad::imprime()
{
    No *p;
    for(p = ini; p != NULL;  p = p->getProx())
    {
        cout<< p->getInfo() << " ";
        cout << endl;
    }
    cout << endl;
}
