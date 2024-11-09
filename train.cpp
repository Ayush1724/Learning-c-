#include <iostream>
using namespace std;
int main()
{ int a;
cout<<"Enter the seat no. :- ";
cin>>a;
if(a<0 or a>72){
	cout<<"Invalid seat number.";
}
else{

	if(a%8==0){
		cout<<"Side upper";
	}
	else if(a%8==7){
		cout<<"Side lower";
	}
	else if(a%8==1 or a%8==4){
		cout<<"lower berth";
	}
	else if(a%8==2 or a%8==5){
		cout<<"middle berth";
	}
	else if(a%8==3 or a%8==6){
		cout<<"upper berth";
	}
	
}
	return 0;
}
