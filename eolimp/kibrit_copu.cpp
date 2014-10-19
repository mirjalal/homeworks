/** 
 * e-herfi.cpp: Defines the entry point for the console application.
 * @author Mirjalal Talishinski
 * @compiler Dev-C++
 * @created 16.10.14
 */
 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int kub;
	string emel;
daxilEt:
	cout << "kub sayini daxil edin: ";
	cin >> kub;
	if (kub == 1)
	{
		cout << "12 kibrit copu lazimdir" << endl;
		cout << "emeliyyati tekrar etmek isteyirsinizmi? (Beli/Xeyr)" << endl;
		cin >> emel;
		if (emel == "Beli" || emel == "beli")
		{
			goto daxilEt;
		}
		else
		{
			return 0;
		}	
	}
	else if (kub > 1)
	{
		cout << 12 + (kub-1)*8 << " kibrit copu lazimdir" << endl;
		cout << "emeliyyati tekrar etmek isteyirsinizmi? (Beli/Xeyr)" << endl;
		cin >> emel;
		if (emel == "Beli" || emel == "beli")
		{
			goto daxilEt;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}

	return 0;
}

