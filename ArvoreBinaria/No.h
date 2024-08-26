#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class TNo
{
  private:
    TNo* esq; // ponteiro para o filho a esquerda
    int info; // informação do No (int)
    TNo* dir; // ponteiro para o filho a direita
  public:
    TNo()                    {};
    void atribEsq(TNo* p)    { esq = p; };
    void atribInfo(int val) { info = val; };
    void atribDir(TNo* p)    { dir = p; };
    TNo* consultaEsq()       { return esq; };
    int consultaInfo()      { return info; };
    TNo* consultaDir()       { return dir; };
    ~TNo()                   {};
};

#endif // NO_H_INCLUDED
