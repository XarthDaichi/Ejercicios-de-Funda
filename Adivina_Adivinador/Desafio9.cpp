/*
En el main()
    Escriba el codigo necesario para que, en cada turno del juego, el
    jugador pueda intentar varias veces hasta que adivine el numero que
    penso la computadora. El juego le debe indicar la cantidad de intentos
    que el jugador necesito para adivinar. */
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
    int intentos = 0;

    do {
		
		cout << "Cual es el numero que penso la compu entre 0 y 9? ";
        cin >> number;
    
        resultado(number, rng, stemp);

        cout << stemp << endl;
		stemp = "";

        intentos++;
        
    } while(number != rng);
    
    cout << "La cantidad de intentos fueron: " << intentos << endl;

	return 0;
}
