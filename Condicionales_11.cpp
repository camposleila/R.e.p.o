// Solicita dos números y muestra cuál de ellos está más cerca de 100.

#include <iostream>
using namespace std;

int main()
{
    int a, b, vsa, vsb;
    cout << "Ingrese el primer numero" << endl;
    cin >> a;
    cout << "Ingrese el otro numero" << endl;
    cin >> b;
    vsa = 100 - a;
    vsb = 100 - b;
    if ((abs(vsa)) < (abs(vsb))) {
        cout << a << " esta mas cerca de 100." << endl; 
    }
    else 
    {
        cout << b << " esta mas cerca de 100." << endl; 
    }
}