// Desafio 29 de Diego Quiros Artinano

/*Un Numero es Capicua si se lee igual de iquierda a derecha a 
izquierda. El termino procede de la expresion catalana cap i cua 
(que significa 'cabeza y cola'). 

Escribir una funcion en el Lenguaje C++ que reciba como parametros un numero
entero n y devuelva true si el numero es Capicua o false, si no.

Por ejemplo, los numeros 343 y 10501 son numeros capicua. */

#include <iostream>
#include <math.h>
using namespace std;
//Pregunta 26
int invertir(int n) {
    int inv = 0;
    int ntemp = n;
    int counter = 0;

    while(ntemp != 0) {
        counter++;
        ntemp /= 10;
    }
    for(int i = counter - 1; i >= 0; i--) {
        inv += (n % 10) * pow(10, i);
        n /= 10;
    }
    
    return inv;
}
//Pregunta 29
bool numeroCapicua(int n) {
    int ntemp = invertir(n);
    return ntemp == n;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere ver si es Capicua (Palindromo) ";
    cin >> number;

    cout << numeroCapicua(number) << endl;
    
    return 0;
}
