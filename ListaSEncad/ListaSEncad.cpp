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
        cout << "Erro: n� inv�lido!" << endl;
        exit(1);
    }
}

void ListaSEncad::Atribui(float val)
{
    if(it != NULL)
        it->atribInfo(val);
    else
        cout << "Erro: n� inv�lido!" << endl;
}

bool ListaSEncad::Busca(float val)
{
    No* p;
    for(p = pri; p != NULL; p = p->consultaProx())
    {
        if(p->consultaInfo() == val)
        {
            it = p;  //est� diferente de ED
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
{ // insere No contendo val no in�cio da lista
    No* p = new No(); // cria n� apontado por p
    p->atribInfo(val); // preenche info com val
    p->atribProx(pri); // prox recebe atual pri
    pri = p; // n� apontado por p passa a ser o 1�
}

void ListaSEncad::EliminaPri()
{ // elimina primeiro No
    No* p;
    if(pri != NULL)
    { // se lista n�o est� vazia
        p = pri; //p aponta para o n� a ser exclu�do
        // pri passa a apontar para o atual segundo
        pri = p->consultaProx();
        delete p;
    } // exclui o 1� n�
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
