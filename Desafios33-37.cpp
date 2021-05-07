//Soluciones de Diego Quiros Artinano
#include <iostream>
using namespace std;

int pot(int base, int exp) {
    int solucion = 1;
    for(int i = 1; i <= exp; i++) {
        solucion *= base;
    }
    return solucion;
}

/*Desafio 33: Funcion fibonacci(n) que devuelve el n-esimo termino 
de la serie de Fibonacci */
int fibonacci(int n) {
    int numfib = 1, anterior = 1, trasanterior = 1;
    for(int i = 2; i <= n; i++) {
        numfib = anterior + trasanterior;
        trasanterior = anterior;
        anterior = numfib;
    }
    return numfib;
}

/*Desafio 34: Funcion serieFibonacci(n) que devuelve una hilera
con los terminos de la serie de Fibonacci hasta el n-esimo termino. */
string serieFibonacci(int n) {
    string terminos = "";
    for(int i = 0; i <= n; i++){
        terminos += to_string(fibonacci(i));
		terminos += "\n";
    }
    return terminos;
}

/*Deafio 35: Comienece con cualquier numero entero positivo n.
Para obtener el siguiente numero n de la secuencia:
    Si n es par, dividalo entre 2
    Si n es impar, multipliquelo por 3 y sumele 1

La conjetura dice que se puede obtener sucesivamente un nuevo numero
de la secuenia, hasta que el numeor sea igual a 1.

Escriba una funcion que devuelva una hilera (string) con le sucesion
de numeros de la conjetura de ULAM, partiend de un numero entero n que
se recibe como parametro. Cada numero de la serie debe ir en una linea
distinta*/

string conjecturaUlam(int n) {
    string terminos = "";
    terminos += to_string(n);
	terminos += "\n";
    while(n != 1) {
        if(n % 2 == 1) {
            n = (3*n) + 1;
            terminos += to_string(n);
			terminos += "\n";
        } else {
            n /= 2;
            terminos += to_string(n);
			terminos += "\n";
        }
    }
    return terminos;
}

/*Desafio 36: Un numero es feliz si al sustituir sucesivamente el numero
por la suma del cuadrado de sus digitos, es decir, por la suma de sus
digitos elevados al cuadrado, se llega al numero 1.
Si no se llega al 1 y se llega al numero 4, entonces el numero no es feliz.

Escriba una funcion que determine si un numero entero recibido como parametro 
es un numero feliz o no.
- 2019 es un numero feliz
- 31 o 37?
- 23? */
bool numerosFelices(int n) {
    bool numeroFeliz;
    int ntemp = n, nuevoNumero = 0;

    while(ntemp != 1 && ntemp != 4) {
		
        while (ntemp != 0) {
            nuevoNumero += pot((ntemp % 10), 2);
            ntemp /= 10;
        }
		
        ntemp = nuevoNumero;
		nuevoNumero = 0;
    }
	
    if(ntemp == 1) {
        numeroFeliz = true;
	} else if(ntemp == 4) {
		numeroFeliz = false;
	}
	
    return numeroFeliz;
}


/*Desafio 37: Utilizar la Funcion Numero Feliz para determinar cual sera
el proximo ano feliz, a partir de un ano n recibido como parametro.*/
int siguienteAnoFeliz(int n) {

    while (!numerosFelices(n)) {
        n++;
    }
    return n;
}

int main(int argc, char *argv[]) {
    int number;
	int input;

	cout << "Escriba el numero de la funcion que quiere usar: " << endl;
	cout << "1. Fibonacci" << endl;
	cout << "2. serieFibonacci" << endl;
	cout << "3. ConjecturaUlam" << endl;
	cout << "4. Numeros Felices" << endl;
	cout << "5. Siguiente Año Feliz" << endl;
	cin >> input;
	
	cout << "Escriba el numero que quiere usar ";
	cin >> number;
	system("CLS");
	
	if (input == 1) {
		cout << "Prueba Fibonacci" << endl;
		cout << fibonacci(number) << endl;
	} else if (input == 2) {
		cout << "Prueba serieFibonacci: " << endl;
		cout << serieFibonacci(number) << endl;
	} else if (input == 3) {
		cout << "Prueba de la Conjectura de Ulam: " << endl;
		cout << conjecturaUlam(number) << endl;
	} else if (input == 4) {
		cout << "Pruebas de Numeros Felices: " << endl;
		cout << numerosFelices(number) << endl;
	} else if (input == 5) {
		cout << "El siguiente año Feliz es: " << endl;
		cout << siguienteAnoFeliz(number) << endl;
	} else {
		cout << "Ha ingresado un numero incorrecto" << endl;
	}
    return 0;
}
