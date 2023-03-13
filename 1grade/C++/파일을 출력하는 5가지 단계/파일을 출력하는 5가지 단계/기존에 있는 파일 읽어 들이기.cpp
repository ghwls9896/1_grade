#include <iostream>
#include <fstream>
#include <cassert> 
using namespace std;
int main()
{
    int data;
    // Instantiation of an ifstream object
    ifstream inStrm;
    // Connection of the existing file to the ifstream object
    inStrm.open("IntegerFile");
    if (!inStrm.is_open()
    {
        cout << "integerFile cannot be opened!";
        assert(false);    }
    // Reading from the ifstream object and writing to the cout object
    for (int i = 1; i <= 10; i++)
    {
        inStrm >> data;
        cout << data << " ";
    }
    // Disconnection of the IntegerFile from the ifstream
    inStrm.close();
    // Destruction of the ifstream object is done after return
    return 0;
}