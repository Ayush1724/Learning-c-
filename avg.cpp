#include <iostream>
using namespace std;
int main()
{int arr[]={1,2,3,4,5,6,7,8,9,10};
float ttl=0;
float avg=0;
int s=sizeof(arr)/4;
for(int i=0;i<s;i++)
{
	ttl = ttl+arr[i];
}
avg=ttl/s;
cout<<"Average of array is :- "<<avg;
	return 0;
}
