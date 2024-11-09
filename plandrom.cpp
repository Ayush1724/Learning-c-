#include <iostream>
using namespace std;
bool isPld(int);
int main()
{ int arr[]={23,153,152,151,175,174,250,444,333,101};
for(int i=0;i<sizeof(arr)/4;i++){
	if (isPld(arr[i])){
		cout<<"Number is pelendrom :- "<<arr[i]<<endl;
	}else{
		cout<<"Number is not pelendrom :- "<<arr[i]<<endl;
	}
}

	return 0;
}
bool isPld(int n){
	int t=n;
	int rev=0,r;
	while(t>0){
		r=t%10;
		rev=rev*0+r;
		t=t/10;
	}
	if(rev==n)
	return true;
	else
	return false;
}
