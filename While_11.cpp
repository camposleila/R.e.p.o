/*Validación de Entrada
Pide un número entre 1 y 10.
Si el usuario ingresa un valor fuera de ese rango, debe volver a intentarlo hasta que lo haga correctamente.*/
#include <iostream>
using namespace std;

int main()
{
    int number; 
    number = 0; 
    do
    {
        cout << "Number: ";
        cin >> number; 
    }
    while (number <=1 && number >=10); 
    cout << " "  << endl; 
    return 0;
}