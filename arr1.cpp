#include <iostream>
using namespace std;
int main()
{int arr[]={1,22,55,45,66,74,85,95,15,22,335,45,66,754,12};
int s=sizeof(arr)/sizeof(arr[0]);
int ttl;
cout<<"Orignal array :- "<<endl;
for(int i=0;i<s;i++){
	ttl=ttl+arr[i];
	cout<<arr[i]<<" ";
}cout<<endl<<endl;
cout<<"Total of array is :- "<<ttl<<endl<<endl;
cout<<"Reverse of array is :- "<<endl;
for(int i=s-1;i>=0;i--){
	cout<<arr[i]<<" ";
}


	return 0;
}
