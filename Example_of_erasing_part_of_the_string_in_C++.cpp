#include <string>
#include <iostream>           // std::cout & std::cin
using namespace std;

int main ()
{
	string str ("This is an example phrase.");
	string::iterator it;
	
	str.erase (10,8);
	cout << str << endl;        // "This is an phrase."
	
	it=str.begin()+9;
	str.erase (it);
	cout << str << endl;        // "This is a phrase."
	
	str.erase (str.begin()+5, str.end()-7);
	cout << str << endl;        // "This phrase."
	return 0;
}
