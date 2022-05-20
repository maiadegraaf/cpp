#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	string message = "HI THIS IS BRAIN";
	string *stringPTR = &message;
	string &stringREF = message;
	cout << &message << endl;
	cout << &stringPTR << endl;
	cout << &stringREF << endl;
	cout << message << endl;
	cout << *stringPTR << endl;
	cout << stringREF << endl;
}