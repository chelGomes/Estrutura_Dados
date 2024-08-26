#ifndef ARVBINBUSCA_H_INCLUDED
#define ARVBINBUSCA_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include "No.h"

class ArvBinBusca
{
    public:
        ArvBinBusca();
        ~ArvBinBusca();
        int consultaRaiz();
        bool vazia(); // verifica se a árvore está vazia
        bool busca(int C);
        void insere(int C);
        void remove(int C);
        void imprime();
        float mediaCaminho(int ch);
        int maior();
        int menor();
        int removeMaior();
        int removeMenor();
        int contaParesCaminho(int x){return auxContaParesCaminho(raiz,x);};
        void imprimeF();
        void imprimeC();
        void imprimeD();

    private:
        No* raiz; // ponteiro para o No raiz da árvore
        bool auxBusca(No *p, int C);
        No* auxInsere(No *p, int C);
        No* auxRemove(No *p, int C);
        No* menorSubArvDireita(No *p);
        No* removeFolha(No *p);
        No* remove1Filho(No *p);
        void imprimePorNivel(No* p, int nivel);
        No* libera(No *p);
        int auxContaParesCaminho(No *p, int x);
        void imprimeFilhos(No* raiz, int x);
        void imprimeCrescente(No* p);
        void imprimeDecrescente(No* p);
};


#endif // ARVBINBUSCA_H_INCLUDED



