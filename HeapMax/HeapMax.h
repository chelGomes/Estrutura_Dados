#ifndef HEAPMAX_H_INCLUDED
#define HEAPMAX_H_INCLUDED

#include <iostream>
#include <cstdlib>

class HeapMax
{
private:
    int m;
    int n;
    float *x;
    void sobe(int i);
    void desce(int i);
    int H;

public:
    HeapMax(int tam);
    ~HeapMax();
    float consultaRaiz();
    void insere(float val);
    void remove();
    void InsereVetor(int tam, float* vet);
};

#endif // HEAPMAX_H_INCLUDED
