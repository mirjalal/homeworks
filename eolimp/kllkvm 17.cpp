#include <iostream>
#include <cstdlib>
using namespace std;
int main( ) {
	int n,x,i=0,k;
	cout<<"natura ededin yazilishinda k sayli reqemi tapaq"<<'\n';
	cout<<"n-i ve k-ni  daxil edin:";
	cin>>n;
	cin>>k;
	while(n!=0){
	x=n%x;
	i=i+1;
	if(k=i)
	cout<<x;
	n=n/10;
	}
	return 0;
}
