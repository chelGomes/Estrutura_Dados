#include <iostream>
#include <stdlib.h> //rand()
//#include <time.h> //time()
#include "ListaSEncad.h"

using namespace std;

int numAleatorio(int a, int b){
    //retorna um n�mero inteiro aleat�rio entre a e b
    return a + rand()%(b - a + 1) ;
}



int ValMaioresK(ListaSEncad*Lista,int k){
    int maior = 1;
    int cont = 0;
    No *Val = new No();
    for(int i=1;i<=maior;i++){
        if(maior > k)
            k = maior;
            cont++;
    }
    return k;
}

void ListaSEncad::RemoveVal(float val){
    No *p;
    if(pri!=NULL)
        p = pri;
        pri->consultaProx();
        delete p;
}
int main(){
    ListaSEncad *l = new ListaSEncad();//cria lista vazia
    int NumNos = 22;
    int k;
    float Val;

    //srand(time(NULL));
    //adiciona n�s � lista l
    for(int i = 1; i <= NumNos; i++){
        float val =  numAleatorio(0, 50);  //valor aleat�rio entre 0 e 50
        l->InserePri(val);
    }

    //coloca o ponteiro it no in�cio da lista
   // l->Inicio();
   // cout <<endl;
   // while(!l->FimDaLista())//verifica se it chegou ao final
   // {
        //imprime o valor do n� apontado por it
      //  cout << l->Consulta() << " ";
     //   l->ProximoNo();//faz it apontar para o pr�ximo n�
   // }
    l->ImprimeLista();
    cout<<"Digite um numero inteiro entre 2 e 99: ";
    cin>>k;
    cout<<"Ha "<<ValMaioresK(l,k)<<" valores maior que "<<k<<endl<<endl;



    cout<<"Digite o numero a ser removido da lista: ";
    cin>>Val;

    l->RemoveVal(Val);
    l->ImprimeLista();

    delete l;//desaloca a lista criada
    return 0;
};

