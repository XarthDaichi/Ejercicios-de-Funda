//Desafio 30 de Diego Quiros Artinano

/* Dos numeros enteros positivos a y b se dicen numeros amigos si
el numero a es la suma de los divisores propios de b, y b es la suma 
de los divisores propios de a. (el 1 se considera divisor propio, pero no el mismo numero).

(Sigma) divisores propios de 220 = 1+2+4+5+10+11+20+22+44+55+110=284

(Sigma) divisores propios de 284 = 1+2+4+71+14=220

Por lo tanto, el 220 y el 284 son numeros amigos.

Escribir una funcion en el Lenguaje C++ que reciba como parametros dos numero enteros n y p,
y devuelva true si los numeros n y p son amigos, o false, si no.

Por ejemplo, 
    Los numeros 220 y 284 SON numeros amigos
    Los numeros 343 y 105 NO son numeros amigos.
*/

#include <iostream>
#include <math.h>
using namespace std;

bool numerosAmigos(int n, int p) {
    int suman = 0;
    int sumap = 0;

    for(int i = 1; i <= n/2; i++){
        if(n % i == 0) {
            suman += i;
        }
    }

    for(int i = 1; i <= p/2; i++) {
        if(p % i == 0) {
            sumap += i;
        }
    }
    
    return suman == p && sumap == n;
}

int main(int argc, char *argv[]) {
    int number1;
    int number2;

    cout << "Escriba el primero de los numeros que quiere evaluar si son amigos ";
    cin >> number1;

    cout << "Escriba el segundo de los numeros que quiere evaluar si son amigos ";
    cin >> number2;

    cout << numerosAmigos(number1, number2) << endl;
    
    return 0;
}