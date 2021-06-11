/* Programador: Diego Quiros Arti�ano
   Fecha: 10/06/2021
   Objetivo del programa: Calcular y generar la factura
   de un negocio usando la programacion orientada a objetos.
*/
#include <iostream>
#include <sstream>
using namespace std;

class Pedido {
private:
    string nombre;
    int numeroOrden;
    int hora;
    int minutos;
    int cantidadDeTacos;
    string direccion;
    int kilometros;    
public:
    // Metodos Constructores
    Pedido() {
        nombre = "";
        numeroOrden = 0;
        hora = 0;
        minutos = 0;
        cantidadDeTacos = 0;
        direccion = "";
        kilometros = 0;
    }

    Pedido(string elNombre, int elNumeroOrden, int laHora, int losMinutos, int laCantidadDeTacos, string laDireccion, int losKilometros) {
        nombre = elNombre;
        numeroOrden = elNumeroOrden;
        hora = laHora;
        minutos = losMinutos;
        cantidadDeTacos = laCantidadDeTacos;
        direccion = laDireccion;
        kilometros = losKilometros;
    }
    
    // Metodos Get/Set
    void setNombre(string elNombre) {
        nombre = elNombre;
    }

    string getNombre() {
        return nombre;
    }

    void setNumeroOrden(int elNumeroOrden) {
        numeroOrden = elNumeroOrden;
    }

    int getNumeroOrden() {
        return numeroOrden;
    }

    void setHora(int laHora) {
        hora = laHora;
    }

    int getHora() {
        return hora;
    }

    void setMinutos(int losMinutos) {
        minutos = losMinutos;
    }

    int getMinutos() {
        return minutos;
    }

    void setCantidadDeTacos(int laCantidadDeTacos) {
        cantidadDeTacos = laCantidadDeTacos;
    }

    int getCantidadDeTacos() {
        return cantidadDeTacos;
    }

    void setDireccion(string laDireccion) {
        direccion = laDireccion;
    }

    string getDireccion() {
        return direccion;
    }

    void setKilometros(int losKilometros) {
        kilometros = losKilometros;
    }

    int getKilometros() {
        return kilometros;
    }

    // Metodos de la clase
    int calcularMontoCompra() {
        return cantidadDeTacos * 2000;
    }

    int calcularMontoTransporte() {
        if(kilometros < 5 || (cantidadDeTacos > 25 && kilometros < 25)) {
            return 0;
        } else {
            return 400 * kilometros;
        }
    }

    int calcularDescuento() {
        if(21 <= hora && hora <= 23) {
            return -((float)calcularMontoCompra() * ((float)15/(float)100));
        }
        return 0;
    }

    int montoTotalSinIVA() {
        return calcularMontoCompra() + calcularMontoTransporte() + calcularDescuento();
    }

    int calcularIVA() {
        return (float)montoTotalSinIVA() * ((float)15/(float)100);
    }

    int montoTotalConIVA() {
        return montoTotalSinIVA() + calcularIVA();
    }

    // Metodo toString()
    string toString() {
        stringstream s;
        s << "-----------------Detalle del Pedido----------------" << endl;
        s << "Nombre: " << nombre << endl;
        s << "Numero Orden: " << numeroOrden << endl;
        s << "Hora: " << hora << ":" << minutos << endl;
        s << "Cantidad: " << cantidadDeTacos << endl;
        s << "Direccion: " << direccion << endl;
        s << "Numero de Kilometros: " << kilometros << endl;
        s << "\n";
        s << "Monto de compra (" << cantidadDeTacos << "*2000):----------" << calcularMontoCompra() << endl;
        s << "Costo del Transporte: --------------" << calcularMontoTransporte() << endl;
        s << "Descuento:--------------------------" << calcularDescuento() << endl;
        s << "\n";
        s << "Monto Total sin IVA:----------------" << montoTotalSinIVA() << endl;
        s << "IVA (15%):--------------------------" << calcularIVA() << endl;
        s << "Monto Total con IVA:----------------" << montoTotalConIVA() << endl;
        return s.str();
    }
};

int main(int argc, char *argv[]) {
    string testNombre;
    int testHora;
    int testMinutos;
    int testCantidadDeTacos;
    string testDireccion;
    int testKilometros;

    int i = 0;
    int deseo;
    bool continuar;

    Pedido test;
    do {
        system("CLS");
        cout << "Ingrese su nombre: ";
        getline(cin, testNombre);
        test.setNombre(testNombre);

        i++;
        test.setNumeroOrden(i);

        cout << "Ingrese la Hora: ";
        cin >> testHora;
        test.setHora(testHora);

        cout << "Ingrese los Minutos: ";
        cin >> testMinutos;
        test.setMinutos(testMinutos);

        
        cout << "Ingrese la Cantidad de Tacos que quiere: ";
        cin >> testCantidadDeTacos;
        test.setCantidadDeTacos(testCantidadDeTacos);

        cin.ignore();
        cout << "Ingrese su direccion: ";
        getline(cin, testDireccion);
        test.setDireccion(testDireccion);

        cout << "Ingrese la distancia en kilometros ";
        cin >> testKilometros;
        test.setKilometros(testKilometros);

        system("CLS");
        cout << test.toString();

        cout << "Desea hacer otro pedido? \n Si = 1 || No = 0: ";
        cin >> deseo;

        continuar = deseo == 1;
        cin.ignore();
    } while(continuar);
    system("CLS");
    cout << "Hasta luego, que la pase bien!!!"
    return 0;
}
