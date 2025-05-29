#include <iostream>
using namespace std;

float conversion(float c)
{
    return ((c * 1.8) + 32);
}

int main()
{
    float Celsius;
    cout << "Ingrese la temperatura en grados Celsius" << endl;
    cin >> Celsius;
    cout << Celsius << " es " << (conversion(Celsius)) << " en Farenheit" << endl;
    return 0;
}