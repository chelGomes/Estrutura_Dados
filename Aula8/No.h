#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class No
{
private:
    float info;
    No* prox;
public:
    No() {};
    ~No() {};
    void setInfo(float val) { info = val;  };
    void setProx(No* p)     { prox = p;    };
    float getInfo()         { return info; };
    No * getProx()          { return prox; };
};

#endif // NO_H_INCLUDED
