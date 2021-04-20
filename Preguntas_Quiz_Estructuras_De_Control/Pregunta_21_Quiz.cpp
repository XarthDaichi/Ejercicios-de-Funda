//Pregunta 21 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y devuelva el valor de la siguiente suma:
[n(Sigma)(i=1)] (1/i) */

#include <iostream>
using namespace std;

float sumatoria1i(int n) {
    float suma = 0;
    for(float i = 1; i <= n; i++) {
        suma += (1/i);
    }
    return suma;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere hacer la sumatoria ";
    cin >> number;

    cout << sumatoria1i(number) << endl;
    return 0;
}
