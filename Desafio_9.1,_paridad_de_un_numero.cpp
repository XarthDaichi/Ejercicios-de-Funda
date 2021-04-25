#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definir una variable
	int a;
	//user input para la variable a
	cout << "Pongale valor entero a 'a' ";
	cin >> a;
	//averiguar si es para o impar usando modulos
	if (a % 2 == 0){
		//si a es par
		cout << a << " es par. \n";
	} else {
		//si a no es par
		cout << a << " es impar. \n";
	}
	
	return 0;
}

