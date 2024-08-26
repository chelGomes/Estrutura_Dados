#include <iostream>

using namespace std;

int main()
{
    int a =1, b = 2,c = 6;
    int *v, *px, *py, *pz;
    px=&a;
    py=&b;
    v = new int[3];

    a++;
    *py = c + 52;

    pz = v;
    *pz = b +1;
    *(pz+1) = *px;
    v[2] = 10;
    cout << "Teste 1:" << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << v[0] << v[1] << v[2] << endl;

    pz = py;
    v[0] = *px + *py;
    v[1] = *py;
    *(v+2) = *px * 2;

    cout << "Teste 2:" << endl;
    cout << v[0] << v[1] << v[2] << endl;
    return 0;
}
