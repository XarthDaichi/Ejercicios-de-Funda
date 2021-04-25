#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definir una variable de string para guardar los apellidos y nombre
	string apellido1;
	string apellido2;
	string nombre;
	string entero;
	
	//los inputs de usuario
	cout<<"Cual es tu primer Apellido? ";
	cin>>apellido1;
	
	cout<<"Cual es tu segundo Apellido? ";
	cin>>apellido2;
	
	cout<<"Cual es tu nombre? ";
	cin>>nombre;
	
	//ponerlo todo junto
	entero = nombre + " " + apellido1 + " " + apellido2;
	cout<< entero;
	
	return 0;
}
