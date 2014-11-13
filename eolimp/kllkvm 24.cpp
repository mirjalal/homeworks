#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
	int n,p,a,b,x,k=0;
		cout<<"ededin yazilishinda cut yerde duran reqemleri atib tek yerde duranlari cap edek"<<'\n';
	cout<<"n-i daxil edin:";
	cin>>n;
	x=n;
	while(x!=0){
		a=x%10;
		k=k+1;
		x=x/10;
	}
	p=pow(10,k-1);
	while(n>=0 & p>=0){
		b=n/p;
		cout<<b;	
		p=p/10;
		n=n%p;
		p=p/10;
	
	} 
	return 0;
}
