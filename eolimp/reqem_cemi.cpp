/** 
 * reqem_cemi.cpp: Counts sum of the '2 digits number digits'
 * @author Mirjalal Talishinski
 * @compiler Dev-C++
 * @created 12.10.14
 */
 
#include <iostream>

using namespace std;

int main ()
{
	int eded,birinci,ikinci;
EMEL:
	cin >> eded;
	if (eded <= 0){
		cout << "integer yaz"<<endl;
		goto EMEL;
	}
	else {
		birinci = eded/10;
		ikinci = eded%10;
	cout << birinci << " \nikinci  " << ikinci<<endl;
	
	}
	
	return 0;
}
