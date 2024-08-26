#include <iostream>
#include <stdlib.h> //rand()
#include <time.h> //time()
#include "ListaDEncad.h"

using namespace std;

int numAleatorio(int a, int b)
{
    //retorna um número inteiro aleatório entre a e b
    return a + rand()%(b - a + 1) ;
}

int main()
{
    ListaSEncad *l = new ListaSEncad();//cria lista vazia
    int NumNos = 22;

    srand(time(NULL));
    //adiciona nós à lista l
    for(int i = 1; i <= NumNos; i++)
    {
        float val =  numAleatorio(0, 50);  //valor aleatório entre 0 e 50
        l->InserePri(val);
    }

    //coloca o ponteiro it no início da lista
    l->Inicio();
    cout <<endl;
    while(!l->FimDaLista())//verifica se it chegou ao final
    {
        //imprime o valor do nó apontado por it
        cout << l->Consulta() << " ";
        l->ProximoNo();//faz it apontar para o próximo nó
    }
    delete l;//desaloca a lista criada
    return 0;
};

