//Pregunta 25 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva el valor de la siguiente suma:
[n(Sigma)(i=1)] (1/i - 1/i+1) */

#include <iostream>
using namespace std;

float sumatoria1i1i1(float n) {
    float suma = 0;
    
    for(float i = 1; i <= n; i++) {
        suma += ((1/i) - (1/(i+1)));
    }
    return suma;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere usar sumatoria ";
    cin >> number;

    cout << sumatoria1i1i1(number) << endl;
    return 0;
}
