#ifndef TLISTCONT_H_INCLUDED
#define TLISTCONT_H_INCLUDED

class ListaCont
{
    private:
        int max;
        int ultimo;
        float *x;

    public:
        ListaCont(int tam);
        ~ListaCont();

        float consulta(int k);
        void atribui(int k, float val);
        void insereK(int k, float val);
        void insereUlt(float val);
        void eliminaK(int k);
        void eliminaUlt();
        void eliminaNoInicio(int n);

};

#endif // TLISTCONT_H_INCLUDED
