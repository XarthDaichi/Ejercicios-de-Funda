// Desafio 31 de Diego Quiros Artinano

/* Diez jovenes decidieron celebrar su graduacion con un almuerzo en un restaurante.
Una vez reunidos, se entablo entre ellos una discusion sobre el orden en que habian de
sentarse a la mesa. Unos propusieron que la colocacion fuera por orden alfabetico; 
otros, por edad; otros por el promedio de graduacion; otros por la estatura, etc. La
discusion se prolongaba, la sopa se enfrio y nadie se sentaba a la mesa.

El camarero cansado de la situacion, les dijo que se sentaran en cualquier orden y que
el les tenia una propuesta. Todos se sentaron sin seguir un orden determinado.

El camarero entonces les dijo:

Que uno cualquiera antoe el orden en que estan sentados ahora. Manana vienen a 
comer y se sientan en otro orden. Pasado manana vienen de nuevo a comer y se 
sientan en orden distinto, y asi sucesivamente hasta que hayan probado todas las
combinaciones posibles. Cuando llegue el dia en que ustedes tengan que sentarse de
nuevo en la misma forma que ahora, les prometo solemnemente, que en lo sucesivo
les invitare a comer gratis diariamente, sirviendoles los platos que ustedes deseen.

La proposicion agrado a todos y fue aceptada.

Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero entero n
y devuelva la cantidad de formas distintas de ordenar los elementos de un conjunto de n
elementos. */
#include <iostream>
#include <math.h>
using namespace std;

int unaComidaGratis(int n) {
    int formas = 1;

    for(int i = 1; i <= n; i++) { //Para hacer n! (n factorial)
        formas *= i;
    }
    return formas;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero de personas en la mesa ";
    cin >> number;

    cout << unaComidaGratis(number);
    
    return 0;
}