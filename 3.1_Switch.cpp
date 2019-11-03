#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	switch( a ) // when we got lots of conditions, se could use switch() to describe it
	{
		case 1:
			cout << "option 1" << endl;
			break;
		case 2:
			cout << "option 2" << endl;
			break;
		case 3:
			cout << "option 3" << endl;
			break;
		case 4:
			cout << "option 4" << endl;
			break;
		case 5:
			cout << "option 5" << endl;
			break;
		default:
			cout << "other" << endl;
			break;
	}
}
