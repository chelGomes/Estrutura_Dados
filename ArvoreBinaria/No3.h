#ifndef NO3_H_INCLUDED
#define NO3_H_INCLUDED

class No3
{
private:
    No3* esq,*meio,*dir;
    char info;//informaçãodoNo(char)

public:

    No3()                       {};
    void atribEsq(No3* p)         { esq = p; };
    void atribMeio(No3* p)         { meio = p; };
    void atribDir(No3* p)       { dir = p; };
    void atribInfo(char val)     {info = val;};
    No3* consultaEsq()  { return esq; };
    No3* consultaMeio()  {return meio;};
    No3* consultaDir(){ return dir; };
    char consultaInfo(){ return info; };
    ~No3(){};
};

#endif // NO3_H_INCLUDED
