#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
using namespace std;
int main()
{
    int int1 = 12325;
    double double1 = 45.78;
    // Creating a new file for output and write the two data types
    ofstream strmOut("Sample", ios::out | ios::binary);
    if (!strmOut.is_open())
    {
        cout << "The file Sample cannot be opened for writing!";
        assert(false);
    }
    strmOut.write(reinterpret_cast <char*> (&int1), sizeof(int));
    strmOut.write(reinterpret_cast <char*> (&double1), sizeof(double));
    strmOut.close();
    int int2;
    double double2;
    // Opening the same file for input and reading the two data types
    ifstream strmIn("Sample", ios::in | ios::binary);
    if (!strmIn.is_open())
    {
        cout << "The file Sample cannot be opened for reading!";
        assert(false);
    }
    strmIn.read(reinterpret_cast <char *> (&int2), sizeof(int));
    strmIn.read(reinterpret_cast <char *> (&double2), sizeof(double));
    strmIn.close();
    // Testing the value of stored data types
    cout << "Value of int2: " << int2 << endl;
    cout << "Value of double2: " << double2 << endl;
    return 0;
} // End main
