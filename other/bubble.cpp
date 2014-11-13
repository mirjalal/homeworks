#include <iostream>

using  namespace std;

int main()
{
	int array[100], n, c, d, swap;
 
	cout << "element sayini daxil edin: ";
	cin >> n;
 
	cout << n << " ededi daxil edin: " << endl;
 
	for (c = 0; c < n; c++)
	cin >> array[c];
 
	for (c = 0; c < (n - 1); c++)
	{
		for (d = 0; d < n - c - 1; d++)
		{
			if (array[d] > array[d + 1]) /* For decreasing order use < */
			{
				swap = array[d];
				array[d] = array[d + 1];
				array[d + 1] = swap;
			}
		}
	}
 
	cout << "Sorted list in ascending order:\n";
 
	for (c = 0; c < n; c++)
		cout << array[c] << endl;
     return 0;
}
