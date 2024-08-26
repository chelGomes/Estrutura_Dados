#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class No
{
private:
    float info;
    No* prox;
public:
    No();
    ~No();
    void atribInfo(float val);
    void atribProx(No* p);
    float consultaInfo();
    No * consultaProx();
};

#endif // NO_H_INCLUDED
