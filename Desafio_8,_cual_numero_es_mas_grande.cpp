#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definir variables
	int a;
	int b;
	//user input de la primera variable
	cout << "Ponga el valor entero de la primera variable ";
	cin>>a;
	//user input de la segunda variable
	cout << "Ponga el valor entero de la segunda variable ";
	cin>>b;
	//sytem clear (enteoria)
	system("CLS");
	
	//Decidir si los numeros que metieron son iguales o no
	if (a == b){
		//Esto es lo que saca si son iguales
		cout << a << " es igual a " << b << endl;
	} else {
		//Decide cual es mayor a cual
		if (a > b){
			//Si a es mayor a b
			cout << a << " es mayor que " << b << endl;
		} else {
			//Si b es menor a a
			cout << b << " es mayor que " << a << endl;
		}
	}

	return 0;
}

