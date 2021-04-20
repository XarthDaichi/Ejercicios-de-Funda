//Pregunta 23 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva el valor de la siguiente suma:
[n(Sigma)(k=1)](1/k(k+1)) */

#include <iostream>
using namespace std;

float sumatoria1kk1(float n) {
    float suma = 0;

    for(float k = 1; k <= n; k++) {
        suma += 1/(k*(k+1));
    }
	return suma;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere usar para la sumatoria ";
    cin >> number;

    cout << sumatoria1kk1(number) << endl;
    
    return 0;
}
