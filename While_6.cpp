#include <iostream>
using namespace std; 

/*While y do while. Para do while hacer y despues evaluar. While al reves*/
/*Ejercicio 6. Verificacion de contraseña*/

int main() {
    string password; 
    string correctPassword = "CONTRASENA"; 
    cout << "Insert password" << endl; 
    cin >> password; 

    while(password!= correctPassword){
        cout<<"Incorrect, try again: " << endl; 
        cin >> password;
    }
    cout << "Correct." << endl; 


    return 0; 
}