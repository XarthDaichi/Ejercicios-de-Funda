//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Crear un diagrama de flujo del algoritmo para leer un numero entero n y 
mostrar la frase "Eres Inteligente!!!" n veces.

Luego, Escribir un programa en el Lenguaje C++ que despliegue en la pantalla el
mensaje: "Eres Inteligente!!!"
y lo repita, en una linea distinta y contigua (seguida), la cantidad de veces
indicada por el usuario del programa */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int times;
	string eI = "Eres Inteligente!!!";
	
	cout << eI << endl;
	
	cout << "Cuantas veces quieres que te lo repita? ";
	cin >> times;
	
	system("CLS");
	
	for (int i = 1; i <= times; i++) {
		cout << eI << endl;
	}
	
	return 0;
}

