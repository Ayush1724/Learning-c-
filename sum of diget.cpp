#include <iostream>
using namespace std;
void mysum()
{
	int n,r,rev,a;
	cout<<"Enter the number :- ";
	cin>>n;
	a=n;
	while(n>0){
		r=n%10;
		rev=rev+r;
		n=n/10;
		
		}
		cout<<"sum of number is "<<rev;
		}
int main()
{ 
mysum();

	return 0;
}
