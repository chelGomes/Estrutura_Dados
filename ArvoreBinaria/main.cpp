#include <iostream>
#include "ArvBin.h"
using namespace std;

int main()
{
    //constrói 5 árvores binárias vazias
    ArvBin *Arv = new ArvBin();
    ArvBin *a1 = new ArvBin();
    ArvBin *a2 = new ArvBin();
    ArvBin *a3 = new ArvBin();
    ArvBin *vazia = new ArvBin();

    //as 2 arvores possuem raízes 6 e 9 e sae e sad vazias
    a1->Cria(6, vazia, vazia);
    a2->Cria(9 ,vazia, vazia);

    //raiz de Arv tem valor 8 e sae a1 e sad a2
    Arv->Cria(8, a1, a2);

    a1->Cria(18, vazia, vazia);
    a2->Cria(14, vazia, vazia);
    a3->Cria(-5, a1, a2);

    //raiz de Arv tem valor 10 e sae Arv e sad a3
    Arv->Cria(10, Arv, a3);

    a1->Cria(25, vazia, vazia);
    a2->Cria(33, vazia, vazia);
    a3->Cria(30, a1, a2);

    //raiz de Arv tem valor 20 e sae Arv e sad a3
    Arv->Cria(20, Arv, a3);

    //imprime a árvore construída nos comandos acima
    Arv->InOrdem();
    Arv->Impares(Arv);
    Arv->Soma(a);
    Arv->Media(a);
    Arv->MaiorVal(a);
    Arv->MenorVal(a);
    delete Arv;

    return 0;
}
