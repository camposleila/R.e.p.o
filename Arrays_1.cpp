/*Suma de elementos. 
Escribe un programa que almacene N números en un arreglo y calcule la suma de sus elementos.*/

#include <iostream>
using namespace std;

int main() {
    int N;

    // Paso 1: Pedir al usuario la cantidad de elementos
    cout << "¿Cuántos números quieres sumar? ";
    cin >> N;

    // Paso 2: Declarar un arreglo con tamaño N (usando arreglo dinámico)
    int* numeros = new int[N]; // arreglo dinámico

    // Paso 3: Pedir al usuario que ingrese los números
    cout << "Ingresa " << N << " números:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Paso 4: Calcular la suma de los elementos
    int suma = 0;
    for (int i = 0; i < N; i++) {
        suma += numeros[i];
    }

    // Paso 5: Mostrar la suma
    cout << "La suma de los elementos es: " << suma << endl;

    // Paso 6: Liberar memoria
    delete[] numeros;

    return 0;
}