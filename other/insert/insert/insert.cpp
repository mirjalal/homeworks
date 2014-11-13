// insert.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int S[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> S[i];
	}

	int N = sizeof(S) / sizeof(int);

	for (int i = 1; i<N; i++) {
		int j = i - 1;
		int temp = S[i];

		while (j >= 0 && S[j] > temp) {
			S[j + 1] = S[j];
			j--;
		}

		S[j + 1] = temp;
	}

	for (int i = 0; i<N; i++) {
		cout << S[i] << " ";
	}
	return 0;
}

