/*
En el main()
    Pregunte al jugador cual digito (0..9) cree que penso la 
    computadora y almacenelo en la variable jugador. */

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

    cout << "Cual es el numero que penso la compu? ";
    cin >> number;

	cout << rng;
	
	return 0;
}