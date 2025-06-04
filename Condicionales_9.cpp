// Un estudiante recibe beca si su promedio es mayor o igual a 85 y tiene menos de 3 faltas.

#include <iostream>
using namespace std;

int main()
{
    float mean;
    int abs;

    cout << "Bienvenido al registro de becas. Ingrese el promedio del alumno" << endl;
    cin >> mean;

    cout << "Ingrese la cantidad de faltas" << endl;
    cin >> abs;

    if ((mean >= 85) && (abs < 3))
    {
        cout << "Felicidades. Ha recibido su beca" << endl;
    }
    else
    {
        cout << "No has recibido tu beca. Sigue intentando" << endl;
    }
}