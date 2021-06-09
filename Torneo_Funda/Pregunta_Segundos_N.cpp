// Pide del usuario un entero N que sera una cantidad de segundos, y
// devuelva al usuario la cantidad de horas, minutos y segundos que contiene ese valor N,
// por ejemplo: 556 : 0:9:16

// Pd; la unica variable que el programa utilize debe ser la misma N

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    cout << n / 3600 << ":" << (n % 3600)/60 << ":" << n % 60;
    return 0;
}
