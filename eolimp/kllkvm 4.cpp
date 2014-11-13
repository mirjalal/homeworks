#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	int n,a;
	cout<<"natural ededi tersine cap edek"<<'\n';
	cout<<"n-i daxil edin:";
	cin>>n;
	while(n!=0){
		a=n%10;
	cout<<a;
		n=n/10;
	} 
	return 0;
}
