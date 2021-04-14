/*
En el main()
    Haga que su programa "piense" aleatoriamente un numero, entre 0 y 9,
    y lo registre en la variable computadora.
*/

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
	
	int number = pensar(10);
	
	cout << number;
	
	return 0;
}
