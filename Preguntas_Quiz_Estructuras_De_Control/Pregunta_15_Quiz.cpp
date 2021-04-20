//Pregunta 15 Quiz Diego Quiros Artinano

/*Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva el mayor digito que lo conforma.

Por ejemplo,
    Si n = 4345, la funcion debe devolver 5.
    Sin n = 12567, la funcion debe devolver 7. */

#include <iostream>
using namespace std;

int numeroMayor(int n) {
    int digit = n % 10;
    
    while(n != 0) {
        if(n % 10 > digit) {
            digit = n % 10;
        }
        n /= 10;
    }

    return digit;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere evaluar el digito mas grande ";
    cin >> number;

    cout << numeroMayor(number) << endl;
    
    return 0;
}