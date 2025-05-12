#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Ingrese un numero entero" << endl;
    cin >> a;
    if (a == 0)
    {
        cout << "El numero es cero" << endl;
    }
    else if (a < 0)
    {
        cout << "El numero es menor que 0" << endl;
    }
    else
    {
        cout << "El numero es mayor que cero" << endl;
    }
    return 0;
}