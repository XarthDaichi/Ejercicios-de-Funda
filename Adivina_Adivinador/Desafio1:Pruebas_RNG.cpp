/*Investigue sobre las biliotecas y las funciones disponibles en C++ para 
generar numeros aleatoriamente.
Como se utilizan estas funciones y en que rango generan los numeros aleatorios?
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;

// -------------------------------------
// inicializa el generador de números aleatorios
inline void ini_aleatorio()
{
    srand(time(0)) ;
}
// -------------------------------------
// Devuelve un número aleatorio entre 0 y max (exclusive)
inline int aleatorio(int max)
{
    return int(max*double(rand())/(RAND_MAX+1.0)) ;
}
// -------------------------------------
// Devuelve un número aleatorio entre min y max (ambos inclusive)
inline int _aleatorio(int min, int max)
{
    return min + aleatorio(max-min+1) ;
}
// ------------------------------------

int main(int argc, char *argv[]) {
    ini_aleatorio(); //srand() se tiene que hacer para que no sea el mismo valor toda las veces
    int number;
    cin >> number;
    cout << aleatorio(10); //rand() es para sacar un numero aleatorio
}
