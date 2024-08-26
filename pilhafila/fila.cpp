#include "fila.h"

FilaEncadeada::FilaEncadeada()
{
    ini = NULL;
    fim = NULL;
}

FilaEncadeada::~FilaEncadeada()
{
    No* p = ini;
    while(ini != NULL)
    {
        ini = p->consultaProx();
        delete p;
        p = ini;
    }
    fim = NULL;
}

bool FilaEncadeada::vazia()
{
    if(ini == NULL)
        return true;
    else
        return false;
}

void FilaEncadeada::entra(float val)
{
    No* p = new No();
    p->atribInfo(val);
    p->atribProx(NULL);
    if(fim == NULL)
        ini = p;
    else
        fim->atribProx(p);
    fim = p;
}

float FilaEncadeada::consultaInicio()
{
    if(ini != NULL)
        return ini->consultaInfo();
    else
    {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
}

void FilaEncadeada::sai()
{
    No* p;
    if(ini != NULL)
    {
        p = ini;
        ini = p->consultaProx();
        if(ini == NULL)
            fim = NULL;
        delete p;
    }
    else
    {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
}
