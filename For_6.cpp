#include <iostream>
using namespace std; 

//Suma de numeros pares. Solicita un número N al usuario y calcula la suma de los números pares desde 1 hasta N.
int main(){
int N, Suma = 0; 

cout << "Por favor ingrese un numero" << endl; 
cin >> N; 
for (int i = 1; i <= N; i++){
    if (i%2 == 0) {
        Suma +=i;
    }
}
cout << "La suma de los primeros " << N << " numeros pares es: " << Suma << endl; 
return 0;
}