#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class Coleccion {
private:
    string nombre[40];
    int tamano;
    int cantidad;
public:
    Coleccion() {
        cantidad = 0;
        tamano = 40;
        for(int i = 0; i < tamano; i++) {
            nombre[i] = "";
        }
    }

    Coleccion(int n) {
        cantidad = 0;
        tamano = n;
        for(int i = 0; i < tamano; i++) {
            nombre[i] = "";
        }
    }

    void agregarElemento(string elem) {
        if (cantidad < tamano) {
            nombre[cantidad] = elem;
            cantidad += 1;
        }
    }

    string getNombre(int i) {
        return nombre[i];
    }

    void setNombre(int i, string n) {
        nombre[i] = n;
    }

    int getCantidad() {
        return cantidad;
    }

    void setCantidad(int laCantidad) {
        cantidad = laCantidad;
    }

    int getTamano() {
        return tamano;
    }

    void setTamano(int elTamano) {
        tamano = elTamano;
    }

    ~Coleccion() {
    }

    string toString(){
        stringstream s;
        s << "Nombres de la Coleccion: " << endl;
        for (int i = 0; i < cantidad; i++) {
            s << "Personaje " << i+1 << ": ";
            s << nombre[i] << endl;
        }
        return s.str();
    }

    string concatenaElementos() {
        string hilera = "| ";
        for(int i = 0; i < cantidad; i++) {
            hilera = hilera + nombre[i] + " | ";
        }
        return hilera;
    }

    string acrostico() {
        stringstream s;
        for (int i = 0; i < cantidad; i++) {
            switch(nombre[i].at(0)) {
            case 'A':
                s << "Antilope" << endl;
                break;
            case 'B':
                s << "Broken" << endl;
                break;
            case 'C':
                s << "Cannon" << endl;
                break;
            case 'D':
                s << "Doritos" << endl;
                break;
            case 'E':
                s << "Elipse" << endl;
                break;
            case 'F':
                s << "Farenheit" << endl;
                break;
            case 'G':
                s << "Grover" << endl;
                break;
            case 'H':
                s << "Heatrome" << endl;
                break;
            case 'I':
                s << "Ivory" << endl;
                break;
            case 'J':
                s << "Jormungandr" << endl;
                break;
            case 'K':
                s << "Kirito" << endl;
                break;
            case 'L':
                s << "Love" << endl;
                break;
            case 'M':
                s << "Machete" << endl;
                break;
            case 'N':
                s << "Nautica" << endl;
                break;
            case 'O':
                s << "Orpheus" << endl;
                break;
            case 'P':
                s << "Poseidon" << endl;
                break;
            case 'Q':
                s << "Quarantine" << endl;
                break;
            case 'R':
                s << "Rocket" << endl;
                break;
            case 'S':
                s << "Serpent" << endl;
                break;
            case 'T':
                s << "Treehouse" << endl;
                break;
            case 'U':
                s << "Uranium" << endl;
                break;
            case 'V':
                s << "Velvet" << endl;
                break;
            case 'W':
                s << "Words" << endl;
                break;
            case 'X':
                s << "Xilophone" << endl;
                break;
            case 'Y':
                s << "Yellow" << endl;
                break;
            case 'Z':
                s << "Zebra" << endl;
                break;
            }

            return s.str();
        }
    }

    string valorMayor() {
        string mayor = nombre[0];
        for (int i = 1; i < cantidad; i++) {
            if (nombre[i] > mayor) {
                mayor = nombre[i];
            }
        }
        return mayor;
    }

    string valorMenor() {
        string menor = nombre[0];
        for (int i = 1; i < cantidad; i++) {
            if (nombre[i] < menor) {
                menor = nombre[i];
            }
        }
        return menor;
    }

    int posicionMayor() {
        string mayor = nombre[0];
        int pMayor = 0;
        for (int i = 1; i < cantidad; i++) {
            if (nombre[i] > mayor) {
                mayor = nombre[i];
                pMayor = i;
            }
        }
        return pMayor;
    }

    int posicionMayorV1() {
        string mayor = nombre[0];
        int pMayor = 0;
        for (int i = 1; i < cantidad; i++) {
            if (nombre[i] > nombre[pMayor]) {
                pMayor = i;
            }
        }
        return pMayor;
    }

    int posicionMenor() {
        string menor = nombre[0];
        int pMenor = 0;
        for (int i = 1; i < cantidad; i++) {
            if (nombre[i] < menor) {
                menor = nombre[i];
                pMenor = i;
            }
        }
        return pMenor;
    }

    int posicionMenorV1() {
        int pMenor = 0;
        for(int i = 1; i < cantidad; i++) {
            if (nombre[i] < nombre[pMenor]) {
                pMenor = i;
            }
        }
        return pMenor;
    }

    void intercambioMayorConMenor() {
        int pMenor = posicionMenor();
        int pMayor = posicionMayor();
        string mayor = nombre[pMayor];
        nombre[pMayor] = nombre[pMenor];
        nombre[pMenor] = mayor;
    }

    void eliminarUltimo() {
        cantidad = cantidad - 1;
    }

    void agregarUltimo() {
        cantidad = cantidad + 1;
    }
};

int main(int argc, char *argv[]) {

    cout << "Cantidad maxima de personajes que quieres registrar de Avengers: ";
    int n;
    cin >> n;
    Coleccion avengers(n);
    avengers.agregarElemento("Thanatos");
    avengers.agregarElemento("Iron Man");
    avengers.agregarElemento("Captain America");
    avengers.agregarElemento("Thor");
    cout << avengers.getNombre(1) << endl;
    avengers.setNombre(2, "Tio Conejo");
    cout << avengers.getNombre(2) << endl;
    avengers.setNombre(2, "Captain America");

    cout << avengers.toString();
    cout << avengers.concatenaElementos() << endl;
    cout << "Mayor: [" << avengers.posicionMayor() << "] ";
    cout << avengers.valorMayor() << endl;
  /*cout << "Menor: [" << avengers.posicionMenor() << "] ";
    cout << avengers.valorMenor();*/
    int pMenor = avengers.posicionMenor();
    cout << "Menor: [" << pMenor << "] ";
    cout << avengers.getNombre(pMenor) << endl;
    avengers.intercambioMayorConMenor();
    cout << avengers.concatenaElementos() << endl;
    avengers.intercambioMayorConMenor();
    cout << avengers.concatenaElementos() << endl;
    avengers.eliminarUltimo();
    cout << "Cantidad: " << avengers.getCantidad() << endl;
    cout << avengers.toString();
    avengers.agregarUltimo();
    cout << "Cantidad: " << avengers.getCantidad() << endl;
    cout << avengers.toString();

    string nombre;
    for (int i = 0; i < n; i++) {
        if(i <= 3) {
            cin >> nombre;
            avengers.setNombre(i, nombre);
        } else {
            cin >> nombre;
            avengers.agregarElemento(nombre);
        }
    }

    cout << "La cantidad de personajes es: " << n << endl;
    cout << avengers.toString();

    cout << "Cantidad maxima de personajes que quieres registrar de Star Wars: ";
    cin >> n;
    Coleccion ascensoSkywalker(n);
    for (int i = 0; i < n; i++) {
        cin >> nombre;
        ascensoSkywalker.agregarElemento(nombre);
    }

    cout << ascensoSkywalker.toString();

    return 0;
}
