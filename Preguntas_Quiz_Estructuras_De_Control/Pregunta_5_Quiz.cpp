//Pregunta 5 Quiz Diego Quiros Artinano

/* Un numero n se dice abundante si la suma de sus divisores propios (divisores 
distintos de n) es mayor que n.

Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n, y devuelva true, si el numero es abundante o, false, si no.

Por ejemplo, 12 es abundante, porque:
    1+2+3+4+6 > 12 */

#include <iostream>
using namespace std;

bool numeroAbundante(int n) {
    int suma = 0;

    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            suma += i;
        }
    }
    return suma > n;
}

int main(int argc, char *argv[]){
    int number;

    cout << "Escriba el numero que quiere ver si es abundante ";
    cin >> number;

    if(numeroAbundante(number)) {
        cout << "Es Abundante!!!";
    } else {
        cout << "No Es Abundante!!!";
    }

    return 0;
}
