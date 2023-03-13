#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;
int main()
{
    char ch;
    ifstream istrm;
    // Instantiate a ostream object
    ofstream ostr;
    // Open file1 and connect it to the ostream object
    ostr.open("file1", ios::out | ios::app);
    if (!ostr.is_open())
    {
        cout << "file1 cannot be opened!";
        assert(false);
    }
    // Append the date as a C-string to file1
    ostr << "\nNOV 28, 2022.";
    // Close the file
    istrm.open("file1", ios::in);
    if (!istrm.is_open())
    {
        cout << "file1 cannot be opened!" << endl;
        assert(false);
    }
    // Reading file1 character by character and writing to monitor
    while (istrm.get(ch))
    {
        cout.put(ch);
    }
    // Closing stream
    istrm.close();
    ostr.close();
    return 0;
}