#include <iostream>
using namespace std;
int main()
{ int arr[5]={1,2,3,4,5};
  int brr[5]={6,7,8,9,10};
  int crr[5]={11,12,13,14,15};
  int drr[5]={16,17,18,19,20};
  int ttl[4];
  for (int i=0;i<4;i++){
  	ttl[i]=0;
  	if(i==0){
  		for(int j=0;j<5;j++){
  			ttl[i]=ttl[i]+arr[i];
		  }
	  }
	  if(i==1){
  		for(int j=0;j<5;j++){
  			ttl[i]=ttl[i]+brr[i];
		  }
	  }
	  if(i==2){
  		for(int j=0;j<5;j++){
  			ttl[i]=ttl[i]+crr[i];
		  }
	  }
	  if(i==3){
  		for(int j=0;j<5;j++){
  			ttl[i]=ttl[i]+drr[i];
		  }
	  }
	  
  }
  for(int i=0;i<5;i++){
	  	cout<<ttl[i]<<" "<<endl;
	  }

	return 0;
}
