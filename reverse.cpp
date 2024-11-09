#include <iostream>
using namespace std;
int main()
{ int arr[]={1,2,3,4,5,6,7,8,9,10};
int s=sizeof(arr)/4;
cout<<"Orignal array :- ";
for(int i=0;i<s;i++){
	cout<<arr[i]<<" ";
}cout<<endl;
cout<<"Reverse of array :- ";

for(int i=s-1;i>=0;i--){
	cout<<arr[i]<<" ";
}

	return 0;
}
