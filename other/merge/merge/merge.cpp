// merge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void mergesort(int *a, int *b, int start, int end)
{
	int halfpoint;
	if (start < end)
	{
		halfpoint = (start + end) / 2;
		mergesort(a, b, start, halfpoint);
		mergesort(a, b, halfpoint + 1, end);
		merge(a, b, start, halfpoint, end);
	}
}

void merge(int *a, int *b, int start, int halfpoint, int end)
{
	int h, i, j, k;
	h = start;
	i = start;
	j = halfpoint + 1;

	while ((h <= halfpoint) && (j <= end))
	{
		if (a[h] <= a[j]) {
			b[i] = a[h];
			h++;
		} else {
			b[i] = a[j];
			j++;
		}
		i++;
	}
	if (h > halfpoint) {
		for (k = j; k <= end; k++)
		{
			b[i] = a[k];
			i++;
		}
	} else {
		for (k = h; k <= halfpoint; k++)
		{
			b[i] = a[k];
			i++;
		}
	}

	// Write the final sorted array to our original one
	for (k = start; k <= end; k++)
	{
		a[k] = b[k];
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	int num;
	cout << "Nece ededi sort etmek isteyirsiniz: ";
	cin >> num;
	int *a = new int(num);
	int *b = new int(num);
	for (int i = 0; i < num; i++)
	{
		cout << (i + 1) << ": ";
		cin >> a[i];
	}

	// Start merge sort
	mergesort(a, b, 0, num - 1);

	// Print the sorted array
	cout << endl;
	for (int i = 0; i < num; i++)
		cout << a[i] << " ";
	cout << endl;

	delete[] a;
	delete[] b;

	a = NULL;
	b = NULL;

	return 0;
}