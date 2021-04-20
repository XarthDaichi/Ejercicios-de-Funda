//Pregunta 20 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y devuelva true si ne es igual a la suma de sus digitos elevados al 
cubo (numero de Armstrong), o, false, si no.

Por ejemplo,
    Si n = 153, la funcion debe devolver true, porque 
    1^3 + 5^3 + 3^3 = 1 + 125 +27 = 153.

    Si n = 120, la funcion debe devolver false. */

#include <iostream>
#include <math.h>
using namespace std;

bool numeroDeArmstrong(int n) {
    int tempn = n;
    int sumacubos = 0;

    while(tempn != 0) {
        sumacubos += pow(tempn % 10, 3);
        tempn /= 10;
    }
    return sumacubos == n;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escribir el numero que quier ver si es un Numero de Armstrong ";
    cin >> number;

    if(numeroDeArmstrong(number)) {
        cout << "Es un Numero de Armstrong!!!" << endl;
    } else {
        cout << "No es un Numero de Armstrong!!!" << endl;
    }
    
    return 0;
}
