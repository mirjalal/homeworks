#include <iostream>
#include <cstdlib>
using namespace std;
int main( ){ 
	int n,a,b,s;
	cout<<"natural ededin evvelden ve axirdan ikinci reqemlerinin cemini tapaq"<<'\n';
	cout<<"n-i daxil edin:";
	cin>>n;
	a=(n%100)%10;
	while(n!=0){
	b=n%10;
	n=n/10;
	}
	s=a+b;
	cout<<s;
	return 0;
}


