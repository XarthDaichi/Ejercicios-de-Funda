//Pregunta 16 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva el primer digito, de izquierda a derecha,
que lo conforma.

Por ejemplo,
    Si n = 94345, la funcion debe devolver 9.
    Si n = 2567, la funcion debe devolver 2. */

#include <iostream>
using namespace std;

int primerNumero(int n) {
    int digit;

    while(n != 0) {
        digit = n % 10;
        n /= 10;
    }
    return digit;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere ver el primer numero de izquierda a derecha ";
    cin >> number;

    cout << primerNumero(number) << endl;
    
    return 0;
}