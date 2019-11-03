#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	switch( a % 4 )
	{
		case 1:
			cout << "class 1" << endl;
			break;
		case 2:
			cout << "class 2" << endl;
			break;
		case 3:
			cout << "class 3" << endl;
			break;
		case 0:
			cout << "class 4" << endl;
			break;
	}
}
