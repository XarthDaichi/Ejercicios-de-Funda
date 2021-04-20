//Pregunta 18 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva true si la cantidad de digitos de n es
par o, false, si no.

Por ejemplo,
    Si n = 9534, la funcion debe devolver true.
    Si n = 267, la funcion debe devolver false. */

#include <iostream>
using namespace std;

bool cantidadDeDigitosEsPar(int n) {
    int numdigits = 0;

    while(n != 0) {
        numdigits++;
        n /= 10;
    }

    return numdigits % 2 == 0;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere ver si tiene la cantidad de digitos par o no ";
    cin >> number;

    if(cantidadDeDigitosEsPar(number)) {
        cout << "La cantidad de digitos es par!!!" << endl;
    } else {
        cout << "La cantidad de digitos es impar!!!" << endl;
    }
    
    return 0;
}
