#include <iostream>

#include "PilhaEncad.h"
#include "FilaEncad.h"

using namespace std;

int main()
{
    //
    // TESTE COM PILHA
    //
    PilhaEncad p;

    for(int i=0; i<5; i++) p.empilha(i);
    cout << "Pilha apos inserir 5 valores" << endl;
    p.imprime();

    for(int i=20; i<25; i++) p.empilha(i);
    cout << "Pilha apos inserir mais 5 valores" << endl;
    p.imprime();

    //
    // TESTE COM FILA
    //

    //FilaEncad f;
    //for(int i=0; i<5; i++) f.entra(i);

    FilaEncad F();
    int x, ult = 0;
    cin>> x;
    while(x != 0)
    {
        if(x > 0 && x > ult)
            F.entra(x);
        ult = x;
    }
    if(x < 0)
    {
        if(!F.vazia())
            F.sai();
        cin>> x;
    }
    F.imprime();
    return 0;
}
