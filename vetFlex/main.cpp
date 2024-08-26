#include <iostream>
#include "vetFlex.h"

using namespace std;

int main()
{
    vetFlex v(-29,30);
    for(int i = -29; i <= 30; i++){
        float val = i -(-29) + 1;
        v.atribui(i,val);
    }
    for(int i = -29; i <= 30; i++){
        float val = v.consulta(i);
        cout << val << endl;
    }
    return 0;
}
