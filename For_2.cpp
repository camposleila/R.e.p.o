#include <iostream>
using namespace std;

/*Numeros pares del 1 al 50*/

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0) 
        {
            cout << i << endl;
        }
    }
    return 0;
}