#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	for (b=1; b<=a; b++)
	{
		for (c=1; c<=a; c++)
		{
			cout << "#";
		}
		cout << endl;
	}
}
