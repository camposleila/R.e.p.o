//Numeros divisibles por 3 y 5
//Muestra todos los números del 1 al 100 que sean divisibles por 3 y por 5.

#include <iostream>
using namespace std;

int main() {
    cout << "Numeros del 1 al 100 divisibles por 3 y por 5:" << endl;

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << ", ";
        }
    }

    cout << endl;
    return 0;
}
