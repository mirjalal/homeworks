#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,j,bsv,n;
	cout<<"n ededini daxil et:";
	cin>>n;
	for(i=2;i<=n/2;i++)	
	{j=i; if(n%j==0)  bsv=j;
	while(n%j==0)
	n/=j;
	if(n<=j)
	break;
	}
	if(bsv!=1)
	cout<<"bsv="<<bsv;
	else
	cout<<"bsv="<<n;
	return 0;
}
