//Calculo de potencia
#include <iostream>
using namespace std; 

int main(){
    int base, exponente; 
    float potencia = 1;
    
    cout << "Ingrese la base: " << endl; 
    cin >> base; 
    cout << "Ingrese el exponente: " << endl; 
    cin >> exponente; 

            for (int i=0; i < exponente; i++){
                potencia *= base;
        }
         cout << base << "^" << exponente << "=" << potencia << endl;
    
    return 0;
}