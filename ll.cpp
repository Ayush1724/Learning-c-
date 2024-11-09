#include <iostream>
using namespace std;
int main ()
{ int a[]={1,2,3,4,5,6,7,8,9,10};
	int s = sizeof(a)/sizeof(a[0]);
	cout<<s<<endl;
	for (int i = 0;i<s;i++){
		cout<<a[i]<<endl;}
	

		return 0;
}