#ifndef VETFLEX_H_INCLUDED
#define VETFLEX_H_INCLUDED

class vetFlex
{
private:
    int n;
    float *vet;
    int c,f;
    int detInd(int indice);

public:
    vetFlex(int a, int b);
    ~vetFlex();
    float consulta(int indice);
    void atribui(int indice,float valor);
};

#endif // VETFLEX_H_INCLUDED
