#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    int n,x;
    cout<<"natural ededin yazilishinda butun sade reqemleri cap edek";
    cout<<"n-i daxil edin:";
    cin>>n;
    while(n!=0){
    x=n%10;
	if(x==3 || x==5 || x==7)
	cout<<x;	
    }
	return 0;
}
