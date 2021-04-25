//Todas las preguntas del quiz de Diego Quiros Artinano

#include <iostream>
#include <math.h>
using namespace std;

//Pregunta 1
int cantidadDivisoresPropios(int n) {
	int counter = 0;
	
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0){
			counter++;
		}
	}
	return counter;
}

//Pregunta 2
int sumaDivisoresPropios(int n) {
	int suma = 0;
	
	for(int i = 1; i <= n/2; i++) {
		if(n % i == 0) {
			suma += i;
		}
	}
	
	return suma;
}

//Pregunta 3
bool numeroPerfecto(int n) {
    int suma = 0;
	
    for(int i = 1; i <= n/2; i++) {
	    if(n % i == 0) {
			suma += i;
		}
	}
	return suma == n;
}

//Pregunta 4
bool numeroDeficiente(int n) {
    int suma = 0;
    
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma < n;
}

//Pregunta 5
bool numeroAbundante(int n) {
    int suma = 0;

    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            suma += i;
        }
    }
    return suma > n;
}

//Pregunta 6
int multiplicacion(int n, int p) {
    int multi = 0;
    for(int i = 1; i <= p; i++) {
        multi += n;
    }
    return multi;
}

//Pregunta 7
float division(int n, int p) {
    int divi = 0;

    while(p > 0) {
        p -= n;
        divi++;
        if(p < 0){
            divi--;
        }
    }

    return divi;
}

//Pregunta 8
int modulo(int n, int p) {
	
    while(n > 0) {
        n -= p;
    }
	if (n != 0){
		n += p;
	}
	
    return n;
}

//Pregunta 9
int potencia(int n, int p) {
    int pot = 1;

    for(int i = 1; i <= p; i++) {
        pot *= n;
    }

    return pot;
}

//Pregunta 10
int redondeoInferior(int n) {
    int temp = n % 10;
    return n - temp;
}

//Pregunta 11
int redondeoSuperior(int n) {
    int temp;

    temp = (n % 10) - 10;

    return n - temp;
}

//Pregunta 12
int redondeo(int n) {
    int temp;
    int numf;

    temp = (n % 10);
    if(temp <= 5) {
        numf = n - temp;
    } else {
		temp -= 10;
        numf = n - temp;
    }
    
    return numf;
}

//Pregunta 13
int cantidadDeDigitos(int n) {
    int counter = 0;

    while(n != 0) {
        counter++;
        n /= 10;
    }
	
	return counter;
}

//Pregunta 14
int numeroMenor(int n) {
    int digit = n % 10;

    while(n != 0){
        if (n % 10 < digit) {
            digit = n % 10;
        }
        n /= 10;
    }
    
    return digit;
}

//Pregunta 15
int numeroMayor(int n) {
    int digit = n % 10;
    
    while(n != 0) {
        if(n % 10 > digit) {
            digit = n % 10;
        }
        n /= 10;
    }

    return digit;
}

//Pregunta 16
int primerNumero(int n) {
    int digit;

    while(n != 0) {
        digit = n % 10;
        n /= 10;
    }
    return digit;
}

//Pregunta 17
bool primerYUltimoIgual(int n) {
    int fdigit = n % 10;
    int ldigit;

    while(n != 0) {
        ldigit = n % 10;
		n /= 10;
    }

    return fdigit == ldigit;
}

//Pregunta 18
bool cantidadDeDigitosEsPar(int n) {
    int numdigits = 0;

    while(n != 0) {
        numdigits++;
        n /= 10;
    }

    return numdigits % 2 == 0;
}

//Pregunta 19
int cantidadDeDigitosEsImpar(int n) {
    int numdigits = 0;

    while(n != 0) {
        numdigits++;
        n /= 10;
    }

    return numdigits % 2 == 1;
}

//Pregunta 20
bool numeroDeArmstrong(int n) {
    int tempn = n;
    int sumacubos = 0;

    while(tempn != 0) {
        sumacubos += pow(tempn % 10, 3);
        tempn /= 10;
    }
    return sumacubos == n;
}

//Pregunta 21
float sumatoria1i(int n) {
    float suma = 0;
    for(float i = 1; i <= n; i++) {
        suma += (1/i);
    }
    return suma;
}

//Pregunta 22
float sumatoria1n(float n) {
    float suma = 0;

    for(int i = 1; i <= n; i++) {
        suma += 1/n;
    }
    
    return suma;
}

//Pregunta 23
float sumatoria1kk1(float n) {
    float suma = 0;

    for(float k = 1; k <= n; k++) {
        suma += 1/(k*(k+1));
    }
	return suma;
}

//Pregunta 24
float sumatoria1kk3(float n) {
    float suma = 0;

    for(float k = 1; k <= n; k++) {
        suma += 1/(k*(k+3));
    }

    return suma;
}

//Pregunta 25
float sumatoria1i1i1(float n) {
    float suma = 0;
    
    for(float i = 1; i <= n; i++) {
        suma += ((1/i) - (1/(i+1)));
    }
    return suma;
}

int main(int argc, char *argv[]) {
	int number;
    int number1;
    int number2;
    int divisor;
    int dividendo;
    int nmod;
    int base;
    int power;
	
    //Pregunta 1
	cout << "Escriba el numero que quiere saber la cantidad de divisores propios ";
	cin >> number;
	
	cout << cantidadDivisoresPropios(number);
    
    //Pregunta 2
    cout << "Escriba el numero entero que quiere conocer la suma de sus divisores ";
	cin >> number;
	
	cout << sumaDivisoresPropios(number) << endl;
	
    //Pregunta 3
    cout << "Escriba el numero que quiere ver si es perfecto ";
	cin >> number;
	
	if(numeroPerfecto(number)) {
		cout << "Es Perfecto!!!" << endl;
	} else {
		cout << "No es perfecto!!!" << endl;
	}

    //Pregunta 4
    cout << "Escriba el numero que quiere ver si es deficiente ";
    cin >> number;

    if (numeroDeficiente(number)) {
        cout << "Es Deficiente!!!" << endl;
    } else {
        cout << "No Es Deficiente!!!" << endl;

    //Pregunta 5
    cout << "Escriba el numero que quiere ver si es abundante ";
    cin >> number;

    if(numeroAbundante(number)) {
        cout << "Es Abundante!!!";
    } else {
        cout << "No Es Abundante!!!";
    }
	
    //Pregunta 6
    cout << "Escriba el primer numero que quiere multiplicar ";
    cin >> number1;

    cout << "Esriba el segundo numero que quiere multiplicar ";
    cin >> number2;

    cout << multiplicacion(number1, number2) << endl;

    //Pregunta 7
    cout << "Escriba el divisor ";
    cin >> divisor;

    cout << "Escriba el dividendo ";
    cin >> dividendo;

    cout << division(divisor, dividendo) << endl;

    //Pregunta 8
    cout << "Escriba el numero ";
    cin >> number;
    
    cout << "Escriba el modulo ";
    cin >> nmod;

    cout << modulo(number, nmod) << endl;

    //Pregunta 9
    cout << "Escriba la base de la potencia ";
    cin >> base;

    cout << "Escriba la potencia ";
    cin >> power;

    cout << base << " a la " << power << " es: " << potencia(base, power) << endl;

    //Pregunta 10
    cout << "Escribir el numero que quiere redondear para abajo ";
    cin >> number;

    cout << redondeoInferior(number) << endl;

    //Pregunta 11
    cout << "Escriba el numero que quiere redondear para arriba ";
    cin >> number;

    cout << redondeoSuperior(number) << endl;

    //Pregunta 12
    cout << "Escriba un numero para redondear a la decena mas cercana ";
    cin >> number;

    cout << redondeo(number) << endl;

    //Pregunta 13
    cout << "Escriba el numero que quiere saber la cantidad de digitos ";
    cin >> number;

    cout << cantidadDeDigitos(number) << endl;

    //Pregunta 14
    cout << "Cual es el numero que quiere evaluar el menor digito ";
    cin >> number;

    cout << numeroMenor(number);

    //Pregunta 15
    cout << "Escriba el numero que quiere evaluar el digito mas grande ";
    cin >> number;

    cout << numeroMayor(number) << endl;

    //Pregunta 16
    cout << "Escriba el numero que quiere ver el primer numero de izquierda a derecha ";
    cin >> number;

    cout << primerNumero(number) << endl;

    //Pregunta 17
    cout << "Escriba el numero que quiere evaluar si el primer y ultimo digito son iguales ";
    cin >> number;

    if (primerYUltimoIgual(number)) {
        cout << "True!!!" << endl;
    } else {
        cout << "False!!!" << endl;
    }

    //Pregunta 18
    cout << "Escriba el numero que quiere ver si tiene la cantidad de digitos par o no ";
    cin >> number;

    if(cantidadDeDigitosEsPar(number)) {
        cout << "La cantidad de digitos es par!!!" << endl;
    } else {
        cout << "La cantidad de digitos es impar!!!" << endl;
    }

    //Pregunta 19
    cout << "Escribir el numero que quiere ver si la cantidad de digitos es impar o no ";
    cin >> number;

    if(cantidadDeDigitosEsImpar(number)) {
        cout << "La cantidad es Impar!!!" << endl;
    } else {
        cout << "La cantidad no es Par!!!" << endl;
    }

    //Pregunta 20
    cout << "Escribir el numero que quier ver si es un Numero de Armstrong ";
    cin >> number;

    if(numeroDeArmstrong(number)) {
        cout << "Es un Numero de Armstrong!!!" << endl;
    } else {
        cout << "No es un Numero de Armstrong!!!" << endl;
    }

    //Pregunta 21
    cout << "Escriba el numero que quiere hacer la sumatoria ";
    cin >> number;

    cout << sumatoria1i(number) << endl;

    //Pregunta 22
    cout << "Escriba el numero que quiere usar para la sumatoria ";
    cin >> number;

    cout << sumatoria1n(number) << endl;

    //Pregunta 23
    cout << "Escriba el numero que quiere usar para la sumatoria ";
    cin >> number;

    cout << sumatoria1kk1(number) << endl;

    //Pregunta 24
    cout << "Escriba el numero que quiere usar para la sumatoria ";
    cin >> number;

    cout << sumatoria1kk3(number) << endl;

    //Pregunta 25
    cout << "Escriba el numero que quiere usar sumatoria ";
    cin >> number;

    cout << sumatoria1i1i1(number) << endl;

	return 0;
}

