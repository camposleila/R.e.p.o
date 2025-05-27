/*Ejercicio 13. Muestra los primeros N términos de la serie de Fibonacci utilizando while.*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese el numero de terminos de la serie de Fibonacci" << endl;
    cin >> N;

    int a = 0, b = 1, contador = 0;

    while (contador < N)
    {
        cout << a << " "<< endl; 
        int siguiente = a + b;
        a = b;
        b = siguiente;
        contador++;
    }

    cout << endl;
    return 0;
}