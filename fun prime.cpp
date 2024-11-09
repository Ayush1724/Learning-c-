#include <iostream>
using namespace std;
bool myPrime();
int main()
{ if(myPrime()){
	cout<<"Prime number";
}else{
	cout<<"not a prime number";
}

	return 0;
}
bool myPrime(){
	int x,c=0;
	cout<<"Enter the number :- ";
	cin>>x;
	for(int i=1;i<=x;i++){
		if(x%i==0){
			c++;
		}
	}
	if(c==2){
		return true;
		}
		else{
		return false;
	}
}