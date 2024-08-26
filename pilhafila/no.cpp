#include "no.h"

No::No()
{
}

No::~No()
{
}

void No::atribInfo(float val)
{
    info = val;
}

void No::atribProx(No* p)
{
    prox = p;
}

float No::consultaInfo()
{
    return info;
}

No* No::consultaProx()
{
    return prox;
}
