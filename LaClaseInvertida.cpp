// Clase numero Diego Quiros Artinano

#include <iostream>

using namespace std;

class Numero {
private:
    int valor;
public:
    Numero(){
        valor = 0;
    }

    Numero(int elValor){
        valor = elValor;
    }

    ~Numero(){
    }

    void setValor(int elValor){
        valor = elValor;
    }

    int getValor(){
        return valor;
    }

    bool esPar(){
        return valor % 2 == 0;
    }

    bool igual(Numero elOtro) {
        return valor == elOtro.getValor();
    }

    bool igualV1(Numero elOtro) {
        return valor == elOtro.valor;
    }

    Numero suma(Numero elOtro) {
        Numero laSuma;
        laSuma.valor = valor + elOtro.valor;
        return laSuma;
    }
    
    Numero mayor(Numero elOtro) {
        Numero elMayor;
        if(valor > elOtro.valor) {
            elMayor.valor = valor;
        } else {
            elMayor.valor = elOtro.valor;
        }
        return elMayor;
    }
    Numero mayorV1(Numero elOtro) {
        if(valor > elOtro.valor) {
            return *this;
        } else {
            return elOtro; 
    }

    void intercambia(Numero &elOtro) {
        int temp = valor;
		cout << "temp: " << temp << endl;
        valor = elOtro.valor;
        elOtro.valor = temp;
		cout << "elOtro.valor: " << elOtro.valor << endl;
    }
};

int main(int argc, char *argv[]) {
    Numero numerito1;
    cout << numerito1.getValor() << endl;
    numerito1.setValor(15);
    cout << numerito1.getValor() << endl;
    numerito1.setValor(numerito1.getValor() + 5);
    cout << numerito1.getValor() << endl;
    cout << "Es Par: " << numerito1.esPar() << endl;
	Numero numerito2;
    cout << "Los numeros son iguales: " << numerito1.igual(numerito2) << endl;
    numerito2.setValor(20);
    cout << "Los numeros son iguales: " << numerito1.igual(numerito2) << endl;
    cout << numerito1.suma(numerito2).getValor() << endl;
    Numero numerito3 = numerito1.suma(numerito2);
    cout << "numerito3.getValor(): " << numerito3.getValor() << endl;
    Numero numerito4 = numerito1.mayor(numerito3);
    cout << "numerito1.mayor(numerito3): " << numerito4.getValor() << endl;
    cout << "numerito1 = " << numerito1.getValor() << endl;
    cout << "numerito4 = " << numerito4.getValor() << endl;
    numerito1.intercambia(numerito4);
    cout << "numerito1 = " << numerito1.getValor() << endl;
    cout << "numerito4 = " << numerito4.getValor() << endl;

    return 0;
}
