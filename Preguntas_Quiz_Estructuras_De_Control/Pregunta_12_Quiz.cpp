//Pregunta 12 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y devuelva el valor de n redondeado a la decena mas proxima (Esta 
funcion no puede utilizar funciones predefinidas de biblioteca). La unidad 5 
redondea hacia abajo.

Por ejemplo,
    Si n = 43, la funcion debe devolver 40.
    Si n = 12567, la funcion debe devolver 12570. */

#include <iostream>
using namespace std;

int redondeo(int n) {
    int temp;
    int numf;

    temp = (n % 10);
    if(temp <= 5) {
        numf = n - temp;
    } else {
		temp -= 10;
        numf = n - temp;
    }
    
    return numf;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Escriba un numero para redondear a la decena mas cercana ";
    cin >> number;

    cout << redondeo(number) << endl;
    
    return 0;
}
