/*Escriba la funcion distancia() que reciba como parametros dos 
numeros enteros y devuelva la distancia absoluta entre estos dos numeros

Por ejemplo,
    Si recibe 2 y 5, la distancia es 3.
    Si recibe 9 y 7, la distancia es 2.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int distancia(int n, int m) {
	return abs(n - m);
}


int main(int argc, char *argv[]) {
	int n;
	int m;
	
	cin >> n;
	cin >> m;
	
	cout << distancia(n, m);
	
	return 0;
}
