#include <iostream>
using namespace std;
int main()
{ int arr[]={2,121,41,4,54,5,6,457,635,4599,325,14779,2556,99999};
int s= sizeof(arr)/sizeof(arr[0]);
int max=arr[0];
for(int i=0;i<s;i++)
{
	if(arr[i] < arr[i+1] <arr[i+2])
	{
		max=arr[i+1];
	}
}
cout<<"max :- "<<max<<endl;

	return 0;
}
