//Soluciones Diego Quiros Artinano

#include <iostream>
using namespace std;

float montoPago(int dias, float peso) {
    float monto = 0;

    if(peso < 0) {
        monto = -1;
    }else if(peso < 500) {
        monto += 1;
    } else if(500 <= peso && peso < 1000) {
        monto += 2;
    } else if(1000 <= peso && peso < 2000) {
        monto += 5;
    } else {
        monto += 20;
    }
    
    if(monto != -1) {
        if(dias < 0) {
            monto = -1;
        } else if(1 <= dias && dias <= 4) {
            monto += 10;
        } else if(5 <= dias && dias <= 7) {
            monto += 5;
        } else {
            monto += 2;
        }
    }

    return monto;
}
float montoImpuesto(char cliente, float montoBase) {
    float impuesto = 0;
    if(cliente == 'i' || cliente == 'I') {
        impuesto = montoBase * 0.02;
    } else if(cliente == 'f' || cliente == 'F') {
        impuesto = montoBase * 0.13;
    } else {
        impuesto = -1;
    }
    return impuesto;
}

int main(int argc, char *argv[]) {
    char character;
    int number1;
    float number2;

    int base, baseColones;
    float imp, impColones;
    float total, totalColones;

    int deseo;
    bool continuar;
	
    do {
        system("CLS");
		cout << "Buenos Dias!!!" << endl;
        cout << "Ingrese el peso de su envio ";
        cin >> number2;
		if(!cin >> (int)number2) {
			cin.ignore();
			cin.clear();
			cin.get();
		}
        cout << "Ingrese en cuantos dias le gustaria resibirlo (tipo de envio) ";
        cin >> number1;
		if(!cin >> number1) {
			cin.ignore();
			cin.clear();
			cin.get();
		}

        cout << "Ingrese el tipo de cliente\nCliente Fisico = f || Cliente de Institucion del estado = i: ";
        cin >> character;
		if(!cin >> character) {
			cin.ignore();
			cin.clear();
			cin.get();
		}
		
        base = montoPago(number1, number2);
        switch(base) {
        case -1:
            cout << "Ha habido un error en sus valores ingresados. Por favor ingresar de nuevo: " << endl;
            break;
        default:
            baseColones = base * 620;
            cout << "El monto de su envio es " << base << " || En Colones es " << baseColones << endl;
            imp = montoImpuesto(character, base);
            if(imp == -1) {
                cout << "Hay un error en el tipo de cliente ingresado. Por favor ingresar valores de nuevo: " << endl;
                break;
            } else {
                impColones = imp * 620;
                cout << "El impuesto es " << imp << " || En Colones es " << impColones << endl;
                total = base + imp;
                totalColones = total * 620;
                cout << "El motno total es " << total << " || En Colones es " << totalColones << endl;
                
                break;
            }
        }
		cout << "Desea continuar?\nSi = 1 || No = 0: ";
		cin >> deseo;
        continuar = deseo == 1;
    } while(continuar);
    
    return  0;
}
