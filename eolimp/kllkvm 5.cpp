#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,a,b,k=0,m,x,p;
	cout<<"natural ededin birinci ve axirinci reqemlerinin yerini deyishek"<<'\n';
	cout<<"natural ededi daxil edin:";
	cin>>n;
	x=n;
	a=n%10;
	while(n!=0){
	b=n%10;
	k=k+1;
	n=n/10;
	}
	x=x/10;
m=pow(10,k-2);
p=x%m;
cout<<a<<p<<b;	
return 0;
}
