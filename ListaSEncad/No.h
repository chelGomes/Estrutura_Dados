#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class No
{
  private:
    float info; // informação real do No
    No* prox; // ponteiro para o próximo No
  public:
    No() {};
    float consultaInfo() { return info; };
    No* consultaProx() { return prox; };
    void atribInfo(float val) { info = val; };
    void atribProx(No* p) { prox = p; };
    ~No() {};
};
#endif // NO_H_INCLUDED
