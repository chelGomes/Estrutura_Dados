#include <iostream>
#include <cstdlib>

#include "Ponto2D.h"

using namespace std;

Ponto2D::Ponto2D(float a, float b)
{
    cout << "Criando objeto Ponto2D" << endl;
    x = a;
	y = b;
}

Ponto2D::~Ponto2D()
{
    cout << "Destruindo objeto Ponto2D" << endl;
}

float Ponto2D::getX()
{
    return x;
}

float Ponto2D::getY()
{
    return y;
}

void Ponto2D::imprime()
{
    cout << " ( " << x << " , " << y << " ) " << endl;
}

void Ponto2D::setX(float val)
{
	x = val;
}

void Ponto2D::setY(float val)
{
	y = val;
}
