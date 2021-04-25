//Pregunta 13 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y devuelva la cantidad de digitos que lo conforman.

Por ejemplo, 
    Si n = 43, la funcion debe devolver 2.
    Si n = 12567, la funcion debe devolver 5. */

#include <iostream>
using namespace std;

int cantidadDeDigitos(int n) {
    int counter = 0;

    while(n != 0) {
        counter++;
        n /= 10;
    }
	
	return counter;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere saber la cantidad de digitos ";
    cin >> number;

    cout << cantidadDeDigitos(number) << endl;
}
