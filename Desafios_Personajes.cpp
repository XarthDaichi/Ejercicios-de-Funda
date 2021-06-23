// Soluciones Diego Quiros Artinano

#include <iostream>
#include <sstream>
using namespace std;

class Personaje {
private:
    string nombrePersonal;
    string poderes;
    string nombreSuperheroe;
    string raza;
    int edad;
public: 
    // Metodos constructores
    Personaje() {
        nombrePersonal = "";
        nombreSuperheroe = "";
        poderes = "";
        raza = "";
        edad = 0;
    }
    Personaje(string elNombrePersonal, string elNombreSuperheroe, string losPoderes, string laRaza, int laEdad) {
        nombrePersonal = elNombrePersonal;
        nombreSuperheroe = elNombreSuperheroe;
        poderes = losPoderes;
        raza = laRaza;
        edad = laEdad;
    }

    // Metodos set y get
    void setNombrePersonal(string elNombrePersonal) {
        nombrePersonal = elNombrePersonal;
    }
    string getNombre() {
        return nombrePersonal;
    }
    
    void setNombreSuperheroe(string elNombreSuperheroe) {
        nombreSuperheroe = elNombreSuperheroe;
    }
    string getNombreSuperheroe() {
        return nombreSuperheroe;
    }

    void setPoderes(string losPoderes) {
        poderes = losPoderes;
    }
    string getPoderes() {
        return poderes;
    }

    void setRaza(string laRaza) {
        raza = laRaza;
    }
    string getRaza() {
        return raza;
    }

    void setEdad(int laEdad) {
        edad = laEdad;
    }
    int getEdad() {
        return edad;
    }

    // Metodo destructor
    ~Personaje() {
    }
    
    // Metodo to string
    string toString() {
        stringstream s;
        s << "   Nombre del personajes: " << nombrePersonal << endl;
        s << "   Nombre del superheroe: " << nombreSuperheroe << endl;
        s << "   Poderes: " << poderes << endl;
        s << "   Raza: " << raza << endl;
        s << "   Edad: " << edad << endl;
        return s.str();
    }
};

class ColeccionPersonajes {
private:
    Personaje coleccion[40];
    int tamano;
    int cantidad;
public:

    // Metodos constructores
    ColeccionPersonajes() {
        cantidad = 0;
        tamano = 40;
        for(int i = 0; i < tamano; i++) {
            coleccion[i] = Personaje(); 
        }
    }
    ColeccionPersonajes(int elTamano) {
        cantidad = 0;
        tamano = elTamano;
        for(int i = 0; i < tamano; i++) {
            coleccion[i] = Personaje();
        }
    }

    // Metodo para agregar un personaje
    void agregarPersonaje(Personaje elemento) {
        if (cantidad < tamano) {
            coleccion[cantidad] = elemento;
            cantidad++;
        }
    }
    
    // Metodo set y get
    void setPersonaje(int i, Personaje elemento) {
        coleccion[i] = elemento;
    }
    Personaje getPersonaje(int i) {
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

    // Metodo destructor
    ~ColeccionPersonajes() {
    }

    string toString() {
        stringstream s;
        s << "Coleccion de personajes: " << endl;
        for(int i = 0; i < cantidad; i++) {
            s << "Personaje " << i+1 << ": " << endl;
            s << coleccion[i].toString() << endl;
        }
        return s.str();
    }
};

int main(int argc, char *argv[]) {
    string nombrePersonalPersonaje;
    string nombreSuperheroePersonaje;
    string poderesPersonaje;
    string razaPersonaje;
    int edadPersonaje;

    int tamanoDeseado;

    cout << "Cuantos Personajes desea ingresar: ";
    cin >> tamanoDeseado;
	
    ColeccionPersonajes test(tamanoDeseado);
	
    for(int i = 0; i < tamanoDeseado; i++) {
        cin.ignore();
        cout << "Ingrese el nombre personal del personaje: ";
        getline(cin, nombrePersonalPersonaje);
        cin.ignore();

        cout << "Ingrese el nombre de superheroe del personaje: ";
        getline(cin, nombreSuperheroePersonaje);
        cin.ignore();

        cout << "Ingrese los poderes del personaje: ";
        getline(cin, poderesPersonaje);
        cin.ignore();

        cout << "Ingrese la raza del personaje: ";
        getline(cin, razaPersonaje);
		
        cout << "Ingrese la edad del personaje: ";
        cin >> edadPersonaje;

        Personaje nuevoElem(nombrePersonalPersonaje, nombreSuperheroePersonaje, poderesPersonaje, razaPersonaje, edadPersonaje);
        test.agregarPersonaje(nuevoElem);
    }
	
	system("CLS");

    cout << test.toString() << endl;

    return 0;
}
