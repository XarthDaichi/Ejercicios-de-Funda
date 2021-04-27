//Soluciones de las preguntas 26-32 de Jairo Castillo, Jorge Duran, Diego Quiros A.

#include <iostream>
#include <math.h>
using namespace std;

//Pregunta 26
int invertir(int n) {
    int inv = 0;
    int ntemp = n;
    int counter = 0;

    while(ntemp != 0) {
        counter++;
        ntemp /= 10;
    }
    for(int i = counter - 1; i >= 0; i--) {
        inv += (n % 10) * pow(10, i);
        n /= 10;
    }
    
    return inv;
}

//Pregunta 27
int sustituir(int n, int d, int s) {
    int sust = 0;
    int ntemp = n;
    int counter = 0;

    while(ntemp != 0) {
        counter++;
        ntemp /= 10;
    }

    for(int i = 0; i < counter; i++) {
        if(n % 10 == d) {
            sust += s * pow(10, i);
            n /= 10;
        } else {
            sust += (n % 10) * pow(10, i);
			n /= 10;
        }
    }
    return sust;
}

//Pregunta 28
int eliminar(int n, int d) {
    int eli = 0;
    int ntemp = n;
    int counter = 0;

    while(ntemp != 0) {
        if(ntemp % 10 == d){
            ntemp /= 10;
        } else {
            counter++;
            ntemp /= 10;
        }
    }

    for(int i = 0; i < counter; i++){
        if(n % 10 == d) {
            i--;
            n /= 10;
        } else {
            eli += (n % 10) * pow(10, i);
            n /= 10;
        }
    }


    return eli;
}

//Preugnta 29
bool numeroCapicua(int n) {
    int ntemp = invertir(n);
    return ntemp == n;
}

//Pregunta 30
bool numerosAmigos(int n, int p) {
    int suman = 0;
    int sumap = 0;

    for(int i = 1; i <= n/2; i++){
        if(n % i == 0) {
            suman += i;
        }
    }

    for(int i = 1; i <= p/2; i++) {
        if(p % i == 0) {
            sumap += i;
        }
    }
    
    return suman == p && sumap == n;
}

//Pregunta 31
int unaComidaGratis(int n) {
    int formas = 1;

    for(int i = 1; i <= n; i++) { //Para hacer n! (n factorial)
        formas *= i;
    }
    return formas;
}

//Pregunta 32
string encryption(int n) {
    string crypt = "";
	int ntemp;
    ntemp = invertir(n);
    while(ntemp != 0) {
        if(ntemp % 10 == 0) {
            crypt += "A";
        } else if(ntemp % 10 == 1) {
            crypt += "B";
        } else if(ntemp % 10 == 2) {
            crypt += "C";
        } else if(ntemp % 10 == 3) {
            crypt += "D";
        } else if(ntemp % 10 == 4) {
            crypt += "E";
        } else if(ntemp % 10 == 5) {
            crypt += "F";
        } else if(ntemp % 10 == 6) {
            crypt += "G";
        } else if(ntemp % 10 == 7) {
            crypt += "H";
        } else if(ntemp % 10 == 8) {
            crypt += "I";
        } else {
            crypt += "J";
        }
		ntemp /= 10;
    }
	if(n % 10 == 0) {
		crypt += "A";
	}
    return crypt;
}

int main(int argc, char *argv[]) {
    int number1;
    int number2;
    int digit1;
    int digit2;

    cout << "Escriba el primer numero que quiere evaluar ";
    cin >> number1;

    cout << "Escriba el segundo numero que quiere evaluar ";
    cin >> number2;

    cout << "Escriba el primer digito que quiere usar ";
    cin >> digit1;

    cout << "Escriba el segundo digito que quiere usar ";
    cin >> digit2;
    
    //Pregunta 26
    cout << "El numero invertido es " << invertir(number1) << endl;

    //Pregunta 27
    cout << " El numero sustituyendo " << digit1 << " por " << digit2 << " es " << sustituir(number1, digit1, digit2) << endl;

    //Pregunta 28
    cout << "El numero eliminando " << digit1 << " es " << eliminar(number1, digit1) << endl;

    //Pregunta 29
    cout << "El numeor es un palindromo " << numeroCapicua(number1) << endl;

    //Pregunta 30
    cout << "Los numeros son amigos " << numerosAmigos(number1, number2) << endl;

    //Pregunta 31
    cout << "El numero de formas es " << unaComidaGratis(number1) << endl;

    //Pregunta 32
    cout << " La encripcion es " << encryption(number1) << endl;

    return 0;
}
