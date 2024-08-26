#include "Matricula.h"

void Matricula::matricula(string codigo)
{
    for(int i = 0;i < n; i++)
    {
        if(cod_disciplina[i] == NULL)
            cod_disciplina[i] = codigo;
        exit(1);
    }
    cout<< "o aluno ja fez o numero da discplina" << endl;
}

void Matricula::imprimir()
{
    for(int i = 0 ;i < n; i++)
    {
        if(cod_disciplina[i] != NULL)
        cout << cod_disciplina << endl;
    }
}

void Matricula::desmatricula(string codigo)
{
    for(int i = 0;i < n; i++)
    {
        if(cod_disciplina[i] == codigo)
            cod_disciplina[i] = NULL;
    }
}
