#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
	//define las variables que vamos a usar en el programa
	string placa; //placa como string en caso de que tenga letras
	int lplaca;
	int lastNumber; //valor que le vamos a meter para ver cuando es la restriccion
	
	//User input de la placa
	cout << "Buenas! Ingrese su placa ";
	cin >> placa;
	
	lplaca = placa.length(); //para ver que tan larga es la placa
	
	//verifica que la placa sea menor que 7
	if (lplaca >=7) {
		//esto es lo que imprime si es mayo o igual que 7
		cout << "Usted a ingresado un numero invalido." << endl;
		
	} else {
		//borrar todo menos el ultimo digito de la placa
		placa.erase(0,lplaca-1);
		
		//usar el sstream para cambiar de string a int
		stringstream sToI(placa);
		
		//meter el valor que quedaba de placa a lastNumber
		sToI >> lastNumber;
		
		//Ver cuando es la restriccion
		if (lastNumber == 1 || lastNumber == 2) {
			//Lo que imprime si el numero de placa es 1 o 2
			cout << "Usted tiene resticcion el Lunes." << endl;
		} else if (lastNumber == 3 || lastNumber == 4) {
			//Lo que imprime si el numero de placa es de 3 o 4
			cout << "Usted tiene restriccion el Martes." << endl;
		} else if (lastNumber == 5 || lastNumber == 6) {
			//Lo que imprime si el numero de placa es de 5 o 6
			cout << "Usted tiene resticcion el Miercoles." << endl;
		} else if (lastNumber == 7 || lastNumber == 8) {
			//Lo que imprime si el numero de placa es de 7 o 8 
			cout << "Usted tiene restriccion el Jueves." << endl;
		} else {
			//Lo que imprime si el numero de placa es de 9 o 0
			cout << "Usted tiene restriccion el Viernes." << endl;
		}
	}
	return 0;
}

