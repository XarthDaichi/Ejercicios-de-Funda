#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	//definiendo los cocientes
	int a;
	int b;
	int c;
	
	//definindio la discriminante y las raices de x
	int discriminante;
	float x1;
	float x2;
	
	//User input del cociente a
	cout << "Metale un valor entero al cociente a ";
	cin >> a;
	//User input del cociente b
	cout << "Metale un valor entero al cociente b ";
	cin >> b;
	//User input del cociente c
	cout << "Metale un valor entero al cociente c ";
	cin >> c;
	//resolviendo la discriminante para despues ver si tiene raices
	discriminante = pow(b,2) + -4*a*c;
	
	if (discriminante < 0) {
		//Lo que se imprime si la discriminante es menor que 0, no tiene raices
		cout << "La ecuacion cuadratica no tiene raices reales para y = 0";
	} else {
		//resolviendo por las Xs para dar las raices de la ecuacion cuadratica 
		x1 = (-b + sqrt(discriminante))/(2*a);
		x2 = (-b - sqrt(discriminante))/(2*a);
		
		if (discriminante == 0) {
			//Lo que se imprime si la discriminante = 0, tiene una raiz
			cout << "La ecuacion cuadratica tiene dos raices reales iguales y ambas son: " << x1 << endl;
		} else {
			//Lo que se imprime si la discriminante es mayor que 0, tiene dos raices diferentes
			cout << "La ecuacion cuadratica tiene dos raices reales diferentes y son: " << x1 << " y " << x2 << endl;
		}
	}
	
	return 0;
}

