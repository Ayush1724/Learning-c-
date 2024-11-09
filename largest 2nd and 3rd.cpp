#include <iostream>
using namespace std;
int main()
{int a;
cout<<"Enter the size of array :- ";
cin>>a;
int arr[a];
int s=sizeof(arr)/4;
for(int i=0;i<s;i++){
	cout<<"Enter the number "<<i+1<<" :- ";
	cin>>arr[i];
}
for(int i=0;i<s;i++){
	cout<<"Yo'all have entered "<<i+1<<" :- "<<arr[i]<<endl;
}
int temp;
for(int i=0;i<s;i++){
	for(int j=i+1;j<s;j++){
		if(arr[i]<arr[j]){
			temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
}

cout<<"LArgest number is "<<arr[0]<<endl;
cout<<"SEcond largest number is "<<arr[1];
	return 0;
}
