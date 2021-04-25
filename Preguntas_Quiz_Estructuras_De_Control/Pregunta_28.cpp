// Desafio 26 Invertir de Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametros dos 
numeros enteros n y d (d es un digito: 1..9) y devuelva un numero entero con el 
digito d eliminado del numero n.

Por ejemplo, si n = 2343 y de d = 3, la funcion devuelve el numero entero
24. */

#include <iostream>
#include <math.h>
using namespace std;

int eliminar(int n, int d) {
    int eli = 0;
    int ntemp = n;
    int counter = 0;

    while(ntemp != 0) {
        if(ntemp % 10 == d){
            ntemp /= 10;
        } else {
            counter++;
            ntemp /= 10;
        }
    }

    for(int i = 0; i < counter; i++){
        if(n % 10 == d) {
            i--;
            n /= 10;
        } else {
            eli += (n % 10) * pow(10, i);
            n /= 10;
        }
    }


    return eli;
}

int main(int argc, char *argv[]) {
    int number;
    int deli;

    cout << "Escriba el numeor entero que quiere usar ";
    cin >> number;

    cout << "Escriba el digito entre 1..9 que quiere eliminar ";
    cin >> deli;

    cout << eliminar(number, deli) << endl;

    return 0;
}
