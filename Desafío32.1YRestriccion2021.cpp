//soluciones Desafios 32.1, 38 y 39 de Diego Quirós Artiñano
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int pot(int base, int exp) {
    int potencia = 1;
    
    for (int i = 1; i <= exp; i++) {
        potencia *= base;
    }

    return potencia;
}

int decodifica(string hilera) {
    int resultado = 0;
	int o = hilera.length()-1;
	
    for (int i = 0; i < hilera.length() || resultado == -1; i++) {
        switch(hilera.at(o)){
        case 'A':
            resultado += 0 * pot(10, i);
            break;
        case 'B':
            resultado += 1 * pot(10, i);
            break;
        case 'C':
            resultado += 2 * pot(10, i);
            break;
        case 'D':
            resultado += 3 * pot(10, i);
            break;
        case 'E':
            resultado += 4 * pot(10, i);
            break;
        case 'F':
            resultado += 5 * pot(10, i);
            break;
        case 'G':
            resultado += 6 * pot(10, i);
            break;
        case 'H':
            resultado += 7 * pot(10, i);
            break;
        case 'I':
            resultado += 8 * pot(10, i);
            break;
        case 'J':
            resultado += 9 * pot(10, i);
            break;
        default:
            resultado = -1;
            break;
        }
		o--;
    }

    return resultado;
}

string restriccion(string placa) {
    string dias = "";
    int lastdigit;
	
	stringstream stringToInt;
	
    if(placa.length() > 6) {
        dias = "Error: Ha ingresado una placa muy larga";
    } else {
        placa.erase(0, placa.length()-1);
		stringToInt << placa;
		stringToInt >> lastdigit;
        switch(lastdigit){
        case 0:
            if (placa != "0") {
                dias = "Error: El ultimo digito no es un numero";
			    break;
            }
            dias = "Usted tiene restriccion el Viernes y el Domingo";
            break;
        case 1:
            dias = "Usted tiene restriccion el Lunes y  el Sabado";
            break;
        case 2:
            dias = "Usted tiene restriccion el Lunes y el Domingo";
            break;
        case 3:
            dias = "Usted tiene restriccion el Martes y el Sabado";
            break;
        case 4:
            dias = "Usted tiene restriccion el Martes y el Domingo";
            break;
        case 5:
            dias = "Usted tiene restriccion el Miercoles y el Sabado";
            break;
        case 6:
            dias = "Usted tiene restriccion el Miercoles y el Domingo";
            break;
        case 7:
            dias = "Usted tiene restriccion el Jueves y el Sabado";
            break;
        case 8:
            dias = "Usted tiene restriccion el Jueves y el Domingo";
            break;
        case 9:
            dias = "Usted tiene restriccion el Viernes y el Sabado";
            break;
		}
    }

    return dias;
}

string menu() {
    string lista = "";
    lista += "1. Decodificado \n";
    lista += "2. Restriccion \n";
    lista += "Cual operacion quiere realizar?: ";
    return lista;
}

int main(int argc, char *argv[]) {
	int operacion;
    string test;
    int deseo;
    bool continuar;
	int ltest;

    do {
        system("CLS");
        cout << menu();
        cin >> operacion;
        system("CLS");
        switch(operacion) {
        case 1:
            cout << "Digite la hilera que quiere decodificar: ";
            cin >> test;
			ltest = test.length();
            if(decodifica(test) == -1) {
                cout << "\n \nError: Usted ha ingresado una hilera que no se puede decodificar.";
                cin.ignore();
                cin.clear();
                cin.get();
                break;
            } else {
                cout << "El resultado de la decodificacion es: ";
				cout.fill('0');
				cout.width(ltest);
				cout << decodifica(test) << endl;
                break;
            }
        case 2:
            cout << "Digite su placa ";
            cin >> test;
            cout << restriccion(test) << endl;
            if(restriccion(test) == "Error: El ultimo digito no es un numero") {
				cin.ignore();
				cin.clear();
				cin.get();
			}
            break;
		default:
			cout << "\nError: Digito ingresado incorrecto";
			if(!cin >> operacion) {
				cin.ignore();
				cin.clear();
				cin.get();
			}
			break;
        }
        cout << "\n \nDesea seguir haciendo operaciones?" << endl;
        cout << "Si = 1 || No = 0: ";
        cin >> deseo;
        continuar = deseo == 1;
    } while(continuar);
    system("CLS");
    cout << "Hasta luego!!!";
    
    return 0;
}
