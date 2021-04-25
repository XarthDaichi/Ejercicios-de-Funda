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

    while(n != 0) {
        if(n % 10 == 0) {
            crpyt += "A";
        } else if(n % 10 == 1) {
            crpyt += "B";
        } else if(n % 10 == 2) {
            crypt += "C";
        } else if(n % 10 == 3) {
            crypt += "D";
        } else if(n % 10 == 4) {
            crypt += "E";
        } else if(n % 10 == 5) {
            cyrpt += "F";
        } else if(n % 10 == 6) {
            cyrpt += "G";
        } else if(n % 10 == 7) {
            crypt += "H";
        } else if(n % 10 == 8) {
            crypt += "I";
        } else {
            crypt += "J";
        }
    }
    return crypt;
}

int main(int argc, char *argv[]) {
    //Pregunta 26

    //Pregunta 27

    //Pregunta 28

    //Pregunta 29

    //Pregunta 30

    //Pregunta 31
    
    //Pregunta 32
    
    return 0;
}