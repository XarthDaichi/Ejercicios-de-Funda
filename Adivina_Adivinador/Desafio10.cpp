/*
En el main()
    Escriba el codigo necesario para que el programa le asigne un puntaje
    al jugador, de acuerdo con la cantidad de intentos que utilice en cada 
    turno. Si el jugador adivina en el primer intento, gana los 10 puntos
    del turno y, pierde un punto, por cada intento adicional que requiera.
    Note que el puntaje ganado en un turno podria ser negativo. Al final de
    la sesion del juego, se debe mostrar al jugador la cantidad de puntos
    que obtuvo. */
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
	
	int rng = pensar(10);
	int number;
    string stemp = "";
    int cont = true;
    int puntos = 10;

    do {
		
		cout << "Cual es el numero que penso la compu entre 0 y 9? ";
        cin >> number;
    
        resultado(number, rng, stemp);

        cout << stemp << endl;
		stemp = "";

		if(number != rng) {
			puntos--;
			cont = true;
        } else {
            cont = false;
        }
    } while(continuar(cont));
    
    cout << "La cantidad de puntos obtenidos fueron: " << puntos << endl;

	return 0;
}
