#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	//definir vairable donde se van a guardar los valores de los catetos y la 
	//hipostenusa
	float cat1;
	float cat2;
	float hip;
	
	//input del usuario de los catetos
	cout<<"Cual es el primer cateto? ";
	cin>>cat1;
	
	cout<<"Cual es el segundo cateto? ";
	cin>>cat2;
	
	//usando la formula para encontrar la hipotenusa
	
	
	hip = sqrt(pow(cat1,2) + pow(cat2,2));
	//print
	cout<<"El primer cateto: "<<cat1<<endl;
	cout<<"El segundo cateto: "<<cat2<<endl;
	cout<<"La hipotenusa: "<<hip<<endl;
	
	return 0;
}
