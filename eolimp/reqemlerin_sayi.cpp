/** 
 * @author Mirjalal Talishinski
 * @compiler Dev C++
 * @license standart student license
 * @created 12.10.14
 */
 
#include <iostream>

using namespace std;

int main()
{
	int eded;  //// max 18446744073709551615
	int  say = 0;
daxil_et:
	cout << "\nededi daxil edin: ";
	cin >> eded;
	if (eded < 0) {
		cout << "natural eded daxil edin." << endl;
		goto daxil_et;
	}
	while (eded != 0 && eded > 0)
	{
		eded /= 10;
		say++;
	}
	cout << "reqemlerin sayi: " << say << endl;
	return 0;
}
