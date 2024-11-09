#include <iostream>
using namespace std;
bool pld(int);
int main()
{
	int arr[]={121,342,156,101,65,48,321,222};
	for(int i=0;i<sizeof(arr)/4;i++){
		if(pld(arr[i])){
			cout<<"Plendrom "<<arr[i]<<endl;
		}
		else
		cout<<"Not palendrom "<<arr[i]<n<endl;
	}

	return 0;
}
bool pld(int n){
	int a=n,r,rev=0;
	while (a>0){
		r=a%10;
		rev=rev*10+r;
		a=a/10;
	}
	if(rev==n)
	return true;
	else
	return false;
	
}