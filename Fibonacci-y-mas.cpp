#include <iostream>
using namespace std;

int fibonacci(int n){
	int anterior = 1, trasAnterior = 1;
	int actual = 1;
	for(int i = 2; i <= n; i++){
		actual = anterior + trasAnterior;
		trasAnterior = anterior;
		anterior = actual;	
	}
	return actual;
}
	
int posicionEnFibonacci(int fib){
	int laPosicionEnFibonacci;
	for(laPosicionEnFibonacci = 0; fib >= fibonacci(laPosicionEnFibonacci);laPosicionEnFibonacci++);
	laPosicionEnFibonacci--;
	if(fib == fibonacci(laPosicionEnFibonacci))
		return laPosicionEnFibonacci;
	else
		return -1;
}
	
bool esFibonacci(int n){
	return posicionEnFibonacci(n) != -1;
}

int main(int argc, char *argv[]) {
	int number;
	cin >> number;
	
	cout << fibonacci(number) << endl;
	cout<<fibonacci(37)<<endl;
	cout<<posicionEnFibonacci(39088169)<<endl;
	cout<<esFibonacci(89)<<endl;
	cout<<esFibonacci(98)<<endl;
	return 0;
}
