#include <iostream>

using namespace std;

int main()
{
    double a;

    cout << "Inserte la calificación obtenida" << endl;
    cin >> a;
    if (a >= 60 && a < 100)
    {
        cout << "Aprobaste. Felicidades! :D" << endl;
    }
    else if (a < 59 && a > 0)
    {
        cout << "No aprobaste :( Sigue intentando " << endl;
    }
    else
    {
        cout << "La nota ingresada no está dentro del rango. Intentalo de nuevo." << endl;
    }

    cout << "Gracias por hacer uso de este programa. Bye." << endl;
    return 0;
}
