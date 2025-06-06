/* Suma de numeros. 
Pide al usuario números hasta que ingrese 0. 
Luego, muestra la suma de todos los números ingresados. */

#include <iostream>
using namespace std; 

int main(){
    int number, suma = 0; 
    cout << "Welcome. Insert the numbers you want to add. To stop, add 0" << endl; 
    
    do 
    {
        cout << "Number: " ; 
        cin >>  number; 
        suma +=number;  
    }
    while (number != 0);
    cout << "The addition of the numbers you entered is: " << suma << endl; 

    return 0; 
}