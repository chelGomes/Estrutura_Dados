#include <iostream>
#include <stdlib.h> //rand()
#include <time.h> //time()
#include "ListaDEncad.h"

using namespace std;

int numAleatorio(int a, int b)
{
    //retorna um n�mero inteiro aleat�rio entre a e b
    return a + rand()%(b - a + 1) ;
}

int main()
{
    ListaSEncad *l = new ListaSEncad();//cria lista vazia
    int NumNos = 22;

    srand(time(NULL));
    //adiciona n�s � lista l
    for(int i = 1; i <= NumNos; i++)
    {
        float val =  numAleatorio(0, 50);  //valor aleat�rio entre 0 e 50
        l->InserePri(val);
    }

    //coloca o ponteiro it no in�cio da lista
    l->Inicio();
    cout <<endl;
    while(!l->FimDaLista())//verifica se it chegou ao final
    {
        //imprime o valor do n� apontado por it
        cout << l->Consulta() << " ";
        l->ProximoNo();//faz it apontar para o pr�ximo n�
    }
    delete l;//desaloca a lista criada
    return 0;
};

