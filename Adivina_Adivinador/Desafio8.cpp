/*
En el main()
    Escriba el codigo necesario para que el jugador pueda jugar los
    turnos que desee del juego AdivinaAdivinador. */

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

bool continuar(int &query) {
    return query;
}

int main(int argc, char *argv[]) {
	
	ini_aleatorio();
	
	int rng;
	int number;
    string stemp = "";
    int cont;

    do {
        rng = pensar(10);
		
		cout << "Cual es el numero que penso la compu entre 0 y 9? ";
        cin >> number;
    
        resultado(number, rng, stemp);

        cout << stemp << endl;
		
		stemp = "";
        cout << "Desea continuar? Si si, entonces ponga 1, de lo contrario ponga 0 ";
        cin >> cont;
        
    } while(continuar(cont));

	return 0;
}
