#include<iostream>
#include "ArrLib.h"

using namespace std;

int main(int argc, char* argv[])
{
	ArrayList list, list1;
	for (int i = 0; i < 15; ++i)
	{
		list[i] = i;
		list1[i] = 14 - i;
	}

	cout << "list1: " << list1 << endl;
	cout << "list: " << list << endl;

	list = list1;
	cout << "new list: " << list << endl;
	
	return EXIT_SUCCESS;
}