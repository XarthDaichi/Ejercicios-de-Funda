//Pregunta 24 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva el valor de la siguiente suma:
[n(Sigma)(k=1)] (1/k(k+3)) */

#include <iostream>
using namespace std;

float sumatoria1kk3(float n) {
    float suma = 0;

    for(float k = 1; k <= n; k++) {
        suma += 1/(k*(k+3));
    }

    return suma;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere usar para la sumatoria ";
    cin >> number;

    cout << sumatoria1kk3(number) << endl;
    return 0;
}
