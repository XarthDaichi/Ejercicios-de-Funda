//Pregunta 11 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro
un numero entero n y devuelva el valor de n redondeado a la decena
superior (Esta funcion no puede utilizar funciones predefinidas de 
biblioteca). Por ejemplo,
    Si n = 43, la funcion debe devolver 50.
    Si n = 12567, la funcion debe devolver 12570. */

#include <iostream>
using namespace std;

int redondeoSuperior(int n) {
    int temp;

    temp = (n % 10) - 10;

    return n - temp;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba el numero que quiere redondear para arriba ";
    cin >> number;

    cout << redondeoSuperior(number) << endl;

    return 0;
}