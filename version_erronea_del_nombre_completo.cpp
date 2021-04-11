#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "¿Cuál es tu primer apellido? \n";
	string apellido1;
	cin >> apellido1;
	cout << "¿Cuál es tu segundo apellido? \n";
	string apellido2;
	cin >> apellido2;
	cout << "¿Cuál es tu nombre? \n";
	string nombre;
	cin >> nombre;
	cout << "¿Cuál es tu segundo nombre? \n";
	string nombre2;
	while(nombre2.empty())
		getline(cin, nombre2);
	cout << nombre + " " + nombre2 + " " + apellido1 + " " + apellido2;
	return 0;
}
