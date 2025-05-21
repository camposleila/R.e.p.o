#include <iostream>
using namespace std;

int main()
{
    /*Dia laboral o fin de semana*/
    int a;
    cout << "Bienvenido. Inserte un numero del 1 al 7 para saber si corresponde a un dia laboral o a fin de semana." << endl;
    cin >> a;
    if (a <= 5)
    {
        if (a == 1)
        {
            cout << "Lunes" << " ";
        }
        else if (a == 2)
        {
            cout << "Martes" << " ";
        }
        else if (a == 3)
        {
            cout << "Miercoles" << " ";
        }
        else if (a == 4)
        {
            cout << "Jueves" << " ";
        }
        else
        {
            cout << "Viernes" << " ";
        }
        cout << "es un dia laboral";
    }
    else if (a == 6 || a == 7)
    {
        if (a == 6)
        {
            cout << "Sabado" << " ";
        }
        else if (a == 7)
        {
            cout << "Domingo" << " ";
        }
        cout << "es fin de semana" << endl;
    }
    else {
        cout << "Inserte un numero dentro del rango (1 al 7)" << endl; 
    }
    return 0;
}