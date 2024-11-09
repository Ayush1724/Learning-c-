#include <iostream>
using namespace std;
int main()
{int arr[] = {1,34,5,456,56,7,67,8,6789,789,8457};
	int s = sizeof(arr)/4;
	
	int max = arr[0];
	for(int i=0; i<s; i++)
	{
		if(arr[i] < arr[i+1])
		{
			max = arr[i+1];
		}
	}
	
	cout<<max;

	return 0;
}
