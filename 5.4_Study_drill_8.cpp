#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	for ( b=1; b<=a; b++)
	{
		if (b%3 ==0) cout << "*" <<endl;
		cout << b << endl;
	}
}
