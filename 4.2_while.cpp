#include <iostream>

using namespace std;

int main()
{
	int a;
	while (1) // In C++ "0" means invalid, others number means valid, so while(1) would continue run untill if(...)break
	{
		cin >> a;
		if ( a == 0 ) break; // "break" means to end the loop
	}
}
