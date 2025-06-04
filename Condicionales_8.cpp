// Simula la verificación de un usuario y contraseña predefinidos.

#include <iostream>
#include <string> 
using namespace std; 

int main (){
    string correctuser, correctpassword; 
    string username = "user"; 
    string password = "1234"; 

    cout << "Type your username" << endl; 
    cin >> correctuser; 
    cout << "Type your password" << endl; 
    cin >> correctpassword; 
    if (username == correctuser && password == correctpassword){
        cout << "Welcome. Your data is valid" << endl; 
    }
    else {
        cout << "Invalid username or password" << endl; 
    }

    return 0; 
}