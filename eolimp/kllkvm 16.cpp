#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k=0,i;
	cout<<"natural ededin sade olub olmadigini yoxlayaq"<<'\n';
	cout<<"n-i daxil edin:";
	cin>>n;
	for(i=2;i<=n;i++){
	if(n%i==0)
	k=k+1;
	}
	if(k==1)
	cout<<"eded sadedir";
	else cout<<"murekkebdir";
	return 0;
}
