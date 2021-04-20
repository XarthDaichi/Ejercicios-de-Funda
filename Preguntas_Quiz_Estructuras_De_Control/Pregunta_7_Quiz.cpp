//Pregunta 7 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y un numero entero p, y devuelva el valor de la division entera: n / p. 
La funcion no puede utilizar el operador de division (/). */

#include <iostream>
using namespace std;

float division(int n, int p) {
    int divi = 0;

    while(p > 0) {
        p -= n;
        divi++;
        if(p < 0){
            divi--;
        }
    }

    return divi;
}

int main(int argc, char *argv[]) {
    int divisor;
    int dividendo;

    cout << "Escriba el divisor ";
    cin >> divisor;

    cout << "Escriba el dividendo ";
    cin >> dividendo;

    cout << division(divisor, dividendo) << endl;
    return 0;
}
