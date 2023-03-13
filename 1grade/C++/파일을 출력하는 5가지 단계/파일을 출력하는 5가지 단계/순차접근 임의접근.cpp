#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // Declaration of variables
    char ch;
    int n;
    // Instantiation of stream and opening the file
    ifstream istr;
    istr.open("sample", ios::in);
    // Getting characters and thir locations
    n = istr.tellg();
    while (istr.get(ch))
    {
        cout << n << " " << ch << endl;        n = istr.tellg();
    }
    // Closing the file
    istr.close();
    return 0;
}