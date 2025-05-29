#include <iostream>
using namespace std; 

int Suma (int a, int b)
{
    return (a + b); 
}

int main (){
    int x, y; 
    cout << "Ingrese dos numeros para sumarlos" << endl; 
    cin >> x; 
    cin >> y; 
    cout << x << " + " << y << " = " << Suma << endl; 

    return 0; 
}