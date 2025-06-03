//Promedio de N numeros

#include <iostream>
using namespace std; 

int main (){
int N;
float numero, suma = 0; 
cout << "Bienvenido. De cuantos numeros quiere encontrar el promedio?" << endl; 
cin >> N; 
 for (int i = 1; i <= N; i++) {
        cout << "Ingrese el numero #" << i << ": ";
        cin >> numero;
        suma += numero;
    }

    float promedio = suma / N;
    cout << "El promedio de los " << N << " numeros es: " << promedio << endl;

    return 0;
}