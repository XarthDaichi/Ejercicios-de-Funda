//Pregunta 10 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y devuelva el valor de n redondeado a la decena inferior. (Esta funcion
no puede utilizar funciones predefinidas de biblioteca). Por ejemplo,
    Si n = 43, la funcion debe devolver 40.
    Si n = 12567, la funcion debe devolver 12560.
*/

#include <iostream>
using namespace std;

int redondeoInferior(int n) {
    int temp = n % 10;
    return n - temp;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escribir el numero que quiere redondear para abajo ";
    cin >> number;

    cout << redondeoInferior(number) << endl;


    return 0;
}
