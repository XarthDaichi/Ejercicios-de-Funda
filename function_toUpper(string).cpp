#include <iostream>
using namespace std;
string toUpper(string porCambiar) {
	for (int i = 0; i < porCambiar.length(); i++){
		porCambiar.at(i) = toupper(porCambiar.at(i));
	}
	return porCambiar;
}

int main(int argc, char *argv[]) {
	string test = "This is a String to test toUpper";
	cout << test << endl;
	cout << toUpper(test) << endl;
	return 0;
}

