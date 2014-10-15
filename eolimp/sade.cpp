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
