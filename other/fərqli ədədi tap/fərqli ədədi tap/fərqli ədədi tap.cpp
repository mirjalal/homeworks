// fərqli ədədi tap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int k, i, j;
	cin >> j;
	k = 1;
	cin >> i;
	while (i)
	{
		if (i != j)
		{
			cout << "= deyil" << endl;
			k = 0;
			break;
		}
		j = i;
		cin >> i;
	}
	if (k)
		cout << "= dir" << endl;
	
	return 0;
}

