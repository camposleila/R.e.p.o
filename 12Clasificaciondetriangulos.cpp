/*Clasificación de triángulos*/
#include <iostream>
using namespace std;

int main()
{

    float lado1, lado2, lado3;

    cout << "Bienvenido. Este es un programa para saber si un triangulo es equilatero, isosceles o escaleno" << endl;

    cout << "Inserte la longitud de un lado del triangulo" << endl;
    cin >> lado1;

    cout << "Inserte la siguiente longitud del lado del triangulo" << endl;
    cin >> lado2;

    cout << "Inserte la longitud del ultimo lado del triangulo" << endl;
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "El triangulo que usted inserto es equilatero" << endl;
    }
    else if (lado1 == lado2)
    {
        cout << "El triangulo que usted inserto es isosceles" << endl;
    }
    else if (lado1 == lado3)
    {
        cout << "El triangulo que usted inserto es isosceles" << endl;
    }
    else if (lado2 == lado3)
    {
        cout << "El triangulo que usted inserto es isosceles" << endl;
    }
    else
    {
        cout << "El triangulo que usted inserto es escaleno" << endl;
    }

    return 0;
}