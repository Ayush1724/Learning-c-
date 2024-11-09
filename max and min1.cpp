#include <iostream>
using namespace std;
int main()
{int a[]={33,1,55,4,66,55,8,7,42,35,4,55,12,34,38,95,45,100,99};
int s=sizeof(a)/4;
int max,min;
max=a[0];
for(int i=0;i<s;i++){
	
	if(a[i]>max){
		max=a[i];
	}
}cout<<"MAx is "<<max<<endl;
min=a[0];
for(int i=0;i<s;i++){
	if(min>a[i]){
		min=a[i];
	}
}cout<<"Min is "<<min;

	return 0;
}
