#include <iostream>
#include "ArvBinBusca.h"

using namespace std;

void preencherABB(ArvBinBusca* a, int p, int q)
{
    if(p <= q)
    {
      int medio = (p + q)/2;
      a->insere(medio);
      preencherABB(a , p , medio-1);
      preencherABB(a , medio+1 , q);
    }
}
int main()
{
    ArvBinBusca arv;

    cout << "Criando Arvore Binaria de Busca (ABB)" << endl;
    arv.insere(15);
    arv.insere(9);
    arv.insere(20);
    arv.insere(7);
    arv.insere(11);
    arv.insere(18);
    arv.insere(24);
    arv.insere(6);
    arv.insere(8);
    arv.insere(10);
    arv.insere(12);
    arv.insere(17);
    arv.insere(19);
    arv.imprime();

    arv.maior();
    cout<<"o maior valor eh" << endl;
    cout<<arv.maior()<<endl;

    arv.menor();
    cout<<"o menor valor eh" << endl;
    cout<<arv.menor()<<endl;

    arv.removeMaior();
    cout<<"o maior valor removido eh" << endl;
    cout << arv.removeMaior() << endl;

    arv.removeMenor();
    cout<<"o menor valor removido eh" << endl;
    cout << arv.removeMenor() << endl;


    cout<<arv.contaParesCaminho(17)<<endl;
    cout<<arv.contaParesCaminho(16)<<endl;

    ArvBinBusca arv2;
    preencherABB(&arv2,1,8);
    cout<<endl<<endl;
    arv2.imprime();


    cout << endl;
    cout << "Calculando a media do caminho ate o no com valor=18" << endl;
    cout << arv.mediaCaminho(18) << endl;

    cout << "Busca os valores 20 e 5" << endl;
    cout << arv.busca(20) << endl;
    cout << arv.busca(5) << endl;

    cout << endl << "Removendo os valores 24,6,7,12,18,5" << endl;
    arv.remove(24);
    arv.remove(6);
    arv.remove(7);
    arv.remove(12);
    arv.remove(18);
    arv.remove(5);

    cout << "Arvore Binaria de Busca final" << endl;
    arv.imprime();



    // cout<<"imprime filhos: "<<endl;
     //cout<<arv.imprimeFilhos()<<endl;

     cout<<"imprime crescente: "<<imprimeCrescente<<endl;
     arv.imprimeCrescente();

     cout<<"imprime decrescente: "<<imprimeDecrecente<<endl;
     arv.imprimeDecrescente();

    return 0;
}

