#include <iostream>
using namespace std;
int main()
{ int arr[]={30,20,10,147,450,30,516,147,123,10,456,721};
int s=sizeof(arr)/sizeof(arr[0]);
int c=0;
for(int i=0;i<s;i++)
{
	if(arr[i] >=arr[i+1]){
		c =c+1;
	}
	cout<<arr[i]<<" is repeated :- "<<c<<endl;
}

	return 0;
}
