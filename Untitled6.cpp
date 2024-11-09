#include <iostream>
using namespace std;
int main()
{ int arr[]={245,123,456,741,852,963,456,789,145,159,753,486,426,135,486};
  for(int i=0;i<15;i++){
  	cout<<arr[i];
if (i<13){
	cout<<",";
}else if(i==13){
	cout<<" and ";
}
}

	return 0;
}
