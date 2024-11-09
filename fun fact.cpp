#include <iostream>
using namespace std;
int fact(int);
int main()
{ int n;
cout<<"Enter the number :- ";
cin>>n;
cout<<"Factorial of given number is :- "<<fact(n);
	return 0;
}
int fact(int n)
{
	if (n==0 ||n==1){
		return 1;
	}
	else{
		int sum=1;
		for(int i=2;i<=n;i++){
			sum = sum*i;
		}
		return sum;
	}
}
