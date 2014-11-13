#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,a,b,max,min,s;
	cout<<"natural ededin yazilishinda en boyuk ve en kicik reqemlerin cemini tapaq"<<'\n';
	cout<<"n-i daxil edin:";
	cin>>n;
	max=0;
	min=9;
	while(n!=0){
	a=n%10;
	if(a>max)
	max=a;
	if(a<min)	
	min=a;
	n=n/10;
	}
	s=min+max;
	cout<<"s="<<s;
	return 0;
}
