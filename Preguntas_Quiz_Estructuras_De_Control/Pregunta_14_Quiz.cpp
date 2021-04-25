//Pregunta 14 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva el menor digito que lo conforma.

Por ejemplo,
    Si n = 4345, la funcion debe devolver 3.
    Si n = 12567, la funcion debe devolver 1. */

#include <iostream>
using namespace std;

int numeroMenor(int n) {
    int digit = n % 10;

    while(n != 0){
        if (n % 10 < digit) {
            digit = n % 10;
        }
        n /= 10;
    }
    
    return digit;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Cual es el numero que quiere evaluar el menor digito ";
    cin >> number;

    cout << numeroMenor(number);

    return 0;
}