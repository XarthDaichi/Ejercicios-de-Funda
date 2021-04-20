//Pregunta 19 Quiz Diego Quiros Artinano

/*Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva true si la cantidad de digitos de n
es impar o, false, si no.

Por ejemplo,
    Si n = 95324, la funcion debe devolver true.
    Si n = 2657, la funcion debe devolver false. */

#include <iostream>
using namespace std;

int cantidadDeDigitosEsImpar(int n) {
    int numdigits = 0;

    while(n != 0) {
        numdigits++;
        n /= 10;
    }

    return numdigits % 2 == 1;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escribir el numero que quiere ver si la cantidad de digitos es impar o no ";
    cin >> number;

    if(cantidadDeDigitosEsImpar(number)) {
        cout << "La cantidad es Impar!!!" << endl;
    } else {
        cout << "La cantidad no es Par!!!" << endl;
    }
    
    return 0;
}
