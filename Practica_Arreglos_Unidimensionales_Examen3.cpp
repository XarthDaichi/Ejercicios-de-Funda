// Diego Quiros Artinano

#include <iostream>
#include <sstream>
using namespace std;

/* EJERCICIO No. 1 En la clase COleccion de Caracteres, suponga que un objeto
de la clase Coleccion representa una palabra en Espanol. Escriba un metodo plural que cambie la
palabra por su forma plural. Ejemplos,

|R|A|I|Z| | |       |R|A|I|C|E|S|
|A|Z|U|L| | |       |A|Z|U|L|E|S|
|P|L|A|Z|A| |       |P|L|A|Z|A|S| */
class ColeccionCaracteres {
private:
    char characters[100];
    int cantidadChars;
    int tamanoVector;
public:
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

    void almacenaFrase(string frase) {
        cantidadChars = frase.length();
        for (int i = 0; i < cantidadChars; i++) {
            characters[i] = frase.at(i);
        }
    }

    int aparicionesDe(char buscar) {
        int counter = 0;
        for (int i = 0; i < cantidadChars; i++) {
            if (characters[i] == buscar) {
                counter++;
            }
        }
        return counter;
    }

    int cantidadPalabras() {
        return aparicionesDe(' ') + 1;
    }

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
    return 0;
}