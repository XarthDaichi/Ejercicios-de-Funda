//Este es un programa ejemplo de una funcion
#include <iostream>
using namespace std;

/*
<Tipo Devuelto> <Identificador>([<Parámetro (no necesario)>]) {

    <instrucciones>
    return <valor del TipoDevuelto>; (o compatible con el Tipo Devuelto)
}
*/

// TipoDevuelto puede ser bool, char, short, int, long, float, double, string


// Tambien se puede definir void, pero estas no devuelven nada
/* void <identificador> ([Parametro]) {
    <instrucciones>
} */

float mayor(float a, float b){
    float elMayor;
    if(a > b) {
        elMayor = a;
    } else {
        elMayor = b;
    }
    return elMayor;
}


/* Una funcion se llama con
<identificador> ([<Parametros reales o argumentos(a veces no necesarios)>])
*/

int main(int argc, char *argv[]) {

    cout << mayor(12.5, 27.8);

    return 0;
}