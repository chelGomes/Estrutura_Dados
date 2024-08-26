#ifndef MATRICULA_H_INCLUDED
#define MATRICULA_H_INCLUDED
#include <iostream>
#include <string>

class Matricula
{
private:
    string matricula;
    string cod_disciplina[n];
    string nome;
    int n;
public:
    Matricula(string matricula,string nome,int n);
    void matricula(string cod_disciplina);
    void imprimir();
    void desmatricular(string cod_displina);
};

#endif // MATRICULA_H_INCLUDED
