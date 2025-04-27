#include <iostream>

using namespace std;

int main()
{
    double a;
    
    cout << "Inserte la calificación obtenida" <<endl;
    cin >> a;
    if (90<a<100)
    {
        cout << "Clasificación: Excelente. Felicidades, obtuviste la mejor clasificación! :D" << endl;
    }
    else if (80<a<89)
    {
        cout << "Clasificación: Muy Bueno. Felicidades :) Sigue así" << endl;
    }
    else if (70<a<79)
    {
        cout << "Clasificación: Bueno. Felicidades. Aprobaste, sigue mejorando" << endl;
    }
    else if (60<a<69)
    {
        cout << "Clasificación: Regular. Aprobaste, puedes seguir mejorando" << endl;
    }
    else if (50<a<59)
    {
        cout << "Clasificación: Insuficiente. Debes seguir practicando. No te desanimes." << endl;
    }
    else if (0<a<49)
    {
        cout << "Clasificación: Reprobado. No lo has conseguido esta vez, sigue intentando." << endl;
    }
    else 
    {
        cout << "La nota ingresada no está dentro del rango. Intentalo de nuevo." <<endl;
    }

    cout << "Gracias por hacer uso de este programa. Bye." <<endl;
    return 0;
}
