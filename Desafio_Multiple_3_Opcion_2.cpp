/*/Este es un programa que imprime "Eres inteligente!!!" cinco veces en cinco 
lineas separadas.
/*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*/El for es lo que hace que se repita, i es una variable que se define,
	despues se le dice hasta donde va a llegar (las veces que se repita) y 
	finalmente cuando termine de hacer todo i se le suma 1
	/*/
	for(int i=1; i<=5; i++){
		/*/cout es lo que deja que imprima, lo entre comillas es lo que imprime
		despues endl es lo que hace que la siguiente vez que imprima algo sea
		una linea nueva
		/*/
		cout<<"Eres inteligente!!!" <<endl;
		
	};
	
	return 0;
}

