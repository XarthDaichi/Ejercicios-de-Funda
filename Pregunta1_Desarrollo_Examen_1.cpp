//Soluciones Diego Quiros Artinano

#include <iostream>
using namespace std;


//Ejercicio 1: Divisibilidad x 3
int pot(int base, int exp) {
    int potencia = 1;
    for (int i = 1; i <= exp; i++) {
        potencia *= base;
    }
    return potencia;
}

int cubos(int a) {
    int numero = a;
    int suma = 0;
    int digito;
    
    while(numero > 0) {
        digito = numero % 10;
        suma += pot(digito, 3);
        numero /= 10;
    }
    
    return suma;
}

bool divisiblex3(int x) {
    return x % 3 == 0;
}

int main(int argc, char *argv[]) {
    int number;
    int resultadoCubos;

    cout << "Cual es el numero que quiere ver si es divisible por 3? ";
    cin >> number;

    if(divisiblex3(number)) {
        cout << "Si es divisible por 3!!!" << endl;
		while(number != 153){
            cout << number << endl;;
            resultadoCubos = cubos(number);
            number = resultadoCubos;
        }
		cout << number << endl;
    } else {
        cout << "El numero no es divisible por 3 ";
    }
    return 0;
}
