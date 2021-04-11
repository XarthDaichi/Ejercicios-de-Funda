#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int largo;
	int ancho;
	int area;
	
	// se le pide al usuario el valor del largo
	cout<<"Cuál es el largo del rectángulo?: ";
	cin>>largo;
	
	// se le pide al usuario el valor del ancho
	cout<<"Cuál es el ancho del rectángulo?: ";
	cin>>ancho;
	
	// se le mete valor al area
	area = largo * ancho;
	cout<<"El área del rectángulo es: "<<area<<endl;
	
	return 0;
}

