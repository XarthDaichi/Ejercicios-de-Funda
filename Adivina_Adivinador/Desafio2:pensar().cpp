/*Escriba una funcion pensar() que devuelva un numero entre 0 y 9
generado aleatoriamente. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int pensar(int max) {
    return int(max*double(rand())/(RAND_MAX+1.0));
}

int main(int argc, char *argv[]) {
    
    srand(time(0));

    cout << pensar(10);

    return 0;
}
