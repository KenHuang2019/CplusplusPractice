#include <iostream>

using namespace std;

int main()
{
	int a=5, b, c;
	for (b=1; b<=a; b++)
	{
		for (c=1; c<=b; c++) cout << c;
		cout << endl;
	}
}
