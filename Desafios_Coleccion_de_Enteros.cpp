// Soluciones Diego Quiros Artinano
#include <iostream>
#include <sstream>
using namespace std;

class NumerosEnteros {
private:
    int coleccion[50];
    int tamano;
    int cantidad;
public:
    // Desafio 3
    NumerosEnteros() {
        cantidad = 0;
        tamano = 50;
        for (int i = 0; i < tamano; i++) {
            coleccion[i] = 0;
        }
    }

    NumerosEnteros(int elTamano) {
        cantidad = 0;
        tamano = elTamano;
        for (int i = 0; i < tamano; i++) {
            coleccion[i] = 0;
        }
    }

    void agregarElemento(int number) {
        if (cantidad < tamano) {
            coleccion[cantidad] = number;
            cantidad++;
        }
    }

    void setNumber(int i, int number) {
        coleccion[i] = number;
    }

    int getNumber(int i) {
        return coleccion[i];
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

    ~NumerosEnteros() {
    }

    // Desafio 4
    string toString() {
        stringstream s;
        s << "| ";
        for (int i = 0; i < cantidad; i++) {
            s << coleccion[i] << " | ";
        }
        return s.str();
    }

    // Desafio 5
    bool cardinalidadPar() {
        return cantidad % 2 == 0;
    }

    // Desafio 6
    int suma() {
        int sum = 0;
        for (int i = 0; i < cantidad; i++) {
            sum += coleccion[i];
        }
        return sum;
    }

    // Desafio 7
    float promedio() {
        float average = 0;
        for (int i = 0; i < cantidad; i++) {
            average += coleccion[i];
        }
        average = average/(float)cantidad;
        return average;
    }

    // Desafio 8
    int sumaPosicionesPares() {
        int sum = 0;
        for (int i = 0; i < cantidad; i += 2) {
            sum += coleccion[i];
        }
        return sum;
    }

    // Desafio 8.1
    float promedioPosicionesImpares() {
        float average = 0;
        for (int i = 1; i < cantidad; i += 2) {
            average += coleccion[i];
        }
        average = average/(float)(cantidad/2);
        return average;
    }

    // Desafio 9
    int busca(int search) {
        int pos = -1;
		int i = 0;
        while(coleccion[i] != search && i < cantidad) {
			i++;
		}
		if(coleccion[i] == search) {
			pos = i;
		}
		return pos;
    }

    // Desafio 9.1
    int aparicionesDe(int search) {
        int times = 0;
        for (int i = 0; i < cantidad; i++) {
            if(coleccion[i] == search) {
                times++;
            }
        }
        return times;
    }

    // Desafio 10
    void intercambiaPosiciones(int pos1, int pos2) {
        if (pos1 != pos2) {
            int valor1 = coleccion[pos1];
            coleccion[pos1] = coleccion[pos2];
            coleccion[pos2] = valor1;
        }
    }

    // Desafio 11
    void eliminePosicion(int pos) {
        int veces = cantidad - pos;
        for (int i = 0; i < veces; i++) {
            coleccion[pos + i] = coleccion[pos + i + 1];
        }
        cantidad--;
    }

    // Desafio 11.1
    void elimine(int number) {
        int vecesAparece = 0;
        for (int i = 0, posSiguiente = i + 1; i < cantidad; i++, posSiguiente++) {
            if (coleccion[i] == number) {
                vecesAparece++;
                while (coleccion[posSiguiente] == number) {
                    posSiguiente++;
                }
                coleccion[i] = coleccion[posSiguiente];
            } else if (vecesAparece > 0) {
				if(coleccion[posSiguiente] != number) {
					coleccion[i] = coleccion[posSiguiente];
					posSiguiente++;
				}
			}
        }
        cantidad -= vecesAparece;
    }

    // Desafio 11.2
    void eliminarHasta(int pos) {
        for (int i = 0; i <= pos; i++) {
            coleccion[i] = coleccion[pos + i + 1];
        }
        cantidad -= (pos+1);
    }

    // Desafio 12
    void insertarElemento(int elem, int pos) {
        agregarElemento(elem);
		intercambiaPosiciones(pos, cantidad - 1);
        for (int i = pos + 2; i < cantidad; i++) {
            intercambiaPosiciones(pos + 1, i);
        }
    }

    // Desafio 13
    void invertir() {
        for (int i = 0; i < cantidad/2; i++) {
            intercambiaPosiciones(i, cantidad - (i + 1));
        }
    }

    // Desafio 14
    NumerosEnteros enPosicionesPar() {
        NumerosEnteros nuevo;
        for (int i = 0; i < cantidad; i += 2) {
			nuevo.agregarElemento(coleccion[i]);
        }
        return nuevo;
    }

    // Desafio 18.0
    void ordenamientoBurbujaDescendente() {
        bool cambio = true;
        for (int i = cantidad-1; i > 0 && cambio; i--) {
            cambio = false;
            for (int o = 0; o < i; o++) {
                if (coleccion[o] > coleccion[o + 1]) {
                    intercambiaPosiciones(o, o + 1);
                    cambio = true;
                }
            }
        }
    }

    // Desafio 18
    int posicionDelMayor(int inicial) {
        int posicionMayor = inicial;
        for (int i = inicial + 1; i < cantidad; i++) {
            if (coleccion[i] > coleccion[posicionMayor]) {
                posicionMayor = i;
            }
        }

        return posicionMayor;
    }

    int posicionDelMenor(int inicial) {
        int posicionMenor = inicial;
        for (int i = inicial + 1; i < cantidad; i++) {
            if (coleccion[i] < coleccion[posicionMenor]) {
                posicionMenor = i;
            }
        }

        return posicionMenor;
    }

    void ordenaElementos(int valorOrden) {
        switch(valorOrden) {
        case -1:
            for (int i = 0; i < cantidad - 1; i++) {
                intercambiaPosiciones(i, posicionDelMayor(i));
            }
            break;
        case 1:
            for (int i = 0; i < cantidad - 1; i++) {
                intercambiaPosiciones(i, posicionDelMenor(i));
            }
            break;
        default:
            break;
        }
    }

    // Desafio 19
    void insertaOrdenadoV1(int insNum) {
        agregarElemento(insNum);
        if (coleccion[0] < coleccion[cantidad - 1]) {
            ordenaElementos(1);
        } else {
            ordenaElementos(-1);
        }
    }

    // Desafio 20 
    int encuentraElementoEnArregloOrdenado(int elemento) {
        if(elemento >= coleccion[0] && elemento <= coleccion[cantidad - 1]) {
            for (int i = 0; i < cantidad && coleccion[i] <= elemento; i++) {
                if (coleccion[i] == elemento) {
                    return i;
                }
            }
        }
        return cantidad;
    }

    bool busquedaBinaria(int elemento) {
        int inicio = 0;
        int fin = cantidad - 1;
        int mitad;
        while (inicio <= fin) {
            mitad = (inicio + fin) / 2;
            if (elemento == coleccion[mitad]) {
                return true;
            }
            else {
                if (elemento > coleccion[mitad]) {
                    inicio = mitad + 1;
                } else {
                    fin = mitad - 1;
                }
            }
        }
        return false;
    }
    void insertaOrdenadoV2(int insNum) {
        int numeroMenos1 = insNum - 1;
        while(!busquedaBinaria(numeroMenos1) && insNum >= coleccion[0]) {
            numeroMenos1--;
        }
        if(coleccion[0] < coleccion[cantidad - 1]) {
            insertarElemento(insNum, encuentraElementoEnArregloOrdenado(numeroMenos1) + 1);
        } else {
            insertarElemento(insNum, encuentraElementoEnArregloOrdenado(numeroMenos1) - 2);
        }
    }

};

int main(int argc, char *argv[]) {
    NumerosEnteros test1;
    test1.agregarElemento(12);
    test1.agregarElemento(4);
    test1.agregarElemento(23);
    test1.agregarElemento(9);
    test1.agregarElemento(18);
    cout << test1.toString() << endl;

    cout << "CardinalidadPar(): " << test1.cardinalidadPar() << endl;
    test1.agregarElemento(23);
    cout << test1.toString() << endl;
    cout << "CardinalidadPar() (despues de sumarle 1): " << test1.cardinalidadPar() << endl;

    cout << "Suma de elementos: " << test1.suma() << endl;
    cout << "Promedio de elementos: " << test1.promedio() << endl;
    cout << "Suma de posiciones pares: " << test1.sumaPosicionesPares() << endl;
    cout << "Promedio de Posiciones Impares: " << test1.promedioPosicionesImpares() << endl;
    cout << "Buscar la primera posicion de '4': " << test1.busca(4) << endl;
    cout << "Buscar la primera posicion de '23': " << test1.busca(23) << endl;
    cout << "Buscar la primera posicion de '90': " << test1.busca(90) << endl;
    cout << "Veces que aparece 4: " << test1.aparicionesDe(4) << endl;
    cout << "Veces que aparece 23: " << test1.aparicionesDe(23) << endl;

    NumerosEnteros test2;
    test2.agregarElemento(2);
    test2.agregarElemento(5);
    test2.agregarElemento(6);
    test2.agregarElemento(4);
    test2.agregarElemento(7);
    test2.agregarElemento(9);
    cout << test2.toString() << endl;
    test2.intercambiaPosiciones(2, 5);
    cout << "Intercambio de posiciones 2 y 5: " << test2.toString() << endl;
    test2.intercambiaPosiciones(2, 5);
    test2.eliminePosicion(3);
    cout << "Despues de eliminar la posicion 3: " << test2.toString() << endl;

    NumerosEnteros test3;
    test3.agregarElemento(2);
    test3.agregarElemento(5);
    test3.agregarElemento(6);
    test3.agregarElemento(2);
    test3.agregarElemento(7);
    test3.agregarElemento(2);
    cout << test3.toString() << endl;
    test3.elimine(2);
    cout << "Despues de eliminar los 2: " << test3.toString() << endl;

    NumerosEnteros test4;
    test4.agregarElemento(2);
    test4.agregarElemento(5);
    test4.agregarElemento(6);
    test4.agregarElemento(4);
    test4.agregarElemento(7);
    test4.agregarElemento(9);
    cout << test4.toString() << endl;
    test4.eliminarHasta(2);
    cout << "Despues de eliminar hasta la posicion 2: " << test4.toString() << endl;

    NumerosEnteros test5;
    test5.agregarElemento(2);
    test5.agregarElemento(5);
    test5.agregarElemento(6);
    test5.agregarElemento(4);
    test5.agregarElemento(7);
    cout << test5.toString() << endl;
    test5.insertarElemento(3, 2);
    cout << "Despues de insertar 3 en la posicion 2: " << test5.toString() << endl;

    NumerosEnteros test6;
    test6.agregarElemento(2);
    test6.agregarElemento(5);
    test6.agregarElemento(6);
    test6.agregarElemento(4);
    test6.agregarElemento(7);
    test6.agregarElemento(9);
    cout << test6.toString() << endl;
    test6.invertir();
    cout << "Despues de invertir: " << test6.toString() << endl;
    
    test6.invertir();

    NumerosEnteros test7 = test6.enPosicionesPar();
    cout << "Vectores de solo las posiciones par: " << test7.toString() << endl;

    NumerosEnteros test8;
    test8.agregarElemento(5);
    test8.agregarElemento(3);
    test8.agregarElemento(5);
    test8.agregarElemento(2);
    test8.agregarElemento(9);
    test8.agregarElemento(4);
    cout << test8.toString() << endl;
    test8.ordenaElementos(1);
    cout << "Ordenados ascendientemente: " << test8.toString() << endl;
    test8.ordenaElementos(-1);
    cout << "Ordenados descendientemente: " << test8.toString() << endl;

    NumerosEnteros test9;
    test9.agregarElemento(3);
    test9.agregarElemento(6);
    test9.agregarElemento(9);
    test9.agregarElemento(5);
    test9.agregarElemento(2);
    cout << test9.toString() << endl;
    test9.ordenaElementos(1);
    cout << test9.toString() << endl;
    test9.insertaOrdenadoV1(4);
    cout << test9.toString() << endl;
	
	NumerosEnteros test10;
	test10.agregarElemento(3);
	test10.agregarElemento(6);
	test10.agregarElemento(9);
	test10.agregarElemento(5);
	test10.agregarElemento(2);
	cout << test10.toString() << endl;
	test10.ordenaElementos(-1);
    cout << test10.toString() << endl;
    test10.insertaOrdenadoV1(4);
    cout << test10.toString() << endl;

	NumerosEnteros test11;
	test11.agregarElemento(3);
	test11.agregarElemento(6);
	test11.agregarElemento(9);
	test11.agregarElemento(5);
	test11.agregarElemento(2);
	cout << test11.toString() << endl;
	test11.ordenaElementos(1);
	cout << test11.toString() << endl;
	test11.insertaOrdenadoV2(4);
	cout << test11.toString() << endl;

	NumerosEnteros test12;
	test12.agregarElemento(3);
	test12.agregarElemento(6);
	test12.agregarElemento(9);
	test12.agregarElemento(5);
	test12.agregarElemento(2);
	cout << test12.toString() << endl;
	test12.ordenaElementos(-1);
	cout << test12.toString() << endl;
	test12.insertaOrdenadoV2(4);
	cout << test12.toString() << endl;

    return 0;
}
