#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,a,max=0,min=9;
	cout<<"natural ededin maksimum ve minimum reqemlerini tapaq:)"<<'\n';
	cout<<"n-i daxil edin";
	cin>>n;
	while(n!=0){
		a=n%10;
		if(a>max)
		max=a;
		if(a<min)
		min=a;
		n=n/10;
	}cout<<"max="<<max;
	cout<<"min="<<min;
	return 0;
}
