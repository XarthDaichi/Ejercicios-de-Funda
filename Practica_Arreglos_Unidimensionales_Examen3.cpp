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

    void plural() {
        if (characters[cantidadChars - 1] == 'z') {
            characters[cantidadChars - 1] = 'c';
            agregarCaracteres('e');
            agregarCaracteres('s');
        } else if (characters[cantidadChars - 1] == 'Z') {
            characters[cantidadChars - 1] = 'C';
            agregarCaracteres('E');
            agregarCaracteres('S');
        } else if (characters[cantidadChars - 1] == 'a' || characters[cantidadChars - 1] == 'e' || characters[cantidadChars - 1] == 'i' || characters[cantidadChars - 1] == 'o' || characters[cantidadChars - 1] == 'u') {
            agregarCaracteres('s');
        } else if(characters[cantidadChars - 1] == 'A' || characters[cantidadChars - 1] == 'E' || characters[cantidadChars - 1] == 'I' || characters[cantidadChars - 1] == 'O' || characters[cantidadChars - 1] == 'U') {
            agregarCaracteres('S');
        } else {
            agregarCaracteres('e');
            agregarCaracteres('s');
        }
    }       
};

class ColeccionBacterias {
    private:
    int vector[250];
    int tamano;
    int cantidad;
public:
    ColeccionBacterias() {
        cantidad = 0;
        tamano = 250;
        for(int i = 0; i < tamano; i++) {
            vector[i] = 0;
        }
    }
    ColeccionBacterias(int elTamano) {
        cantidad = 0;
        tamano = elTamano;
        for (int i = 0; i < tamano; i++) {
            vector[i] = 0;
        }
    }
    ~ColeccionBacterias(){
    }

    void agregarelemento(int numero) {
        if(cantidad < tamano) {
            vector[cantidad] = numero;
            cantidad++;
        }
    }

    float mayorCrecimientoPromedio() {
        float elMayor = 0;
        int counter = 1;
        int suma = vector[0];
		bool noAcabaSacarPromedio = true;
        for (int i = 1; i < cantidad; i++) {
            if(vector[i] < vector[i - 1] && noAcabaSacarPromedio) {
				if(elMayor < (float)suma/(float)counter) {
                    elMayor = (float)suma/(float)counter;
                }
				counter = 0;
				suma = 0;
				noAcabaSacarPromedio = false;
            } else {
                suma += vector[i];
                counter++;
				noAcabaSacarPromedio = true;
            }
        }
		return elMayor;
    }
};

// Ejercicio 2
class ColeccionEjercicio3 {
private:
    int vector[250];
    int tamano;
    int cantidad;
public:
    ColeccionEjercicio3() {
        cantidad = 0;
        tamano = 250;
        for (int i = 0; i < cantidad; i++) {
            vector[i] = 0;
        }
    }
    ColeccionEjercicio3(int elTamano) {
        cantidad = 0;
        tamano = elTamano;
        for (int i = 0; i < cantidad; i++) {
            vector[i] = 0;
        }
    }
    void agregarElemento(int elemento){
        if (cantidad < tamano) {
            vector[cantidad] = elemento;
            cantidad++;
        }
    }
    int maximoValor() {
        int elMayor = vector[0];
        for (int i = 1; i < cantidad; i++) {
            if(elMayor < vector[i]) {
                elMayor = vector[i];
            }
        }
        return elMayor;
    }
    int minimoValor() {
        int elMenor = vector[0];
        for (int i = 1; i < cantidad; i++) {
            if(vector[i] < elMenor) {
                elMenor = vector[i];
            }
        }
        return elMenor;
    }
    bool contieneSecuencia(ColeccionEjercicio3 obj2, int &posstart, int &posend) {
        bool contiene;
		int posEvaluando = 0;
        for(int i = 0; i < cantidad && posEvaluando < obj2.cantidad; i++) {
            if (vector[i] == obj2.vector[posEvaluando]) {
                if(posEvaluando == 0) {
                    posstart = i;
                } else if (posEvaluando == (obj2.cantidad - 1)) {
                    posend = i;
                }
                contiene = true;
                posEvaluando++;
            } else {
                contiene = false;
                posEvaluando = 0;
                posstart = -1;
                posend = -1;
            }
        }
        if (posEvaluando != (obj2.cantidad)){
            posstart = -1;
        }
        return contiene;
    }
};

// Ejercicio 4
class ColeccionEjercicio4 {
private:	
	int vector[250];
	int tamano;
	int cantidad;
public:
	ColeccionEjercicio4() {
		cantidad = 0;
		tamano = 250;
		for (int i = 0; i < cantidad; i++) {
			vector[i] = 0;
		}
	}
	ColeccionEjercicio4(int elTamano) {
		cantidad = 0;
		tamano = elTamano;
		for (int i = 0; i < cantidad; i++) {
			vector[i] = 0;
		}
	}
	void agregarElemento(int elemento){
		if (cantidad < tamano) {
			vector[cantidad] = elemento;
			cantidad++;
		}
	}
		
	int repetidos() {
		int genteRepetida = 0;
        int vecesquitaNumero = 0;
        for (int i = 0; i < cantidad; i++) {
            for (int j = i + 1; j < cantidad; j++) {
                if (vector[i] == vector [j]) {
                    vector[j] = -1;
                    if(vecesquitaNumero == 0) {
                        genteRepetida++;
                    }
                    vecesquitaNumero++;
                }
            }
            vecesquitaNumero = 0;
        }
        return genteRepetida;
	}

    string toString() {
        stringstream s;
        s << "Vector: " << endl;
        for (int i = 0; i < cantidad; i++) {
            s << "|" << vector[i];
        }
        s << "|";
        return s.str();
    }
};

// Ejercicio 5
class Grupo {
private: 
    int NRC;
    float vector[60];
    int tamano;
    int cantidad;
public:
    Grupo() {
        int NRC = 0;
        int cantidad = 0;
        int tamano = 60;
        for (int i = 0; i < tamano; i++) {
            vector[i] = 0;
        }
    }
    Grupo(int elNRC, int elTamano) {
        int NRC = elNRC;
        int cantidad = 0;
        int tamano = elTamano;
        for (int i = 0; i < tamano; i++) {
            vector[i] = 0;
        }
    }

    void setNRC(int elNRC) {
        NRC = elNRC;
    }
    int getNRC() {
        return NRC;
    }
    void setCantidad(int laCantidad) {
        cantidad = laCantidad;
    }
    int getCantidad() {
        return cantidad;
    }
    void setTamano(int elTamano) {
        tamano = elTamano;
    }
    int getTamano() {
        return tamano;
    }

    void agregarNota(float laNota) {
        if(cantidad < tamano) {
            vector[cantidad] = laNota;
			cantidad++;
        }
    }

    string toString() {
        stringstream s;
        s << "El Grupo: " << endl;
        for (int i = 0; i < cantidad; i++) {
            s << "|" << vector[i];
        }
        s << "|" << endl;
        return s.str();
    }

    void normaliceNotas() {
        for (int i = 0; i < cantidad; i++) {
            if(vector[i] == 0.0) {
                vector[i] = 1.0;
            }
        }
    }
    void insertaOrdenado(float notaIngresada) {
        agregarNota(notaIngresada);
        int temp;
        for (int i = 0; i < cantidad; i++) {
            if (notaIngresada < vector[i]){
                temp = vector[i];
                vector[i] = vector[cantidad - 1];
                vector[cantidad - 1] = temp;
            }
        }
    }
    float notaMayor() {
        return vector[cantidad - 1];
    }
    int aprobados(){
        int cantidadEstudiantes = 0;
        for (int i = 0; i < cantidad; i++) {
            if(7.0 <= vector[i]) {
                cantidadEstudiantes++;
            }
        }
        return cantidadEstudiantes;
    }
    bool buscarEficiente(int element) {
        int start = 0;
        int end = cantidad - 1;
        int half;
        while (start <= end) {
            half = (start + end) / 2;
            if (element == vector[half]) {
                return true;
            } else if (element > vector[half]) {
                start = half + 1;
            } else {
                end = half - 1;
            }
        }
        return false;
    }
    void uneGrupo(Grupo grupob, Grupo &grupoTotal) {
        int a = 0;
        int b = 0;
        while(a < cantidad && b < grupob.cantidad) {
            if(vector[a] > grupob.vector[b]) {
                grupoTotal.agregarNota(grupob.vector[b]);
                b++;
            } else {
                grupoTotal.agregarNota(vector[a]);
                a++;
            }
        }
    }
};

// Ejercicio 6
class ColeccionEjercicio6{
private:	
	float vector[250];
	int tamano;
	int cantidad;
public:
	ColeccionEjercicio6() {
		cantidad = 0;
		tamano = 250;
		for (int i = 0; i < cantidad; i++) {
			vector[i] = 0;
		}
	}
	ColeccionEjercicio6(int elTamano) {
		cantidad = 0;
		tamano = elTamano;
		for (int i = 0; i < cantidad; i++) {
			vector[i] = 0;
		}
	}
	void agregarElemento(float elemento){
		if (cantidad < tamano) {
			vector[cantidad] = elemento;
			cantidad++;
		}
	}
	void setCantidad(int laCantidad) {
        cantidad = laCantidad;
    }
    int getCantidad() {
        return cantidad;
    }
    void setTamano(int elTamano) {
        tamano = elTamano;
    }
    int getTamano() {
        return tamano;
    }
    ~ColeccionEjercicio6(){
    }

    float montoAjusSalMin(float salMin) {
        float suma = 0;
        for (int i = 0; i < cantidad; i++) {
            if(vector[i] < salMin) {
                suma += salMin - vector[i];
            }
        }
        return suma;
    }
    void ajusteSalMin(float salMin) {
        for(int i = 0; i < cantidad; i++) {
            if(vector[i] < salMin) {
                vector[i] = salMin;
            }
        }
    }
    float calculoCotizacion() {
        float cotizacion = 0;
        for (int i = 0; i < cantidad; i++) {
            cotizacion += vector[i] * (5.5/100.0);
            cotizacion += vector[i] * (2.67/100.0);
            cotizacion += vector[i] * (1.0/100.0);
        }
        return cotizacion;
    }
    bool deterSituacionFinanciera(float capital, float salMin) {
        if (montoAjusSalMin(salMin) + calculoCotizacion() < capital) {
            return true;
        }
        return false;
    }
};

	

int main(int argc, char *argv[]) {
    // Tset Ejercicio 1
	ColeccionCaracteres testCharacters1;
	ColeccionCaracteres testCharacters2;
	ColeccionCaracteres testCharacters3;
	string test1 = "raiz";
	string test2 = "azul";
	string test3 = "plaza";
	testCharacters1.almacenaFrase(test1);
	testCharacters2.almacenaFrase(test2);
	testCharacters3.almacenaFrase(test3);
    testCharacters1.plural();
    testCharacters2.plural();
    testCharacters3.plural();
	cout << testCharacters1.toString()  << endl;
	cout << testCharacters2.toString() << endl;
	cout << testCharacters3.toString() << endl;
    cout << endl;
	
	// Test Ejercicio 2
	ColeccionBacterias testBacterias;
	testBacterias.agregarelemento(3);
	testBacterias.agregarelemento(6);
	testBacterias.agregarelemento(8);
	testBacterias.agregarelemento(2);
	testBacterias.agregarelemento(1);
	testBacterias.agregarelemento(5);
	testBacterias.agregarelemento(15);
	testBacterias.agregarelemento(17);
	testBacterias.agregarelemento(3);
	testBacterias.agregarelemento(1);
	testBacterias.agregarelemento(2);
	testBacterias.agregarelemento(7);
	testBacterias.agregarelemento(4);
	testBacterias.agregarelemento(15);
	testBacterias.agregarelemento(16);
	testBacterias.agregarelemento(23);
	testBacterias.agregarelemento(25);
	testBacterias.agregarelemento(6);
	testBacterias.agregarelemento(8);
	testBacterias.agregarelemento(8);
	testBacterias.agregarelemento(1);
	testBacterias.agregarelemento(7);
	testBacterias.agregarelemento(3);
	testBacterias.agregarelemento(-1);
	stringstream s;
	s << testBacterias.mayorCrecimientoPromedio();
	cout << s.str() << endl;
    cout << endl;
	
	// Test Ejercicio 3
	ColeccionEjercicio3 testE31;
    ColeccionEjercicio3 testE32;
    ColeccionEjercicio3 testSecuencia;
    int posstart;
    int posend;
    testE31.agregarElemento(5);
	testE31.agregarElemento(5);
	testE31.agregarElemento(1);
	testE31.agregarElemento(2);
	testE31.agregarElemento(3);
	testE31.agregarElemento(10);
	testE31.agregarElemento(23);
	testE31.agregarElemento(4);
    testE31.agregarElemento(5);
	testE31.agregarElemento(6);
    testE31.agregarElemento(4);
	
    testE32.agregarElemento(5);
	testE32.agregarElemento(5);
	testE32.agregarElemento(1);
	testE32.agregarElemento(2);
	testE32.agregarElemento(6);
	testE32.agregarElemento(10);
	testE32.agregarElemento(23);
	testE32.agregarElemento(4);
    testE32.agregarElemento(5);
	testE32.agregarElemento(6);
    testE32.agregarElemento(4);

    testSecuencia.agregarElemento(1);
    testSecuencia.agregarElemento(2);
    testSecuencia.agregarElemento(3);
    testSecuencia.agregarElemento(10);
    cout << testE31.maximoValor() << endl;
    cout << testE31.minimoValor() << endl;
    cout << testE31.contieneSecuencia(testSecuencia, posstart, posend) << endl;
    cout << posstart << endl;
    cout << posend << endl;
    cout << testE32.contieneSecuencia(testSecuencia, posstart, posend) << endl;
    cout << posstart << endl;
    cout << posend << endl;
    cout << endl;
	
	// Test Ejercicio 4
	ColeccionEjercicio4 testConcurso;
    testConcurso.agregarElemento(11111);
    testConcurso.agregarElemento(81891);
    testConcurso.agregarElemento(31111);
    testConcurso.agregarElemento(11111);
    testConcurso.agregarElemento(11911);
    testConcurso.agregarElemento(77777);
    testConcurso.agregarElemento(66669);
    testConcurso.agregarElemento(11111);
    testConcurso.agregarElemento(31111);
    testConcurso.agregarElemento(51115);
    cout << testConcurso.toString();
    int genteRepetida = testConcurso.repetidos();
    cout << testConcurso.toString();
	cout << "Gente Repetida " << genteRepetida << endl;
    cout << endl;
    
	//Test Ejercicio 5
	Grupo grupo1;
    Grupo grupo2;
    Grupo grupoab;
    grupo1.agregarNota(1.0);
    grupo1.agregarNota(1.5);
    grupo1.agregarNota(5.0);
    grupo1.agregarNota(6.25);
    grupo1.agregarNota(7.5);
    grupo1.agregarNota(8.0);
    cout << grupo1.toString();
    cout << grupo1.aprobados() << endl;
    cout << grupo1.notaMayor() << endl;

    grupo2.agregarNota(3.75);
    grupo2.agregarNota(4.5);
    grupo2.agregarNota(5.25);
    grupo2.agregarNota(5.25);
    grupo2.agregarNota(9.5);
    grupo2.agregarNota(9.5);
    grupo2.agregarNota(10.0);
    cout << grupo2.toString();
    cout << grupo2.aprobados() << endl;
    cout << grupo2.notaMayor() << endl;

    grupo1.uneGrupo(grupo2, grupoab);
    cout << grupoab.toString();
    cout << grupoab.aprobados() << endl;
    cout << grupoab.notaMayor() << endl;

	//Test Ejercicio 6
    
	return 0;
}
