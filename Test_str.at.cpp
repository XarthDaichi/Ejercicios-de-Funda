// string::at
#include <iostream>
#include <string>

string toUpper(string porCambiar) {
	for (int i = 0; i < porCambiar.length(); i++){
		porCambiar.at(i) = toupper(porCambiar.at(i));
	}
	return porCambiar;
}

int main ()
{
	std::string str ("Test string");
	std::cout  << str.length() << "\n";
	for (unsigned i=0; i<str.length(); ++i)
	{
		std::cout << i<< "\n";;
		std::cout << str.at(i);
	}
	
	std: toUpper(str);
	return 0;
}
