#include <iostream>
using namespace std;
void pali()
{
	int n,r,rev,a;
	cout<<"Enter the number :- ";
	cin>>n;
	a=n;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(a==rev){
		cout<<"Enter number is palindrome";
	}else{
		cout<<"Enter number is not palindrome";
	}
	
}
int main()
{
pali();
	return 0;
}
