// Desafio 26 Invertir de Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametros tres
numeros n, d y s (d, s son digitos: 1..9) y devuelva un numero entero con
el digito d sustituido por el s.

Por ejemplo, si n = 2343 y d = 3 y s = 5, la funcion devuelve el numero 
entero 2545. */

#include <iostream>
#include <math.h>
using namespace std;

int sustituir(int n, int d, int s) {
    int sust = 0;
    int ntemp = n;
    int counter = 0;

    while(ntemp != 0) {
        counter++;
        ntemp /= 10;
    }

    for(int i = 0; i < counter; i++) {
        if(n % 10 == d) {
            sust += s * pow(10, i);
            n /= 10;
        } else {
            sust += (n % 10) * pow(10, i);
        }
    }
    return sust;
}

int main(int argc, char *argv[]) {
    int number;
    int sustituido;
    int sustituyendo;

    cout << "Escriba el numero entero que quiere usar ";
    cin >> number;

    cout << "Escriba el digito del 1 a 9 que quiere sustituir ";
    cin >> sustituir;

    cout << "Escriba el digito del 1 a 9 que quiere ser sustituido ";
    cin >> sustituyendo;

    cout << sustituir(number, sustituir, sustituyendo) << endl;
    
    return 0;
}