#include <iostream>
#include "starter.h"

using namespace std;

int main()
{
	//create a few starter objects
	//add some values to test out your values methods
	//print out all the values for each object to validate your code
	Starter_Object myObject;
	myObject.val1(2);
	myObject.val2(3);

	cout << myObject.val1() << "\n";
	cout << myObject.val2() << "\n";
}
