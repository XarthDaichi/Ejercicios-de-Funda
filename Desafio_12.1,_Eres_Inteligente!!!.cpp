//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Escribir un programa en el Lenguaje C++ que despliegue en la pantalla el 
mensaje "Eres Inteligente!!!" y lo repita, en una linea distina y contigua 
(seguida), la cantidad de veces indicada por el usuario del programa. Cada
linea debe iniciar con el numero de repeticion, de la siguiente manera.
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int times;
	
	cout << "Eres Inteligente!!!" << endl;
	cout << "Cuantas veces quieres que te lo repita???" << endl;
	
	cin >> times;
	
	for(int i=1; i<=times; i++){
		cout<<i<<" Eres Inteligente!!!" << endl;
		
	}
	
	return 0;
}
