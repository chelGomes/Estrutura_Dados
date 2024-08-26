#ifndef ARVGRAU3_H_INCLUDED
#define ARVGRAU3_H_INCLUDED

#include "No3.h"

class ArvGrau3
{
private:
    No3* raiz;

    No3* AuxCortaFolha(No3* p);
    void auxEmOrdem(No3 *p);
public:
    ArvGrau3();
    char ConsultaRaiz();
    void cria(char x, ArvGrau3 *sae, ArvGrau3 *sad,ArvGrau3 *meio);
    void CortaFolha();
    No3* libera(No3 *p);
    ~ArvGrau3();
    void emOrdem();
};

#endif // ARVGRAU3_H_INCLUDED
