//Soluciones Diego Quiros Artinano

#include <iostream>
using namespace std;

int MCD(int M, int N) {
    int dividendo;
    int divisor;
    int residuo;
    if(M > N) {
        dividendo = M;
        divisor = N;
    } else {
        dividendo = N;
        divisor = M;
    }

    do {
        residuo = dividendo % divisor;
        dividendo = divisor;
        if(residuo != 0) {
			divisor = residuo;
		}
    } while(residuo != 0);

    return divisor;
}

int main(int argc, char *argv[]) {
    int number1;
    int number2;

    cout << "Ingrese el primer numero entero que quiere evaluar ";
    cin >> number1;

    cout << "Ingrese el segundo numero entero que quiere evaluar ";
    cin >> number2;

    cout << "El maximo comun divisor es " << MCD(number1, number2) << endl;

    return 0;
}
