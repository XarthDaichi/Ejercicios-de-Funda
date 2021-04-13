#include <iostream>
using namespace std;

bool primo(int n) {
	
	bool value;
	int divi = 0;
	int i = 2;
	
	if (n <= 1) {
		value = false; 
	} else if (n == 2) {
		value = true;
	} else if (n == 3) {
		value = true;
	} else {
		while (i <= (n/2) && divi == 0) {
			if (n % i ==0) {
				value = false;
				divi += 1;
				i++;
			} else {
				value = true;
				i++;
			}
		}
	}
	
	return value;
}

int main(int argc, char *argv[]) {
    int numero;

    cout << "Cual es el numero entero que quiere descomponer? ";
    cin >> numero;

    if (primo(numero)) {
        cout << numero << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            if (primo(i) && numero % i == 0) {
                cout << numero << " | " << i << endl;
                numero /= i;
                i--;
            }
        }
    }
    return 0;
}