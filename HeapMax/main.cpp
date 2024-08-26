#include <iostream>
#include "HeapMax.h"

using namespace std;

int main()
{
    float *vet = new float[50];
    for(int i = 0; i < 50; i++)
        cin >> vet[i];
    HeapMax H;
    H.InsereVetor(50,vet);
    for(int i = 0; i < 50; i++)
    {
      float A = H.consultaRaiz();
      cout << A << "  "<< endl;
      H.remove();

    delete [] vet;
    return 0;
}
