#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k=0;
	cout<<"natural ededin reqemleri sayini tapaq"<<'\n';
	cout<<"n-i daxil edin:";
	cin>>n;
	while(n%10!=0){
	k=k+1;
	n=n/10;
	}
	cout<<"k="<<k;
	return 0;
}
