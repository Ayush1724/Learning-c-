#include <iostream>
using namespace std;
 bool prm(int n){
	int cod ;
	for(int i = 1;i<=n;i++){
		if(n%i==0){
			cod=cod+1;
		}
	if(cod==2){
		return true;
	}else {
		return false;
	}
	}
}
int main ()
{
	int a[]={11,25,554,6,1,144,56,85,21,13,17,19,65,74};
	int s=sizeof(a)/sizeof(a[0]);
	for (int i = 0;i<s;i++){
		if(prm(a[i])){
		cout<<"number is prime : "<<a[i]<<endl;	
		}else{
			cout<<"number is not prime : "<<a[i]<<endl;
		}
	}
		return 0;
}