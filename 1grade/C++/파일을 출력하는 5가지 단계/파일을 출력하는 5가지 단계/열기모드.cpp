#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;
int main()
{
    // Variable declaration
    char ch;
    // Instantiation of an ifstream object
    ifstream istrm;
    // Opening file1 and testing if it is opened properly
    istrm.open("file1", ios::in);
    if (!istrm.is_open())
    {
        cout << "file1 cannot be opened!" << endl;        assert(false);
    }
    // Reading file1 character by character and writing to monitor
    while (istrm.get(ch))
    {
        cout.put(ch);
    }
    // Closing stream
    istrm.close();
    return 0;
}