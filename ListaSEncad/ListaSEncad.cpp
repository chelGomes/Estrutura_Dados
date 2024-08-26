#include <iostream>
#include <stdlib.h> //exit()
#include "ListaSEncad.h"

using namespace std;

ListaSEncad::ListaSEncad()
{
    pri = NULL;
    it = NULL;
}

float ListaSEncad::Consulta()
{
    if(it != NULL)
        return it->consultaInfo();
    else
    {
        cout << "Erro: nó inválido!" << endl;
        exit(1);
    }
}

void ListaSEncad::Atribui(float val)
{
    if(it != NULL)
        it->atribInfo(val);
    else
        cout << "Erro: nó inválido!" << endl;
}

bool ListaSEncad::Busca(float val)
{
    No* p;
    for(p = pri; p != NULL; p = p->consultaProx())
    {
        if(p->consultaInfo() == val)
        {
            it = p;  //está diferente de ED
            return true;
        }
    }
    return false;
}

void ListaSEncad::Inicio()
{
    it = pri;
}

void ListaSEncad::ProximoNo()
{
    it = it->consultaProx();
}

bool ListaSEncad::FimDaLista()
{
    return (it == NULL);
}

void ListaSEncad::InserePri(float val)
{ // insere No contendo val no início da lista
    No* p = new No(); // cria nó apontado por p
    p->atribInfo(val); // preenche info com val
    p->atribProx(pri); // prox recebe atual pri
    pri = p; // nó apontado por p passa a ser o 1º
}

void ListaSEncad::EliminaPri()
{ // elimina primeiro No
    No* p;
    if(pri != NULL)
    { // se lista não está vazia
        p = pri; //p aponta para o nó a ser excluído
        // pri passa a apontar para o atual segundo
        pri = p->consultaProx();
        delete p;
    } // exclui o 1º nó
}

ListaSEncad::~ListaSEncad()
{
    No* p = pri;
    while(p != NULL)
    {
        No* t = p->consultaProx();
        delete p;
        p = t;
    }
}

void ListaSEncad::InsereUltimo(float val)
{
    No* p = new No();
    p->atribProx(NULL);
    p->atribInfo(val);
    No* x = pri;
    if(p!=NULL)
    {
        while(p->consultaProx()!=NULL)
        p = p->consultaProx();
        p->atribProx(p);
    }
    else
        pri = p;
}

void ListaSEncad::RemoveNoIt()
{
    if(pri!=NULL)
    {
        if(pri == it)
            pri = pri->consultaProx();
        else{
            No* p = pri;
            while(p->consultaProx()!= it)
                p = p->consultaProx();
            p->atribProx(it->consultaProx());
        }
        delete it;
    }
}

void ListaSEncad::RemoverUltimo()
{
    No* p;
    No* ap;
    p = pri;
    ap = NULL;
    if(p!=NULL)
    {
        while(p->consultaProx()!=NULL)
        {
            ap = p;
            p = p->consultaProx();
        }
        if(ap!=NULL)
            ap->atribProx(NULL);
        else
            pri = NULL;
        delete p;
    }
}
