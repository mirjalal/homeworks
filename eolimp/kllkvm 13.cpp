#include <iostream>
#include <cstdlib>
using namespace std;
int main( ) {
	int n,x,y,m,i,k=0,p=0;
	cout<<"tek sayda reqemleri olan natural ededin merkezinde yerleshen reqemi tapaq"<<'\n';
	cout<<"n-i daxil edin:";
	cin>>n;
	m=n;
	while(n!=0){
	x=n%10;
	k=k+1;
	n=n/10; }
    i=k/2+1;
 while(m!=0){
 x=m%10;
 p=p+1;
 if(p==i)
 cout<<x;
 }
	return 0;
}
