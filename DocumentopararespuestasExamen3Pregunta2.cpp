// Soluciones Diego Quiros Artinano

#include <iostream>
#include <sstream>
using namespace std;

#define tam 50
class Coleccion {
private:
    char vector[tam];
    int cantidad;
public:
    // Metodos constructores ya dados
    Coleccion() {
        cantidad = 0;
        for(int i = 0; i < tam; i++) {
            vector[i] = ' ';
        }
    }
    Coleccion(int elTam) {
        cantidad = 0;
        for(int i = 0; i < elTam; i++) {
            vector[i] = ' ';
        }
    }
    // Metodos set y get ya dados
    void setCantidad(int cant) {
        cantidad = cant;
    }
    int getCantidad() {
        return cantidad;
    }

    void agregarCaracter(char agregado) {
        if (cantidad < tam) {
            vector[cantidad] = agregado;
            cantidad++;
        }
    }
	
	void agregarPalabra(string laPalabra) {
		for(int i = 0; i < laPalabra.length(); i++){
			agregarCaracter(laPalabra.at(i));
		}
	}

    // Si es vocal devuelve true de lo contrario false
    bool vocal(int pos) {
        if(tolower(vector[pos]) == 'a' || tolower(vector[pos]) == 'e' || tolower(vector[pos]) == 'i' || tolower(vector[pos]) == 'o' || tolower(vector[pos]) == 'u') {
            return true;
        }
        return false;
    }
    // Meteodo toString() de Coleccion
    string toString() {
        stringstream s;
        s << "cantidad de caracteres es: " << cantidad << endl;
        for(int i = 0; i < cantidad; i++) {
            s << vector[i];
        }
        s << endl;
        return s.str();
    }

    // Metodo para convertir a verbo
    void convertirVerbo() {
        if(vector[cantidad - 1] == 'e') {
            if (vector[cantidad - 2] == 'i') {
                cantidad -= 2;
                agregarCaracter('y');

            } else {
                cantidad--;
            }
        } else {
            if(vector[cantidad - 1] == 'y') {
            } else {
                if (cantidad < 6 && !(vocal(cantidad - 1))) {
                    if (vocal(cantidad - 2)) {
                        agregarCaracter(vector[cantidad - 1]);
                    }
                }
            }
        }
        agregarCaracter('i');
        agregarCaracter('n');
        agregarCaracter('g');
    }

    void insertaOrdenado(char agregado) {
        char temp;
        agregarCaracter(agregado);
        for(int i = 0; i < cantidad; i++) {
            if(vector[cantidad - 1] < vector[i]) {
                temp = vector[i];
                vector[i] = vector[cantidad - 1];
                vector[cantidad - 1] = temp;
            }
        }
    }

    int ocurrencia(char car) {
        int counter = 0;
        for(int i = 0; i < cantidad; i++) {
            if(vector[i] == car) {
                counter++;
            }
        }
        return counter;
    }

    char mayoritario() {
        int mayor = 0;
        int tempOcurrencia;
        char elChar;
        for(int i = 0; i < cantidad; i++) {
            tempOcurrencia = ocurrencia(vector[i]);
            if(mayor < tempOcurrencia) {
                mayor = tempOcurrencia;
                elChar = vector[i];
            }
        }
        return elChar;
    }

    void cifrado(Coleccion &salida) {
        for (int i = 0; i < tam; i++) {
			salida.vector[i] = 0;
		}
		salida.cantidad = 0;
		for(int i = 0; i < cantidad; i++) {
            salida.agregarCaracter(vector[i]);
        }
        char temp;
        for(int i = 0; i < salida.cantidad/2; i++) {
            temp = salida.vector[i];
            salida.vector[i] = salida.vector[cantidad - (i + 1)];
            salida.vector[cantidad - (i + 1)] = temp;
        }
        for(int i = 0; i < salida.cantidad; i++) {
            if (salida.vector[i] == 'A' || salida.vector[i] == 'a') {
                salida.vector[i] = '1';
            } else if (salida.vector[i] == 'E' || salida.vector[i] == 'e') {
                salida.vector[i] = '2';
            } else if (salida.vector[i] == 'I' || salida.vector[i] == 'i') {
                salida.vector[i] = '3';
            } else if (salida.vector[i] == 'O' || salida.vector[i] == 'o') {
                salida.vector[i] = '4';
            } else if (salida.vector[i] == 'U' || salida.vector[i] == 'u') {
                salida.vector[i] = '5';
            }
        }
        int counterSpaces = 0;
        for (int i = 0; i < salida.cantidad; i++) {
            if(vector[i] == ' ') {
                counterSpaces++;
                for (int j = i; j < salida.cantidad; j++) {
                    temp = salida.vector[j];
                    salida.vector[j] = salida.vector[j + 1];
                    salida.vector[j + 1] = temp;
                }
            }
            cantidad -= counterSpaces;
        }
    }

};

int main(int argc, char *argv[]) {
	Coleccion test1;
	test1.agregarPalabra("Believe");
	cout << test1.toString();
	test1.convertirVerbo();
	cout << test1.toString();
	
	Coleccion test2;
	test2.agregarPalabra("Tie");
	cout << test2.toString();
	test2.convertirVerbo();
	cout << test2.toString();
	
	Coleccion test3;
	test3.agregarPalabra("Run");
	cout << test3.toString();
	test3.convertirVerbo();
	cout << test3.toString();
	
	Coleccion test4;
	test4.agregarPalabra("Empoly");
	cout << test4.toString();
	test4.convertirVerbo();
	cout << test4.toString();
	
	Coleccion test5;
	test5.agregarPalabra("acdgj");
	cout << test5.toString();
	test5.insertaOrdenado('b');
	cout << test5.toString();
	
	Coleccion test6;
	test6.agregarPalabra("Alicia Vargas");
	test6.toString();
	cout << "Ocurrencia de 'V': " << test6.ocurrencia('V') << endl;
	cout << "Caracter que mas se repite: " << test6.mayoritario() << endl;
	
	Coleccion test7;
	test6.cifrado(test7);
	cout << test7.toString();
	
    return 0;
}
