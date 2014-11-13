#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
	int n,p,a,b,x,k=0, m=0;
		cout<<"ededin yazilishinda tek yerde duran reqemleri atib cut yerde duranlari cap edek"<<'\n';
	cout<<"n-i daxil edin:";
	cin>>n;
	x=n;
	while(x){
		a=x%10;
		k=k+1;
		x=x/10;
	}
	p=pow(10,k-1);
	while(n>=0 & p>=0){
		b=n%p/(p/10);
		cout<<b<<" ";	
		p=p/10;
		n=n%p;
		p=p/10;
//		m++;
//		cout<<m;
	} 
	return 0;
}
