#include <iostream>
using namespace std;
int main()
{
 int arr[]={30,20,10,450,516,147,123,456,721};
 int s=sizeof(arr)/sizeof(arr[0]);
 int min=arr[0],max=0;
 for(int i=0;i<s;i++)
 {
 	if(arr[i]<arr[i+1]){
 		max=arr[i+1];
	 }
	 if(arr[i]<min){
	 	min=arr[i];
	 }
 }cout<<"Largest :- "<<max<<endl;
 cout<<"Smallest :- "<<min<<endl;
	return 0;
}
