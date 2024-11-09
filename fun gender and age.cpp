#include <iostream>
using namespace std;
bool ayush(int a,char b){
	if ((a>=18 and b=='f' || b=='F')||(a>=21 && b=='m'||b=='M'))
	return true;
	else 
	return false;
	}

int main()
{int a;
char b;
cout<<"Enter your age :- ";
cin>>a;
cout<<"Enter your gender :- ";
cin>>b;
if(ayush(a,b)){
	cout<<"You can marry";
}
else
{
	cout<<"You can't marry";
}

	return 0;
}
