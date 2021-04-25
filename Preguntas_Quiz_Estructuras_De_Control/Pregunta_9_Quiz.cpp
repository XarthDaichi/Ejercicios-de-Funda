//Pregunta 9 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y un numero entero p, y devuelva el valor de n elevado a la potencia p.
La funcion no puede utilizar la funcion pow() de math.h, ni ninguna funcion similar. */

#include <iostream>
using namespace std;

int potencia(int n, int p) {
    int pot = 1;

    for(int i = 1; i <= p; i++) {
        pot *= n;
    }

    return pot;
}

int main(int argc, char *argv[]) {
    int base;
    int power;

    cout << "Escriba la base de la potencia ";
    cin >> base;

    cout << "Escriba la potencia ";
    cin >> power;

    cout << base << " a la " << power << " es: " << potencia(base, power) << endl;
    return 0;
}
