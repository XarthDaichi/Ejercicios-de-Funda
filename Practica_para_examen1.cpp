//Soluciones de Diego Quirós Artiñano
#include <iostream>
using namespace std;

//Ejercicio NO. 1.
//Que hace?: La funcion borra del de, el digito x.
//Valor que devuelve la funcion para de = 1242 y x = 2: 14

int queHace1(int de, int x) {
    int aux, m, rd;
    rd = 0;
    aux = 0;
    m = 1;
    while (de != 0) {
        rd = de % 10;
        de = de / 10;
        if (rd != x) {
            aux = aux + (rd * m);
            m = m * 10;
        }
    }
    return aux;

}
/* Inicial:
de: 1242
x: 2
rd: 0
aux: 0
m: 1

Iteracion 1:
de: 124
x: 2
rd: 2
aux: 0
m: 1

Iteracion 2:
de: 12
x: 2
rd: 4
aux: 4
m: 10

Iteracion 3:
de: 1
x: 2
rd: 2
aux: 4
m: 10

Iteracion 4:
de: 0
x: 2
rd: 1
aux: 14
m: 100 */

//Ejercicio NO. 2.
/*Dado un numero natural N (entero, positivo), para calcular la Raiz Digital de N se suman los digitos que lo
componen. Si esta suma es un digito (entre 0 y 9), este digito es la raiz digital de N. Si no, se repite el 
proceso, ahora con N igual al valor de la suma, hasta que la suma de sus digitos sea un digito (entre 0 y 9).*/

/* Escribir funciones:
a. sumaDigitos: Recibe un numero natural y retorna la suma de sus digitos.
b. esUnDigito: Recibe un numero natural y retorna true si el numero es un digito (entre 0 y 9) o false si no.
c. raizDigital: Devuelve la Raiz Digital del numero recibido como parametro.
d. En el main() solicite al usuario un numero y muestre la suma de sus digitos y la Raiz Digital del numero.
*/

int sumaDigitos(int n) {
    int suma = 0;
    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

bool esUnDigito(int n) {
    return 0 <= n && n <= 9;
}

int raizDigital(int n) {
    int ntemp = n;
    int raiz = 0;
    while(!esUnDigito(sumaDigitos(ntemp))) {
        ntemp = sumaDigitos(ntemp);
    }
    raiz = ntemp;
    return raiz;
}

//Ejercicio NO. 3.
//Que Hace? Es una funcion que elimina todos los digitos impares.
//Valor que devuelve la funcion para n = 9543: 4

int queHace2(int n) {
    int dd = 0, nd = 1, nu = 0;
    while(n != 0) {
        dd = n%10;
        if(dd%2 == 0) {
            nu = nu+dd*nd;
            nd = nd*10;
        }
        n = n/10;
    }
    return nu;

}
/* Inicial:
n: 9543
dd: 0
nd: 1
nu: 0

Iteracion 1:
n: 954
dd: 3
nd: 1
nu: 0

Iteracion 2:
n: 95
dd: 4
nd: 10
nu: 4

Iteracion 3:
n: 9
dd: 5
nd: 10
nu: 4

Iteracion 4:
n: 0
dd: 9
nd: 10
nu: 4 */

//Ejercicio NO. 4.
/* La empresa "Nube2020" brinda servivios de computo en la nube a diferentes empresas nacionales e
internacionales. Para que las empresas pueden disfrutar de las ventajas financieras de la escalabilidad de las
soluciones y paguen unicamente la capacidad informatica que utilizan, la empresa ha definido tres tipos de 
servicioes: instancias bajo demanda, instancias reservadas e instancias puntuales.

Ademas, la empresa ofrece un precio deferenciado por hora para empresas nacionales o internacionales,
como se muestra en la siguiente tabla:

Tipo de servicio:        | Tarifa por hora nacional:  | Traifa por hora Internacional:
Instancias bajo demanda  | $0.140 por hora            | $0.158 por hora
Instancias reservadas    | $0.063 por hora            | $0.072 por hora
Instancias puntuales     | $0.029 por hora            | $0.038 por hora

Durante el mes de mayo, la empresa desea promocionar sus servicios por lo que ha decidido aplicar una
oferta de acuerdo con las horas de consumo mensuales, de la siguiente manera: si las horas de consumo son
menores o iguales a 168 se obtiene un descuento del 10%, si las horas de consumo son mayores a 168 y
menores o iguales a 360 se obtiene un descuento del 15% y si son mayores a 360 se aplica un descuento del
20%. Por disposicion de la ley, las empresas nacionales deben ademas pagar un 13% de  impuesto al valor
agregado (IVA). */

/*Escribir funciones:
precioBase(): recibe el tipo de servicio ('d': Instancias bajo demanda, 'r': Instancias reservadas, 'p': Instancias puntuales),
el tipo de cliente ('N': Nacional, 'I': Internacional) y la cantidad de horas consumidad por el cliente. Retorna el precio base mensual
que debe pagar el cliente por los servicios recibido.

descuento() que recibe la cantidad de horas consumidad y retorna el monto del descuento que se aplica al precio base.

montoPago() que calcula el precio total que debe pagar el cliente por el servicio consumido, el cual se calcula aplicandole, al
precio base, el descuento y el impuesto al valor agragado correspondiente. Haga uso de las funciones anterirores.

main() Solicite los datos de tipo de servivio, tipo de cliente y numero de horas consumidas. y Calcule y muestre en la pantalla el precio base,
el monto del descuento y el monto a pagar por el cliente. */

float precioBase(char servicio, char cliente, int horas) {
    float precio = 0;

    switch(cliente) {
    case 'N':
        for (int i = 1; i <= horas; i+=) {
            if(servicio == 'd') {
                precio += 0.140;
            } else if (servicio == 'r') {
                precio += 0.063;
            } else if (servicio == 'p') {
                precio += 0.029;
            }
        }
    case 'I':
        for (int i = 1; i <= horas; i+=) {
            if(servicio == 'd') {
                precio += 0.158;
            } else if (servicio == 'r') {
                precio += 0.072;
            } else if (servicio == 'p') {
                precio += 0.038;
            }
        }
    default:
        precio = -1
    }

    return precio;
}

float descuento(int horas) {
    float desc;
    if(horas <= 168) {
        desc = 0.90;
    } else if (168 < horas && horas <= 360) {
        desc = 0.85;
    } else {
        desc = 0.80;
    }

    return desc;
}

float montoPago(char servicio, char cliente, int horas) {
    float monto = 0;
    float precio = precioBase(servicio, cliente, horas);
    float desc = descuento(horas);

    if(cliente == 'N') {
        monto = (precio * desc) + (precio * 0.13);
    } else {
        monto = (precio * desc);
    }

    return monto;
}

int main(int argc, char *argv[]) {
    
    return 0;
}