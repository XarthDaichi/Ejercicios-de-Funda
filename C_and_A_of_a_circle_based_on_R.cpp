#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definir pi como constante
	const float pi = 3.14;
	
	//define el radio
	float r, circumferencia, area;
	
	//input de usuario para el radio
	cout<<"Cual es el radio? ";
	cin>>r;
	
	//usando la ecuación para encontrar la circumferencia y el area
	circumferencia = 2*r*pi;
	area = r*r*pi;
	
	//print
	cout<<"La circumferencia del circulo es: "<<circumferencia<<endl;
	cout<<"El area del circulo es: "<<area<<endl;
	
	return 0;
}

