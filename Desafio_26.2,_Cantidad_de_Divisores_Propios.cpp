/*Escribir una funcion en el Lenguaje C++que reciba como parametro un numero 
entero n, y devuelva la cantidad de divisores propios(distintos de n) que tiene. 
*/

//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

#include <iostream>

using namespace std;

int cantidadDeDivisoresPropios(int n) {
    int counter = 0;
    for (int i = 1; i <= n/2; i++) {
        if(n % i ==0){
            counter++;
        }
    }
	return counter;
}

int main(int argc, char *argv[]) {
    int number;

    cout << "Cual es el numero que quiere evaluar? ";
    cin >> number;

    cout << "La cantidad de divisores propios es: " << cantidadDeDivisoresPropios(number) << endl;

    return 0;
}
