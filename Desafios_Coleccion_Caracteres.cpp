// Soluciones Diego Qurios Artinano

#include <iostream>
#include <sstream>
using namespace std;


class ColeccionCaracteres {
private:
    char characters[100];
    int cantidadChars;
    int tamanoVector;
public:
    /* Deasfio 13
    Defina una clase Coleccion que represente una frase como un arreglo o vector de caracteres.

        Defina los atributos de la clase.
        Escriba todos los metodos basicos de la clase;
            Constructores (con y sin parametros),
            Destructor,
            Metodos de acceso (get)
            Metodos de modificacion (set)

        y el metodo toString() para mostrar la frase.
    */

    // Metodos constructores
    ColeccionCaracteres() {
        cantidadChars = 0;
        tamanoVector = 40;
        for (int i = 0; i < tamanoVector; i++) {
            characters[i] = ' ';
        }
    }
    ColeccionCaracteres(int n) {
        cantidadChars = 0;
        tamanoVector = n;
        for (int i = 0; i < tamanoVector; i++) {
            characters[i] = ' ';
        }
    }

    // Metodos Set y Get

    void agregarCaracteres(char ch) {
        if (cantidadChars < tamanoVector) {
            characters[cantidadChars] = ch;
            cantidadChars++;
        }
    }

    void setCharacter(int i, char ch) {
        characters[i] = ch;
    }
    char getCharacter(int i) {
        return characters[i];
    }

    void setTamano(int elTamano) {
        tamanoVector = elTamano;
    }
    int getTamano() {
        return tamanoVector;
    }

    void setCantidad(int laCantidad) {
        cantidadChars = laCantidad;
    }
    int getCantidad() {
        return cantidadChars;
    }

    // Metodo Destructor
    ~ColeccionCaracteres() {
    }

    // Metodo toString()
    string toString() {
        stringstream s;
        s << "La frase es: " << endl;
        for (int i = 0; i < cantidadChars; i++) {
            s << characters[i];
        }
        return s.str();
    }

    /* Desafio 14
    En la clase Coleccion de caracteres escriba un metodo
    almacenaFrase() que reciba como parametro una hilera o string y
    la almacene en la frase de la Coleccion. */

    void almacenaFrase(string frase) {
        cantidadChars = frase.length();
        for (int i = 0; i < cantidadChars; i++) {
            characters[i] = frase.at(i);
        }
    }

    /* Desafio 15
    En la clase Coleccion de caracteres escriba un metodo
    aparicionesDe() que reciba omo parametro una letra y cuente y devuelva
    la cantidad de veces que aparece la letra en la frase. */

    int aparicionesDe(char buscar) {
        int counter = 0;
        for (int i = 0; i < cantidadChars; i++) {
            if (characters[i] == buscar) {
                counter++;
            }
        }
        return counter;
    }

    /* Desafio 16
    En la clase Coleccion de caracteres escriba un metodo
    cantidadPalabras() que cuente y devuelva la cantidad de palaras que
    contiene la frase. Se asume que las palabras de la frase estan separadas
    por un unico espacio en blanco. */
    int cantidadPalabras() {
        return aparicionesDe(' ') + 1;
    }

    /* Desafio 16.1
    En la clase Coleccion de caracteres escriba un metodo
    listaPalabras() que devuelva una hilera que permita mostrar cada una de las palabras
    que contiene la frase, en lineas separadas. Se asume que las palabras de la frase estan
    separadas por un unico espacio en blanco. */

    string listaPalabras() {
        stringstream palabras;
        for (int i = 0; i < cantidadChars; i++) {
            palabras << characters[i];
            if(characters[i] == ' ') {
                palabras << endl;
            }
        }
        return palabras.str();
    }

    /* Desafio 16.2
    En la Coleccion de caracteres escriba otra version del metodo cantidadPalabras() que
    cuente y devuelva la cantidad de palabras que contiene la frase, considerando que
    pueden haber varios caracteres espacio en blanco antes o despues de cada palabra de la frase. */
    int cantidadPalabrasV2() {
        int counter = 0;
        if (characters[0] != ' ') {
            counter++;
        }
        char lastChar = characters[0];
        for(int i = 1; i < cantidadChars; i++) {
            if (characters[i] != ' ' && lastChar == ' ') {
                counter++;
            }
            lastChar = characters[i];
        }
        return counter;
    }

    /* Desafio 17
    En la clase Coleccion de caracteres defina un metodo codifica() que
    codifique la frase, sustituyendo cada vocal de las palabras por el caracter del numero
    correspondiente, de acuerdo con la siguiente tabla. El metodo debe devolver como 
    parametro una Coleccion de Caracteres con la frase codifica. 

    Vocal | Codigo
      a   |   1
      e   |   2
      i   |   3
      o   |   4
      u   |   5 */

    ColeccionCaracteres codifica() {
        ColeccionCaracteres nueva;
        for(int i = 0; i < cantidadChars; i++) {
            switch(characters[i]) {
            case 'a':
                nueva.agregarCaracteres('1');
                break;
            case 'A':
                nueva.agregarCaracteres('1');
                break;
            case 'e':
                nueva.agregarCaracteres('2');
                break;
            case 'E':
                nueva.agregarCaracteres('2');
                break;
            case 'i':
                nueva.agregarCaracteres('3');
                break;
            case 'I':
                nueva.agregarCaracteres('3');
                break;
            case 'o':
                nueva.agregarCaracteres('4');
                break;
            case 'O':
                nueva.agregarCaracteres('4');
                break;
            case 'u':
                nueva.agregarCaracteres('5');
                break;
            case 'U':
                nueva.agregarCaracteres('5');
                break;
            default:
                nueva.agregarCaracteres(characters[i]);
                break;
            }
        }
        return nueva;
    }

    /* Desafio 17.1
    En la clase Coleccion de caracteres defina un metodo que
    codifique la frase, sustituyendo cada letra de las palabras por los
    caracteres del numero correspondiente, de acuerdo con la siguiente
    tabla:

    Vocal | Codigo
      a   |   0
      b   |   1
      c   |   2
     ...  |  ...
      z   |   26 */
    
    ColeccionCaracteres codificaFrase() {
        ColeccionCaracteres nueva;
        for (int i = 0; i < cantidadChars; i++) {
            if (characters[i] == 'a' || characters[i] == 'A') {
                nueva.agregarCaracteres('1');
            } else if (characters[i] == 'b' || characters[i] == 'B') {
                nueva.agregarCaracteres('2');
            } else if (characters[i] == 'c' || characters[i] == 'C') {
                nueva.agregarCaracteres('3');
            } else if (characters[i] == 'd' || characters[i] == 'D') {
                nueva.agregarCaracteres('4');
            } else if (characters[i] == 'e' || characters[i] == 'E') {
                nueva.agregarCaracteres('5');
            } else if (characters[i] == 'f' || characters[i] == 'F') {
                nueva.agregarCaracteres('6');
            } else if (characters[i] == 'g' || characters[i] == 'G') {
                nueva.agregarCaracteres('7');
            } else if (characters[i] == 'h' || characters[i] == 'H') {
                nueva.agregarCaracteres('8');
            } else if (characters[i] == 'i' || characters[i] == 'I') {
                nueva.agregarCaracteres('9');
            } else if (characters[i] == 'j' || characters[i] == 'J') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('0');
            } else if (characters[i] == 'k' || characters[i] == 'K') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('1');
            } else if (characters[i] == 'l' || characters[i] == 'L') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('2');
            } else if (characters[i] == 'm' || characters[i] == 'M') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('3');
            } else if (characters[i] == 'n' || characters[i] == 'N') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('4');
            } else if (characters[i] == 'o' || characters[i] == 'O') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('5');
            } else if (characters[i] == 'p' || characters[i] == 'P') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('6');
            } else if (characters[i] == 'q' || characters[i] == 'Q') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('7');
            } else if (characters[i] == 'r' || characters[i] == 'R') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('8');
            } else if (characters[i] == 's' || characters[i] == 'S') {
                nueva.agregarCaracteres('1');
                nueva.agregarCaracteres('9');
            } else if (characters[i] == 't' || characters[i] == 'T') {
                nueva.agregarCaracteres('2');
                nueva.agregarCaracteres('0');
            } else if (characters[i] == 'u' || characters[i] == 'U') {
                nueva.agregarCaracteres('2');
                nueva.agregarCaracteres('1');
            } else if (characters[i] == 'v' || characters[i] == 'V') {
                nueva.agregarCaracteres('2');
                nueva.agregarCaracteres('2');
            } else if (characters[i] == 'w' || characters[i] == 'W') {
                nueva.agregarCaracteres('2');
                nueva.agregarCaracteres('3');
            } else if (characters[i] == 'x' || characters[i] == 'X') {
                nueva.agregarCaracteres('2');
                nueva.agregarCaracteres('4');
            } else if (characters[i] == 'y' || characters[i] == 'Y') {
                nueva.agregarCaracteres('2');
                nueva.agregarCaracteres('5');
            } else if (characters[i] == 'z' || characters[i] == 'Z') {
                nueva.agregarCaracteres('2');
                nueva.agregarCaracteres('6');
            }
        }
        return nueva;
    }
};

int main(int argc, char *argv[]) {
    string test = "Tres tristes tigres tragaron trigo en un trigal";
	string test1 = "  Tres  tristes   tigres tragaron    trigo en un  trigal";
	
	ColeccionCaracteres coleccion(test.length());
	
	coleccion.almacenaFrase(test); 
	cout << coleccion.toString() << endl; // Probando Desafio 14
	
	cout << "La cantidad de veces que aparece la t es: " << coleccion.aparicionesDe('t') << endl; //Probando Desafio 15
	cout << "La cantidad de palabras es: " << coleccion.cantidadPalabras() << endl; // Probando Desafio 16
	cout << "Las palabras son: \n" << coleccion.listaPalabras() << endl; //Probando Desafio 16.1
	
	ColeccionCaracteres coleccion1(test1.length());
	coleccion1.almacenaFrase(test1);
	cout << coleccion1.toString() << endl;
	cout << "La cantidad de palabras es: " << coleccion1.cantidadPalabrasV2() << endl; // Probando Desafio 16.2
	
	ColeccionCaracteres coleccion2 = coleccion.codifica();
	cout << coleccion2.toString() << endl; // Probando Desafio 17
	
	ColeccionCaracteres coleccion3 = coleccion.codificaFrase();
	cout << coleccion3.toString() << endl; // Probando Desafio 17.1
	return 0;
}
