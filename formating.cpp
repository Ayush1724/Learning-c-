#include <iostream>
using namespace std;
int main()
{int a[]={1,3,2,4,5,6,7,8,9,10};
int s=sizeof(a)/4;
for(int i=0;i<10;i++){
	cout<<a[i];
	if(i<8){
		cout<<" , ";
	}
	else if(i==8){
		cout<<" and ";
	}
	
}


	return 0;
}
