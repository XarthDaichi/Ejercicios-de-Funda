// Desafio 32 de Diego Quiros Artinano

/* Encryption
A = 0   B = 1   C = 2   D = 3   E = 4
F = 5   G = 6   H = 7   I = 8   J = 9

Escribir en C++ que codifique el valor recibido en el parametro n.
Ejemplo, si n = 12057, devuelve "BCAFH" */

#include <iostream>
#include <math.h>
using namespace std;

string encryption(int n) {
    string crypt = "";

    while(n != 0) {
        if(n % 10 == 0) {
            crpyt += "A";
        } else if(n % 10 == 1) {
            crpyt += "B";
        } else if(n % 10 == 2) {
            crypt += "C";
        } else if(n % 10 == 3) {
            crypt += "D";
        } else if(n % 10 == 4) {
            crypt += "E";
        } else if(n % 10 == 5) {
            cyrpt += "F";
        } else if(n % 10 == 6) {
            cyrpt += "G";
        } else if(n % 10 == 7) {
            crypt += "H";
        } else if(n % 10 == 8) {
            crypt += "I";
        } else {
            crypt += "J";
        }
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