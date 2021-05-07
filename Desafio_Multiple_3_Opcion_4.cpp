/*Este es un programa que le pregunta al usuario cuantas veces quiere imprimir
"Eres inteligente!!!" y lo hace ese monton de veces
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	/*Se define una variable times que va a tener el valor que el usuario le
	mete
	*/
	int times;
	
	//Este es el mensaje que se le pone al usuario para que sepa que poner
	cout<<"Cuantas veces quieres que se repita???" <<endl;
	
	/*cin es lo que deja que el usuario meta un valor y despues ese valor lo
	mete como el valor de la variable que le pongas despuues, en este caso como
	el numero de veces que se repita
	*/
	cin>> times;
	
	/*El for es lo que hace que se repita, i es una variable que se define,
	despues se le dice hasta donde va a llegar (las veces que se repita) y 
	finalmente cuando termine de hacer todo i se le suma 1
	*/
	for(int i=1; i<=times; i++){
		
		/*cout es lo que deja que imprima, el i es para la cuenta de las 
		lineas, lo entre comillas es lo que imprime despues endl es lo que hace 
		que la siguiente vez que imprima algo sea una linea nueva
		*/
		cout<<i<<" Eres Inteligente!!!" <<endl;
		
	}
	
	return 0;
}

