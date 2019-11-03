#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Please enter a number between 1 & 100." << endl;
	cin >> a;
	while (a<1 || a>100)
	{
		cout << "Input error, Please enter a number between 1 & 100." << endl;
		cin >> a;
	}
 }
