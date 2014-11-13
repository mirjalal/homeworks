#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m,k=0,a,s=0;
	cout<<"n natural ededinin sununcu m sayda reqemleri cemini tapaq"<<'\n';
	cout<<"n-i ve m-i daxil edin"<<'\n';
	cin>>n;
	cin>>m;
	while(n!=0){
	a=n%10;
	k=k+1;
	n=n/10;
	if(k<=m)
	s=s+a;	
	}
	cout<<"s="<<s;
	return 0;
}
