#include <iostream>
using namespace std; 

/*Suma de los primeros N numeros*/

int main ()
{
    int a, suma = 0; 
    cout << "Por favor inserte un numero natural" << endl; 
    cin >> a; 
    for (int i = 1; i <= a; i++){
        suma += i; 
        }
    cout << "La suma de los primeros " << a << " numeros es " << suma << endl; 
    return 0; 

}