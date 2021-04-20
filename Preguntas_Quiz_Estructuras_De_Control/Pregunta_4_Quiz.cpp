//Pregunta 4 Quiz Diego Quiros Artinano

/* Un numero n se dice deficiente si la suma de susdivisores propios (divisores 
distintos de n) es menor que n.

Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n, y devuelva true, si el numero es deficiente o false, si no.

Por ejemplo, 9 es deficiente, porque: 1 + 3 < 9 */

#include <iostream>
using namespace std;

bool numeroDeficiente(int n) {
    int suma = 0;
    
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma < n;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere ver si es deficiente ";
    cin >> number;

if (numeroDeficiente(number)) {
    cout << "Es Deficiente!!!" << endl;
} else {
    cout << "No Es Deficiente!!!" << endl;
}
    
    return 0;
}
