#include <iostream>
#include <cstdlib>

#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int tam)
{
    cout << "Criando objeto ListaCont" << endl;
    max = tam;
    ultimo = -1;
    x = new float[max];
}

ListaCont::~ListaCont()
{
    cout << "Destruindo objeto ListaCont" << endl;
    delete [] x;
}

float ListaCont::consulta(int k)
{
    if(k >= 0 && k <= ultimo)
        return x[k];
    else
    {
        cout << "Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::atribui(int k, float val)
{
    if(k >= 0 && k <= ultimo)
        x[k] = val;
    else
    {
        cout << "Indice invalido!" << endl;
        exit(2);
    }
}

void ListaCont::insereK(int k, float val)
{
    if(ultimo == max-1)
    {
        cout << "Vetor cheio!" << endl;
        exit(3);
    }

    if(k >= 0 && k <= ultimo)
    {
        for(int i = ultimo; i >= k; i--)
            x[i+1] = x[i];
        x[k] = val;
        ultimo = ultimo + 1;
    }
    else
    {
        cout << "Indice invalido!" << endl;
        exit(4);
    }
}

void ListaCont::insereUlt(float val)
{
    if(ultimo == max-1)
    {
        cout << "Vetor cheio!" << endl;
        exit(3);
    }
    ultimo = ultimo + 1;
    x[ultimo] = val;
}

void ListaCont::eliminaK(int k)
{
    if(k >= 0 && k <= ultimo)
    {
        for(int i = k; i <= ultimo-1; i++)
            x[i] = x[i+1];
        ultimo = ultimo - 1;
    }
    else
    {
        cout << "Indice invalido!" << endl;
        exit(5);
    }
}

void ListaCont::eliminaUlt()
{
    if(ultimo == -1)
    {
        cout << "Lista vazia!" << endl;
        exit(6);
    }
    ultimo = ultimo - 1;
}

void ListaCont::eliminaNoInicio(int n)
{
    int posicao = -1;
    for(int i = 0; i < ultimo; i++)
    {
        if(vet[i] == n)
            {
                posicao = i;
                i = ultimo;
            }
    }
    if(posicao == -1)
    {
        cout<< "indice invalido" << endl;
        exit(1);
        else
        {
            for(int i = posicao; i < (ultimo-1); i++)
                vet[i] = vet[i+1];
        }
         ultimo --;
    }
}
