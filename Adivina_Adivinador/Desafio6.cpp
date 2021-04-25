/*
En el main()
    Despliegue en la pantalla un mensaje respecto a si el jugador adivino
    el numero pensado por la computadora o no lo adivino. */

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

int main(int argc, char *argv[]) {
	
	ini_aleatorio();
	
	int rng = pensar(10);
	int number;

    cout << "Cual es el numero que penso la compu entre 0 y 9? ";
    cin >> number;
    
    cout << rng << endl;
    if (number == rng) {
        cout << "Estas correcto";
    } else {
        cout << "Estas incorrecto";
    }
	
	return 0;
}