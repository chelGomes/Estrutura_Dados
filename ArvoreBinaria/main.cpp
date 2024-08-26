#include <iostream>
#include "ArvBin.h"
#include "ArvGrau3.h"
using namespace std;

int main()
{
    //constrói 5 árvores binárias vazias
    ArvBin *arv = new ArvBin();
    ArvBin *a1 = new ArvBin();
    ArvBin *a2 = new ArvBin();
    ArvBin *a3 = new ArvBin();
    ArvBin *vazia = new ArvBin();

    ArvGrau3 *arv3 = new ArvGrau3();
    ArvGrau3 *a4 = new ArvGrau3();
    ArvGrau3 *a5 = new ArvGrau3();
    ArvGrau3 *a6 = new ArvGrau3();
    ArvGrau3 *vazia3 = new ArvGrau3();

    //as 2 arvores possuem raízes 6 e 9 e sae e sad vazias
    a1->cria(6, vazia, vazia);
    a2->cria(9 ,vazia, vazia);

    //raiz de Arv tem valor 8 e sae a1 e sad a2
    arv->cria(8, a1, a2);

    a1->cria(18, vazia, vazia);
    a2->cria(14, vazia, vazia);
    a3->cria(-5, a1, a2);

    //raiz de Arv tem valor 10 e sae Arv e sad a3
    arv->cria(10, arv, a3);

    a1->cria(25, vazia, vazia);
    a2->cria(33, vazia, vazia);
    a3->cria(30, a1, a2);

    //raiz de Arv tem valor 20 e sae Arv e sad a3
    arv->cria(20, arv, a3);

    //
    // TESTES: faca seus testes aqui
    //

    //imprime a árvore construída nos comandos acima
    arv->emOrdem();

    //
    // FIM DOS TESTES70
    //


    a4->cria('6', vazia3, vazia3, vazia3);
    a5->cria('9' ,vazia3, vazia3, vazia3);
    a6->cria('-7' ,vazia3, vazia3, vazia3);

    //raiz de Arv tem valor 8 e sae a1 e sad a2

    arv3->cria('8', a4, a5, a6);


    arv3->emOrdem();

    arv3->CortaFolha();
    cout<<endl;

    arv3->emOrdem();

    cout<<endl<<endl;
    cout<< arv->altura()<<endl;

    cout<<endl<<endl;
    cout<<arv->contaNos()<<endl;

    cout<<endl<<endl;
    cout<<arv->contaNoFolhas()<<endl;

/*
    int k;
    cout<<endl<<endl;
    cout<<arv->imprimeNivel(k)<<endl;

    int k;
    cout<<endl<<endl;
    cout<<arv->mediaNivel(k)<<endl;
*/

    cout<<endl<<endl;
    arv->ImpNiveis();

    cout<<endl<<endl;
    arv->ImpNivel(3);

    cout<<endl<<endl;
    cout<<arv->mediaNivel(3)<<endl;

    cout<<endl<<endl;
//    cout<<arv->numFilhos()<<endl;

    cout<<endl<<endl;
    cout<<"Impares: "<<arv->Impares()<<endl;

    cout<<endl<<endl;
    cout<<"Folhas Impares: "<<arv->contaFolhas()<<endl;

    cout<<endl;
    arv->ImpFolha7();

    cout<<endl;
    arv->emOrdem();

    cout<<endl;
    arv->cont_i1f();

    cout<<endl;
    arv->mediaPares();

    cout<<endl;
    arv->mediaImpares();

    cout<<endl;
    arv->maiores();

    cout<<endl;
    arv->menores();

    cout<<endl<<endl;
    arv->impNiv();

    cout<<endl<<endl;
    arv->impNivDir();

    cout<<endl<<endl;
    arv->impNivEsq();

    delete arv;

    return 0;
}
