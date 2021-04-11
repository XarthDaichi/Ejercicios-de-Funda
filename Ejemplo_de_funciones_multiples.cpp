#include <iostream>
using namespace std;

float doble(float n) {
    return 2 * n;
}

float funcion (float a) {
    float x = doble(a);
    return x;
}

char siguienteLetra(int n) {
    return n + 1;
}

int main() {
    float v = funcion(2.5);
    cout << v << endl;

    cout << siguienteLetra(64) << endl;
    cout << siguienteLetra(65) << endl;
    return 0;
}