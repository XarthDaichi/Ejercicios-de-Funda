//Pregunta 8 Quiz Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y un numero entero p, y devuelva el valor del modulo: n % p. La funcion
 no puede utilizar el operador modulo (%). */

#include <iostream>
using namespace std;

int modulo(int n, int p) {
	
    while(n > 0) {
        n -= p;
    }
	if (n != 0){
		n += p;
	}
	
    return n;
}

int main(int argc, char *argv[]) {
    int number;
    int nmod;

    cout << "Escriba el numero ";
    cin >> number;
    
    cout << "Escriba el modulo ";
    cin >> nmod;

    cout << modulo(number, nmod) << endl;
    return 0;
}
