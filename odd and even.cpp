#include <iostream>
using namespace std;
int main()
{int a[]={1,22,34,55,68,99,74,71,35,65,452,123,489,211,121,35,31,41};
int s=sizeof(a)/4;
int even[s],odd[s];
int evin=0,odin=0;
for(int i=0;i<s;i++){
	if(a[i]%2==0){
		even[evin++]=a[i];
	}else{
		odd[odin++]=a[i];
	}
}
cout<<"EVEN NUMBER ARE :- ";
for(int i =0;i<evin;i++){
	cout<<even[i]<<" ";
}
cout<<endl;
cout<<"ODD NUMBER ARE :- ";
for(int i=0;i<odin;i++){
	cout<<odd[i]<<" ";
}
	return 0;
}
