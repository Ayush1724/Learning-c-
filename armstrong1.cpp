#include <iostream>
#include <math.h>
using namespace std;
bool arm(int n){
	int a=n,arm=0,cod=0,r;
	while(n>0){
		cod+=1;
		n=n/10;
	}
	n=a;
	while(n>0){
		r=n%10;
		arm=arm+pow(r,cod);
		n=n/10;
	}
	if(a==arm){
		return true;
	}else{
		return false;
	}
}
int main()
{int arr[]={153,171,172,564,894,142,21};
for(int i=0;i<sizeof(arr)/4;i++){
	if(arm(arr[i])){
		cout<<"ARmstrong "<<arr[i]<<endl;
	}
	else
	cout<<"Not a armstrong "<<arr[i]<<endl;
}

	return 0;
}
