//Pregunta 22 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelve el valor de la siguiente suma:
[n(Sigma)1] (1/n) */

#include <iostream>
using namespace std;

float sumatoria1n(float n) {
    float suma = 0;

    for(int i = 1; i <= n; i++) {
        suma += 1/n;
    }
    
    return suma;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere usar para la sumatoria ";
    cin >> number;

    cout << sumatoria1n(number) << endl;
    return 0;
}
