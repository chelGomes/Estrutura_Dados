#include <iostream>
#include <cstdlib>
#include "vetFlex.h"

using namespace std;

vetFlex::vetFlex(int cc, int ff){
    c = cc;
    f = ff;
    n = f - c + 1;
    vet = new float[n];
}

vetFlex::~vetFlex(){
    delete [] vet;
}

int vetFlex::detInd(int indice){
    if(c <= indice && indice <= f)
        return (indice - c);
    else
        return - 1;
}

float vetFlex::consulta(int indice){
    int i = detInd(indice);
    if(i != -1)
        return vet[i];
    else{
       cout << "indice invalido: consulta\n " ;
       exit(1);
    }
}

float vetFlex::atribui(int indice, float val){
    int i = detInd(indice);
    if(detInd(indice) != -1)
        vet[i] = val;
    else{
        cout << "indice invalido: consulta\n";
        exit(1);
    }
}
