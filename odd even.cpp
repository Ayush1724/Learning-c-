#include <iostream>
using namespace std;
int main()
{ int arr[]={1,2,3,4,5,6,7,8,9,10};
int od=0,evn=0;
int sz=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<sz;i++){
	if(arr[i]%2==0){
		evn +=arr[i];
	}else{
		od+=arr[i];
	}
}
cout<<"odd :- "<<od<<" even :- "<<evn;
	return 0;
}
