#include "TListCont.h"
#include <iostream>
#include<cstdlib>
using namespace std;
TListCont::TListCont(int tam)
{
    m = tam;
    ultimo = -1;
    X = new float[m];
}

TListCont::~TListCont()
{
    delete [] X;
}
float TListCont::Consulta(int k)
{
    if(k >= 0 && k <= ultimo)
        return X[k];
    else
    {
        cout << "Indice invalido!" << endl;
        exit(1);
    }
}
void TListCont::Atribui(int k, float val)
{
    if(k >= 0 && k <= ultimo)
        X[k] = val;
    else
    {
        cout << "Indice invalido!" << endl;
        exit(2);
    }
}
void TListCont::Inserek(int k, float val)
{ // insere No contendo val antes do No xk
    if(ultimo == (m - 1)){
        cout << "Vetor Cheio!" << endl;
        exit(3);
    }
    if(k==ultimo+1){
        Insereult(val);
    }else if(k >= 0 && k <= ultimo){
        for(int i = ultimo; i >= k; i--)
            X[i+1] = X[i];
        X[k] = val;
        ultimo = ultimo + 1;}
    else {
        cout << "Indice invalido!" << endl;
        exit(4);}
}
void TListCont::Insereult(float val)
{// insere No contendo val como ultimo No da lista
    if(ultimo == (m - 1))
    {
        cout << "Vetor Cheio!" << endl;
        exit(3);
    }
    ultimo = ultimo + 1;
    X[ultimo] = val;
}
void TListCont::Eliminak(int k)
{ // elimina No xk
    if(k >= 0 && k <= ultimo){
        for(int i = k; i <= ultimo-1; i++)
            X[i] = X[i+1];
        ultimo = ultimo - 1;}
    else
    {
        cout << "Indice invalido!" << endl;
        exit(5);
    }
}
void TListCont::Eliminault()
{ // elimina o ultimo No da lista
    if(ultimo == -1){
        cout << "Lista Vazia!" << endl;
        exit(6);}
    ultimo = ultimo - 1;
}



