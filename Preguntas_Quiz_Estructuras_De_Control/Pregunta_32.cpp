// Desafio 32 de Diego Quiros Artinano

/* Encryption
A = 0   B = 1   C = 2   D = 3   E = 4
F = 5   G = 6   H = 7   I = 8   J = 9

Escribir en C++ que codifique el valor recibido en el parametro n.
Ejemplo, si n = 12057, devuelve "BCAFH" */

#include <iostream>
#include <math.h>
using namespace std;

int invertir(int n) {
    int inv = 0;
    int ntemp = n;
    int counter = 0;

    while(ntemp != 0) {
        counter++;
        ntemp /= 10;
    }
	counter--;
    for(int i = counter; i >= 0; i--) {
        inv += (n % 10) * pow(10, i);
        n /= 10;
    }
    
    return inv;
}

string encryption(int n) {
    string crypt = "";
    n = invertir(n);
    while(n != 0) {
        if(n % 10 == 0) {
            crypt += "A";
        } else if(n % 10 == 1) {
            crypt += "B";
        } else if(n % 10 == 2) {
            crypt += "C";
        } else if(n % 10 == 3) {
            crypt += "D";
        } else if(n % 10 == 4) {
            crypt += "E";
        } else if(n % 10 == 5) {
            crypt += "F";
        } else if(n % 10 == 6) {
            crypt += "G";
        } else if(n % 10 == 7) {
            crypt += "H";
        } else if(n % 10 == 8) {
            crypt += "I";
        } else {
            crypt += "J";
        }
		n /= 10;
    }
    return crypt;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere encriptar ";
    cin >> number;

    cout << encryption(number) << endl;
    
    return 0;
}
