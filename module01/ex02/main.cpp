#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main (void)
{
	string	str = "HI THIS IS BRAIN";
	string&	stringREF = str;
	string*	stringPTR;
	stringPTR = &str;
	cout << "This is just a string: " <<str << endl;
	cout << "This is a pointer: " << *stringPTR << endl;
	cout << "This is a reference: " << stringREF << endl;
	string	str1 = "new string";
	stringREF = str1;
	str1 = "lol kek";
	cout << "This is a new string1: " <<str1 << endl;
	cout << "This is just an old string: " <<str << endl;
	cout << "This is a pointer: " << *stringPTR << endl;
	cout << "This is a reference: " << stringREF << endl;
}
