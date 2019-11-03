#include <iostream>

using namespace std;

int main()
{
	int a, n;
	cin >> a;
	n=0;
	while ( (a%2)==0 )
	{
		a=a/2;
		n=n+1;
	}
	cout << a << " " << n << endl;
}
