#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a line of integers and eof at the end: " << endl;
	while (cin >> n)
	{
		cout << n * 2 << " ";
	}
	return 0;
}
