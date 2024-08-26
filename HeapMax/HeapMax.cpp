#include <iostream>
#include "HeapMax.h"

using namespace std;

HeapMax::HeapMax(int tam){
    m = tam;
    n = 0;
    x = new float[tam];

}

HeapMax::~HeapMax(){
    delete [] x;
}

float HeapMax::consultaRaiz(){
    if(n > 0)
        return x[0];
    else{
        cout<<"Heap vazia! "<< endl;
        exit(1);
    }
}

void HeapMax::insere(float val){
    if(n < m){
        x[n] = val;
        n++;
        sobe(n-1);
    }else{
        cout<<"Heap cheia!"<<endl;
        exit(1);
    }
}

void HeapMax::sobe(int filho){
    int pai = (filho - 1)/2;
    if(pai >= 0){
        if(x[filho] > x[pai]){
            float aux = x[filho];
            x[filho] = x[pai];
            x[pai] = aux;

            sobe(pai);
        }
    }
}

void HeapMax::remove(){
    if(n > 0){
        x[0] = x[n - 1];
        n--;
        desce(0);
    }else{
        cout<<"Heap vazia!"<<endl;
        exit(1);
    }
}

/*void HeapMax::desce(int pai){
    int filho = (2*pai)+1;
    if(filho < n){
        if(filho + 1 <= m)
            if(x[fllho+1] > x[filho])
            filho++;
        if(x[pai] < x[filho]){
            float aux = x[pai];
            x[pai] = x[filho];
            x[filho] = aux;
            desce(filho);
        }
    }
}*/

void HeapMax::desce(int pai){
    int MFilho = 2*pai+1;

    while(MFilho < n){
        if(MFilho+1 <= m)
            if(x[MFilho+1] > x[MFilho])
            MFilho ++;
        if(x[pai] < x[MFilho])
            //troca(&x[pai],&x[MFilho]);
        pai = MFilho;
        MFilho = 2*pai+1;
    }
}

void HeapMax::InsereVetor(int tam, float* vet){
    for(int i = 0; i < tam; i++)
        insere(vet[i]);
}
