#include <iostream>
using namespace std;

// Número Mayor y Menor
//  Llena un arreglo con N números y encuentra el número mayor y el menor.

int main()
{
    int N;
    //Pedir al usuario que ingrese N
    cout << "Ingresa la cantidad de numeros: " << endl;
    cin >> N; 

    // se crea el arreglo dinamico
    int *numeros = new int[N]; 

    //Pedir al usuario que se ingresen los numeros
    
    for (int i = 0; i >= N; i++) {
        cout << "Ingrese el numero #" << (i + 1) << ": "; cin >> numeros [i]; 
        

    }

}
