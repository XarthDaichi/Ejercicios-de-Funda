//Pregunta 17 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva true si su primero y ultimo digitos son iguales, 
o false, si no.

Por ejemplo, 
    Si n = 95349, la funcion debe devolver true.
    Si n = 2567, la funcion debe devolver false. */

#include <iostream>
using namespace std;

bool primerYUltimoIgual(int n) {
    int fdigit = n % 10;
    int ldigit;

    while(n != 0) {
        ldigit = n % 10;
		n /= 10;
    }

    return fdigit == ldigit;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere evaluar si el primer y ultimo digito son iguales ";
    cin >> number;

    if (primerYUltimoIgual(number)) {
        cout << "True!!!" << endl;
    } else {
        cout << "False!!!" << endl;
    }
    return 0;
}
