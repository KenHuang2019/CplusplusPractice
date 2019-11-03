#include <iostream>

using namespace std;

int main()
{
	int a=5, b, c;
	for (b=1; b<=a ; b++)
	{
		for (c=1; c<=b; c++) cout << "#";
		cout << endl;
	}
	b=b-2;
	for (b; b>0; b--)
	{
		for (c=b; c>0; c--) cout << "#";
		cout << endl;
	}
}
