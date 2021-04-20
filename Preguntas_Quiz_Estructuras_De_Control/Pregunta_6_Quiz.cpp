//Pregunta 6 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y un numero entero p, y devuelva el valor de la multiplicacion n * p. 
La funcion no puede utilizar el operador de multiplicacion (*). */

#include <iostream>
using namespace std;

int multiplicacion(int n, int p) {
    int multi = 0;
    for(int i = 1; i <= p; i++) {
        multi += n;
    }
    return multi;
}

int main(int argc, char *argv[]) {
    int number1;
    int number2;

    cout << "Escriba el primer numero que quiere multiplicar ";
    cin >> number1;

    cout << "Esriba el segundo numero que quiere multiplicar ";
    cin >> number2;

    cout << multiplicacion(number1, number2) << endl;

    return 0;
}
