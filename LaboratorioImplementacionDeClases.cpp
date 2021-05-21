//Soluciones Jorge Duran, Gabriel Vega, Diego Quiros A.
#include <iostream>
#include <sstream>
using namespace std;


class Vehiculo {
    private:
        int placa;
        string modelo;
        int annio;
        float precio;
    public:

        //los metodos constructores
        Vehiculo(){
            placa = 0;
            modelo = "";
            annio = 0;
            precio = 0;
        }

        Vehiculo(int laPlaca, string elModelo, int elAnnio, float elPrecio) {
            placa = laPlaca;
            modelo = elModelo;
            annio = elAnnio;
            precio = elPrecio;
        }

        //Metodo de Mostrar() para mostrar todos los atributos de la clase
        string mostrar() {
            stringstream s;
            s << "Datos del Vehiculo:" << endl;
            s << "Placa: " << placa << endl;
            s << "Modelo: " << modelo << endl;
            s << "Annio: " << annio << endl;
            s << "Precio: " << precio << endl;
            return s.str();
        }

        //Hacer los get/sets, get es para ver el valor del atributo, set le asigna el valor al atributo
        int getPlaca() {
            return placa;
        }
        void setPlaca(int laPlaca) {
            placa = laPlaca;
        }

        string getModelo() {
            return modelo;
        }
        void setModelo(string elModelo) {
            modelo = elModelo;
        }

        int getAnnio() {
            return annio;
        }
        void setAnnio(int elAnnio) {
            annio = elAnnio;
        }

        float getPrecio() {
            return precio;
        }
        void setPrecio(float elPrecio) {
            precio = elPrecio;
        }

        //Metodo destructor
        ~Vehiculo() {
        }

        float derechoCirculacion() {
            float marchamo;
            if(annio == 2021) {
                marchamo = precio * 0.05;
            } else if(2021 - annio <= 10) {
                marchamo = precio * 0.03;
            } else {
                marchamo = (precio * 0.005)*(2021 - annio);
            }

            return marchamo;
        }

        string restriccion() {
            string dias;

            switch(placa % 10) {
            case 0:
                dias = "Viernes y Domingo";
                break;
            case 1:
                dias = "Lunes y Sabado";
                break;
            case 2:
                dias = "Lunes y Domingo";
                break;
            case 3:
                dias = "Martes y Sabado";
                break;
            case 4:
                dias = "Martes y Doming";
                break;
            case 5:
                dias = "Miercoles y Sabado";
                break;
            case 6:
                dias = "Miercoles y Domingo";
                break;
            case 7:
                dias = "Jueves y Sabado";
                break;
            case 8:
                dias = "Jueves y Domingo";
                break;
            case 9:
                dias = "Viernes y Sabado";
                break;
            }

            return dias;
        }

        string dobleNoCircula() {
            string dias;

            switch(placa % 10) {
            case 0:
                dias = "Miercoles, Viernes y Sabado";
                break;
            case 1:
                dias = "Martes, Jueves y Domingo";
                break;
            case 2:
                dias = "Martes, Jueves y Sabado";
                break;
            case 3:
                dias = "Lunes, Miercoles y Domingo";
                break;
            case 4:
                dias = "Lunes, Miercoles y Sabado";
                break;
            case 5:
                dias = "Lunes, Jueves y Domingo";
                break;
            case 6:
                dias = "Lunes, Martes, Jueves y Sabado";
                break;
            case 7:
                dias = "Martes, Viernes y Domingo";
                break;
            case 8:
                dias = "Viernes y Sabado";
                break;
            case 9:
                dias = "Miercoles, Viernes y Domingo";
                break;
            }

            return dias;
        }
};

class TrianguloRectangulo {
    private:
        int a;
        int b;
        int h;
    public:
        //Metodos constructores
        TrianguloRectangulo() {
            a = 0;
            b = 0;
            h = 0;
        }
        TrianguloRectangulo(int elCatetoA, int elCatetoB, int laHipotenusa) {
            a = elCatetoA;
            b = elCatetoB;
            h = laHipotenusa;
        }

        //Metodos mostrar()
        string mostrar() {
            stringstream s;
            s << "Medidas de los lados: " << endl;
            s << "Lado 1 (Cateto A): " << a << endl;
            s << "Lado 2 (Cateto B): " << b << endl;
            s << "Lado 3 (Hipotenusa): " << h << endl;
            return s.str();
        }

        //Metodos get/set
        int getA() {
            return a;
        }
        void setA(int elCatetoA) {
            a = elCatetoA;
        }

        int getB() {
            return b;
        }
        void setB(int elCatetoB) {
            b = elCatetoB;
        }

        int getH() {
            return h;
        }
        void setH(int laHipotenusa) {
            h = laHipotenusa;
        }

        bool esTriangulo() {
            bool desigualdadTriangular = true;
            if(a + b < h) {
                desigualdadTriangular = false;
            } else if(a + h < b) {
                desigualdadTriangular = false;
            } else if(b + h < a) {
                desigualdadTriangular = false;
            }

            return desigualdadTriangular;
        }

        bool equilatero() {
            return a == b && a == h;
        }

        bool isosceles() {
            return a == b || a == h || a == b;
        }

        bool escaleno() {
            return a != b && a != h && b != h;
        }

        bool trianguloRectangulo() {
            return (a * a) + (b * b) == (h * h);
        }

        float senoDeAlfa() {
            return (float)a/(float)h;
        }

        float cosenoDeAlfa() {
            return (float)b/(float)h;
        }

        float tangenteDeAlfa() {
            return (float)a/(float)b;
        }
};

string menu() {
    stringstream s;
    s << "Buneas!!!" << endl;
    s << "1. Vehiculo" << endl;
    s << "2. Triangulo Rectagulo" << endl;
    s << "Escriba el numero de la operacion que quiere realizar ";
    return s.str();
}

int main(int argc, char *argv[]) {
    int number1;
    int number2;
    int number3;
    float decimal1;
    string string1;

    int operacion;
    
    int deseo;
    bool continuar;
    do {
        system("CLS");
        cout << menu();
        cin >> operacion;
        system("CLS");
        switch(operacion) {
        case 1: {
            cout << "Ingrese el numero de la placa ";
            cin >> number1;
            if(!cin >> number1) {
                cin.ignore();
                cin.clear();
                cin.get();
                break;
            }

            cout << "Ingrese el modelo del vehiculo ";
            cin >> string1;

            cout << "Ingrese el annio de fabricacion ";
            cin >> number2;
            if(!cin >> number2) {
                cin.ignore();
                cin.clear();
                cin.get();
                break;
            }

            cout << "Ingrese el precio del vehiculo ";
            cin >> decimal1;

            Vehiculo ve (number1, string1, number2, decimal1);
			system("CLS");
            cout  << ve.mostrar() << endl;

            cout << "El marchamo del vehiculo es " << ve.derechoCirculacion() << endl;
            cout << "La restriccion del vehiculo es " << ve.restriccion() << endl;
            cout << "La Doble no circula del vehiculo es " << ve.dobleNoCircula() << endl;
            break;
		}

        case 2: {
            cout << "Ingrese la medida del primer lado ";
            cin >> number1;
            if(!cin >> number1) {
                cin.ignore();
                cin.clear();
                cin.get();
                break;
            }

            cout << "Ingrese la medida del segundo lado ";
            cin >> number2;
            if(!cin >> number2) {
                cin.ignore();
                cin.clear();
                cin.get();
                break;
            }

            cout << "Ingrese la medida del tercer lado ";
            cin >> number3;
            if(!cin >> number3) {
                cin.ignore();
                cin.clear();
                cin.get();
                break;
            }

            TrianguloRectangulo tri (number1, number2, number3);
			system("CLS");
            cout << tri.mostrar() << endl;

            if(tri.esTriangulo()) {
                cout << "Si es triangulo!!!" << endl;
            } else {
                cout << "No es triangulo!!!" << endl;
            }

            if(tri.equilatero()) {
                cout << "El triangulo es equilatero!!!" << endl;
            } else if(tri.isosceles()) {
                cout << "El triangulo es isosceles!!!" << endl;
            } else if(tri.escaleno()) {
                cout << "El triangulo es escaleno!!!" << endl;
            }

            if(tri.trianguloRectangulo()) {
                cout << "Si es triangulo rectangulo!!!" << endl;
                cout << "Sea Alfa el angulo entre el Cateto B y la Hipotenusa: " << endl;
                cout << "El seno es " << tri.senoDeAlfa() << endl;
                cout << "El coseno es " << tri.cosenoDeAlfa() << endl;
                cout << "La tangente es " << tri.tangenteDeAlfa() << endl;
            } else {
                cout << "No es triangulo rectangulo!!!" << endl;
            }
            break;
		}
        default:
            cout << "\nError: Digito ingresado incorrecto";
            if(!cin >> operacion) {
                cin.ignore();
                cin.clear();
                cin.get();
            }
            break;
        }
        cout << "\nDesea continuar? \nSi = 1 || No = 0: ";
        cin >> deseo;
        continuar = deseo == 1;
    } while(continuar);
    return 0;
}
