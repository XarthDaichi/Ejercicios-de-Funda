/* Escriba una funcion resultado() que reciba dos numeros enteros entre
0 y 9 y devuelva true si el jugador adivino el numero o false si no, y
devuelva, como parametro, la palabra:
    Ganaste!!!: Si el jugador adivino el numero.
    Caliente!!!: Si el jugador fallo por dos numeros o menos.
    Tibio!!!: Si el jugador fallo por cuatro numeros o menos.
    Frio!!!: Si el jugador fallo por mas de 4 numeros.

En el main()
    Mostrar al usuario el resultado del turno del juego. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ini_aleatorio()
{
	srand(time(0)) ;
}

int pensar(int max) {
	return int(max*double(rand())/(RAND_MAX+1.0));
}

int distancia(int n, int m) {
	return abs(n - m);
}

bool resultado(int num, int r, string &message) {
    
    bool result;

    if (num == r) {
        result = true;
        message += "Ganaste!!!";
    } else {
        result = false;
        if (distancia(num, r) <= 2) {
            message += "Caliente!!!";
        } else if (distancia(num, r) <= 4) {
            message += "Tibio!!!";
        } else {
            message += "Frio!!!";
        }
    }
    
    return result;
}

int main(int argc, char *argv[]) {
	
	ini_aleatorio();
	
	int rng = pensar(10);
	int number;
    string stemp = "";

    cout << "Cual es el numero que penso la compu entre 0 y 9? ";
    cin >> number;
    
    resultado(number, rng, stemp);

    cout << stemp << endl;

	return 0;
}