#include <iostream>
#include "TListCont.h"
using namespace std;

int main(){

    TListCont *lista=new TListCont(5);

    for(int i=0;i<5;i++){
        lista->Inserek(0,i);
    }
    for(int i=0;i<5;i++){
        cout<<"Elemento "<<i<<": "<<lista->Consulta(i)<<endl;
    }
    delete lista;
    return 0;
}
