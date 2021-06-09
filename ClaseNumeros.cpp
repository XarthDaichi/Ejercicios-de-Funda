#include <iostream>
using namespace std;

class Numero{
private:
	int valor;
public:
	Numero(){
		valor = 0;
	}
	Numero(int n){
		valor = n;
	}
	~Numero(){
	}
	int getValor(){
		return valor;
	}
	void setValor(int n){
		valor = n;
	}
	bool esParV0(){
		if(valor % 2 == 0)
			return true;
		else
			return false;
	}
	bool esPar(){
		return valor % 2 == 0;
	}
	bool igual(Numero elOtro){
		return valor == elOtro.getValor();
	}
	bool igualV1(Numero elOtro){
		return valor == elOtro.valor;
	}
	Numero suma(Numero elOtro){
		Numero laSuma;
		laSuma.valor = valor + elOtro.valor;
		return laSuma;
	}
};

int main(int argc, char *argv[]) {
	
	Numero numerito1;
	cout<<numerito1.getValor()<<endl;
	numerito1.setValor(15);
	cout<<numerito1.getValor()<<endl;
	numerito1.setValor(numerito1.getValor() + 5);
	cout<<numerito1.getValor()<<endl;
	cout<<"Es Par: "<<numerito1.esPar()<<endl;
	
	Numero numerito2(112);
	cout<<numerito2.getValor()<<endl;
	numerito2.setValor(55);
	cout<<numerito2.getValor()<<endl;
	cout<<"Es Par: "<<numerito2.esPar()<<endl;
	cout<<"Los n�meros son iguales: "<<numerito2.igual(numerito1)<<endl;;
	numerito2.setValor(20);
	cout<<"Los n�meros son iguales: "<<numerito1.igual(numerito2)<<endl;;
	cout<<numerito1.suma(numerito2).getValor()<<endl;
	Numero numerito3 = numerito1.suma(numerito2);
	cout<<"numerito3.getValor(): "<<numerito3.getValor()<<endl;
	
	return 0;
}
