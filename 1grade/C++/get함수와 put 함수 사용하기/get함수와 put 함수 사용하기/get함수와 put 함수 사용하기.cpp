#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "Enter a multi-line text and EOF as the last line." << endl;
	char pre = '\n';
	while (cin.get(c))
	{
		if (pre == ' ' || pre == '\n')
		{
			cout.put(toupper(c));
		}
		else
		{
			cout.put(c);
		}
		pre = c;
	}
	return 0;
}
