#include <iostream>
#include <cstdlib>
using namespace std;

int main( ) {
	int n,k=0,x,s=0;
	cout<<"natural ededin tek yerde duran reqemleri cemini tapaq"<<'\n';
	cout<<"n-i daxil edin:"<<'\n';
	cin>>n;
	while(n!=0){
	x=n%10;
	k=k+1;
	n=n/10;
	if(k%2==1)
	s=s+x;	
	}
	cout<<"s="<<s;
	return 0;
}
