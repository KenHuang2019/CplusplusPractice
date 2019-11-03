#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	if (a<b)
	{
		c=a;
		a=b;
		b=c; // make sure the bigger number would be print out first
	}
	cout << a << b << endl;
}
