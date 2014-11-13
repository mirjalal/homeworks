// yolka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout << "hundurluyu daxil edin: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = n; j < i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

