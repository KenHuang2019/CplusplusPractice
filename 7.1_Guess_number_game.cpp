#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	srand(time(0)); // change the rand() function to get the random number from the built-in list
	int a=rand()%100+1, b, n=0, x=1, y=100, t=5; //"n" as a recorder, "x & y" is the number range, "t" is the chances that user has
	do {
		cout << "Guess a number between " << x << " and " << y << " , " << t-n << " times chances left." << endl;
		cin >> b;
		if (b==0)
		{
			cout << "Shut down this game." << endl;
			break;
		}
		if (b>y || b<x)
		{
			continue;
		}
		if (b>a)
		{
			cout << "Too big" << endl;
			y=b;
		}
		if (b<a)
		{
			cout << "Too small" << endl;
			x=b;
		}
		n++; // count the guessing times
		if (n==5)
		{
			cout << "You are running out of lucky." << endl;
			break;
		}
		cout << endl;
	}while(b!=a); //do-while loop will do first then check the condition
	
	if(a==b)
	{
	cout << "You're right!" << endl;
	cout << "You guess:" << n << "times." << endl;
	}
	cout << "The answer is:" << a << endl;
	cout << "Bye~";
}
