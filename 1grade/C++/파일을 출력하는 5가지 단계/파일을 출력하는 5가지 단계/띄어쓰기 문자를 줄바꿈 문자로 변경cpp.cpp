#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fstr;
    fstr.open("file3", ios::in | ios::out);
    char ch;
    while (fstr.get(ch))
    {
        if (isspace(ch))
        {
            fstr.seekp(-1, ios::cur);
            fstr.put('\r');
        }
    }
    fstr.close();
    return 0;
}
