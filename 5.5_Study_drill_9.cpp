#include <iostream>

using namespace std;

int main()
{
	int a, b, c=0;
	cin >> a;
	for (b=1; b<=a; b++)
	{
	if (b%7 == 0 || (b-7)%10 == 0) c++;
	}
	cout << c << endl;
}
