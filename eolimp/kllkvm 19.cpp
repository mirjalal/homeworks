#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int n,i,k=0;
cout<<"natural ededin cut bolenlerinin sayini tapaq"<<'\n';
cout<<"n-i daxil edin:";
cin>>n;
for(i=2;i<=n;i++){
if((i%2==0) && (n%i==0))
k=k+1;	
}
cout<<"k="<<k;	
	return 0;
}
