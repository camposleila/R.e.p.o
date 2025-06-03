#include <iostream>
using namespace std;

int main (){
int N, PRODUCTO = 1; 
cout << "Por favor ingrese un N para encontrar su factorial" << endl; 
cin >> N; 
for (int i = 1; i<=N; i++){
    PRODUCTO *= i; 
}
cout <<"El factorial de " << N << " es: " << PRODUCTO << endl; 
return 0; 
}