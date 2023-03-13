#include <iostream>
#include "Employee.h"

using namespace std;
int main()
{
	while (true) {
		Employee app;
		int sel = app.menu();
		int flag_out = app.choice(sel);
		if (flag_out == 1)
		{
			break;
		}
	}
}