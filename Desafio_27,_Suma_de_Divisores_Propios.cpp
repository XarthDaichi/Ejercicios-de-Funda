/*Escribir una funcion en el Lenguaje C++ que recibacomo parametro un numero 
entero n, y devuelva la suma de los divisores propios de n, (distinto de n) que 
tiene. */

//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

#include <iostream>

using namespace std;

int sumaDeDivisoresPropios(int n) {
    int suma = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }

    return suma;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Cual es el numero que quiere evaluar? ";
    cin >> number;

    cout << "La suma de los divisores propios es: " << sumaDeDivisoresPropios(number) << endl;
    
    return 0;
}
