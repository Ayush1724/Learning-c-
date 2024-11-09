#include <iostream>
using namespace std;
int main()
{ int a;
cout<<"Enter the size of arry :- ";
cin>>a;
int arr[a];
int s=sizeof(arr)/4;
for(int i=0;i<s;i++){
	cout<<"Enter the number "<<i+1<<" :- ";
	cin>>arr[i];
}
for(int i=0;i<s;i++){
	cout<<"you have entered "<<i+1<<" :- "<<arr[i]<<endl;
}
int t;
for(int i=0;i<s;i++){
	for(int j=i+1;j<s;j++){
		if(arr[i]<arr[j]){
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
}
cout<<"largest :- "<<arr[0]<<endl;
cout<<"2nd largest :- "<<arr[1]<<endl;
cout<<"3rd largest :- "<<arr[2]<<endl;
	return 0;
}
