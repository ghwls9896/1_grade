#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;
int main()
{
	// Instantiation of an ofstream object
	ofstream outStrm;
	// Creation of a file and connecting it to the ofstream object
	outStrm.open("integerFile");
	if (!outStrm.is_open())
	{
		cout << "integerFile cannot be opened!";
		assert(false);
	}
	for (int i = 1; i <= 10; i++)
	{
		outStrm << i * 10 << " ";
	}
	// Closing the file
	outStrm.close();
	// The ofstream object is destroyed after return statement
	return 0;
}
