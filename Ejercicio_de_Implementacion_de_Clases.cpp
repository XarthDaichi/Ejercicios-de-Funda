
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

//Ejercicio 2
class Arboles {
private:
    float altura;
    string orden;
    string familia;
    float pesoOriginal;
    float pesoSeco;
    int edad;
    string fuente;
    float radioTronco;
public:

    //Metodos constructores
    Arboles() {
        altura = 0;
        orden = "";
        familia = "";
        pesoOriginal = 0;
        pesoSeco = 0;
        edad = 0;
        fuente = "";
        radioTronco = 0;
    }

    Arboles(float laAltura, string elOrden, string laFamilia, float elPesoOriginal, float elPesoSeco, int laEdad, string laFuente, float elRadioTronco) {
        altura = laAltura;
        orden = elOrden;
        familia = laFamilia;
        pesoOriginal = elPesoOriginal;
        pesoSeco = elPesoSeco;
        edad = laEdad;
        fuente = laFuente;
        radioTronco = elRadioTronco;
    }

    //Metodos Set Get
    void setAltura(float laAltura) {
        altura = laAltura;
    }

    float getAltura() {
        return altura;
    }

    void setOrden(string elOrden) {
        orden = elOrden;
    }

    string getOrden() {
        return orden;
    }

    void setFamilia(string laFamilia) {
        familia = laFamilia;
    }

    string getFamilia() {
        return familia;
    }

    void setPesoOriginal(float elPesoOriginal) {
        pesoOriginal = elPesoOriginal;
    }

    float getPesoOriginal() {
        return pesoOriginal;
    }

    void setPesoSeco(float elPesoSeco) {
        pesoSeco = elPesoSeco;
    }

    float getPesoSeco() {
        return pesoSeco;
    }

    void setEdad(int laEdad) {
        edad = laEdad;
    }

    int getEdad() {
        return edad;
    }

    void setFuente(string laFuente) {
        fuente = laFuente;
    }

    string getFuente() {
        return fuente;
    }

    void setRadioTronco(float elRadioTronco) {
        radioTronco = elRadioTronco;
    }

    float getRadioTronco() {
        return radioTronco;
    }

    //Metodo destructor
    ~Arboles() {
    }

    float volumen() {
        return 3.14 * (radioTronco * radioTronco) * altura;
    }

    float cantidadAgua() {
        return ((pesoOriginal - pesoSeco) * 100) / pesoSeco;
    }
};

//Ejercicio 3

class AlimentosAlmacenados {
private:
    string nombre;
    string tipo;
    int diaIngreso;
    int mesIngreso;
    float temperaturaCelsius;
    int anaquel;
    float kilos;
    float costo;
    float precio;
public:
    //Metodos constructores
    AlimentosAlmacenados() {
        nombre = "";
        tipo = "";
        diaIngreso = 0;
        mesIngreso = 0;
        temperaturaCelsius = 0;
        anaquel = 0;
        kilos = 0;
        costo = 0;
        precio = 0;
    }

    AlimentosAlmacenados(string elNombre, string elTipo, int elDiaIngreso, int elMesIngreso, float laTemperaturaCelsius, int elAnaquel, float losKilos, float elCosto) {
        nombre = elNombre;
        tipo = elTipo;
        diaIngreso = elDiaIngreso;
        mesIngreso = elMesIngreso;
        temperaturaCelsius = laTemperaturaCelsius;
        anaquel = elAnaquel;
        kilos = losKilos;
        costo = elCosto;
        precio = costo * kilos;
    }

    //Metodos Set y Get
    void setNombre(string elNombre) {
        nombre = elNombre;
    }

    string getNombre() {
        return nombre;
    }

    void setTipo(string elTipo) {
        tipo = elTipo;
    }

    string getTipo() {
        return tipo;
    }

    void setDiaIngreso(int elDiaIngreso) {
        diaIngreso = elDiaIngreso;
    }

    int getDiaIngreso() {
        return diaIngreso;
    }

    void setMesINgreso(int elMesIngreso) {
        mesIngreso = elMesIngreso;
    }

    int getMesIngreso() {
        return mesIngreso;
    }

    void setTemperaturaCelsius(float laTemperaturaCelsius) {
        temperaturaCelsius = laTemperaturaCelsius;
    }

    float getTemperaturaCelsius() {
        return temperaturaCelsius;
    }

    void setAnaquel(int elAnaquel) {
        anaquel = elAnaquel;
    }

    int getAnaquel() {
        return anaquel;
    }

    void setKilos(float losKilos) {
        kilos = losKilos;
    }

    float getKilos() {
        return kilos;
    }

    void setCosto(float elCosto) {
        costo = elCosto;
    }

    float getCosto() {
        return costo;
    }

    void setPrecio(float elPrecio) {
        precio = elPrecio;
    }

    float getPrecio() {
        return precio;
    }

    //Metodo destructor
    ~AlimentosAlmacenados(){
    }

    //Metodos de la clase
    /*
    bool estadoComida(int elDiaActual, int elMesActual) {
        if(elDiaActual >= diaIngreso) {
            elMesActual++;
        }
        return (elMesActual - mesIngreso) > 3;
    }

    bool anaquelCorrecto(int elAnaquelCorrecto, int temperaturaAnaquelActual) {
        return anaquel == elAnaquelCorrecto || temperaturaCelsius > temperaturaAnaquelActual;
    }*/

    bool comidasEnUso(int elDiaActual, int elMesActual, int elAnaquelCorrecto, float temperaturaAnaquelActual) {
        if(elDiaActual >= diaIngreso) {
            elMesActual++;
        }
        return (elMesActual - mesIngreso) > 3 && (anaquel == elAnaquelCorrecto || temperaturaCelsius > temperaturaAnaquelActual);
    }

    float precioDeVenta(float volumenVentas) {
        return (precio * 1.3) / (1 + volumenVentas);
    }
};

// Ejercicio 4

class Inventario {
private:
    string id;
    string producto;
    char tipo;
    int canExistencia;
    int ptoReorden;
    float costo;
public:
    // Metodos constructores
    Inventario() {
        id = "";
        producto = "";
        tipo = "";
        canExistencia = 0;
        ptoReorden = 0;
        costo = 0.0;
    }

    Inventario(string elId, string elProducto, char elTipo, int elCanExistencia, int elPtoReorden, float elCosto) {
        id = elId;
        producto = elProducto;
        tipo = elTipo;
        canExistencia = elCanExistencia;
        ptoReorden = elPtoReorden;
        costo = elCosto;
    }

    // Metodos set y get
    void setId(string elId) {
        id = elId;
    }

    string getId() {
        return id;
    }

    void setProducto(string elProducto) {
        producto = elProducto;
    }

    string getProducto() {
        return producto;
    }

    void setTipo(char elTipo) {
        tipo = elTipo;
    }

    char getTipo() {
        return tipo;
    }

    void setCanExistencia(int elCanExistencia) {
        canExistencia = elCanExistencia;
    }

    int getCanExistencia() {
        return canExistencia;
    }

    void setPtoReorden(int elPtoReorden) {
        ptoReorden = elPtoReorden;
    }

    int getPtoReorden() {
        return ptoReorden;
    }

    void setCosto(float elCosto) {
        costo = elCosto;
    }

    float getCosto() {
        return costo;
    }

    // Desconstructor
    ~Inventario() {
    }

    // Metodos
    void venta(int cant) {
        canExistencia - cant;
    }

    bool verificarVenta(int venCant){
        if(venta(venCant) >= 0) {
            canExistencia = venta(venCant);
            return true;
        } else {
            return false;
        }
    }

    float costAlmacenaje() {
        float costAlm = 0;
        switch(tipo) {
        case 'A':
            costAlm = costo * 0.15;
            break;
        case 'P':
            costAlm = costo * 0.10;
            break;
        case 'I':
            costAlm = costo * 0.05;
            break;
        case 'T':
            break;
        }
        return costAlm;
    }

    float calPreVenta() {
        return costo + (costo * 0.40) + costAlmacenaje();
    }

    float montoDeLaVenta(int cantidad) {
        return calPreVenta() * cantidad;
    }

    string toString() {
        stringstream s;
        s << "Datos del producto: " << endl;
        s << "Id: " << id << endl;
        s << "Producto: " << producto << endl;
        s << "Tipo: " << tipo << endl;
        s << "Cantidad de Producto: " << canExistencia << endl;
        s << "PtoReorden: " << ptoReorden << endl;
        s << "Costo: " << costo << endl;
        return s.str();
    }
};

int main(int argc, char *argv[]) {
    string s1;
    string s2;
    char c1;
    int i1;
    int i2;
    float f1;

    Inventario obj1;

    cout << "Ingrese el id: ";
    cin >> s1;
    obj1.setId(s1);
    cout << "Ingrese el nombre del producto: ";
    cin >> s2;
    obj1.setProductio(s2);
    cout << "Ingrese el tipo del producto: ";
    cin >> c1;
    obj1.setTipo(c1);
    cout << "Ingrese la cantidad del producto: ";
    cin >> i1;
    obj1.setCanExistencia(i1);
    cout << "Ingrese el ptoReorden: ";
    cin >> i2;
    obj1.setPtoReorden(i2);
    cout << "Ingrese el costo del producto: ";
    cin >> f1;
    obj1.setCosto(f1);

    cout << obj1.toString() << endl;

    cout << "Ingrese el id: ";
    cin >> s1;
    cout << "Ingrese el nombre del producto: ";
    cin >> s2;
    cout << "Ingrese el tipo del producto: ";
    cin >> c1;
    cout << "Ingrese la cantidad del producto: ";
    cin >> i1;
    cout << "Ingrese el ptoReorden: ";
    cin >> i2;
    cout << "Ingrese el costo del producto: ";
    cin >> f1;

    Inventario obj2(s1, s2, c1, i1, i2, f1);

    cout << obj2.toString() << endl;

    int cant;
    cout << "Cual es la cantidad de que quiere comprar de " << obj2.producto << " " << endl;
    cin >> cant;
    if(obj2.verificarVenta(cant)) {
        obj2.montoDeLaVenta(cant);
    } else {
        cout << "No hay suficiente que comprar." << endl;
    }

    if(obj1.costAlmacenaje() > obj2.costAlmacenaje()){
        cout << "El costo de almacenaje de " << obj1.producto << " es mejor." << endl;
    } else {
        cout << "El costo de almacenaje de " << obj2.producto << " es mejor." << endl;
    }
    
    return 0;
}
