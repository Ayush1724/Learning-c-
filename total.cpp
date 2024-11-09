#include <iostream>
using namespace std;
int main()
{ int arr[5]={1,2,3,4,5};
  int brr[5]={6,7,8,9,10};
  int crr[5]={11,12,13,14,15};
  int drr[5]={16,17,18,19,20};
  int t1=0,t2=0,t3=0,t4=0;
  for (int i=0;i<5;i++){
  	t1=t1+arr[i];
  	t2=t2+brr[i];
  	t3=t3+crr[i];
  	t4=t4+drr[i];
  }
  cout<<" arr :- "<<t1<<" brr :- "<<t2<<" crr :- "<<t3<<" drr :- "<<t4<<endl;
	return 0;
}
