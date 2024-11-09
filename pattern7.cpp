#include <iostream>
using namespace std;
int main()
{ int n;
cout<<"Enter the number :- ";
cin>>n;
int mid =(n+1)/2;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		if(i==mid||j==mid||(i==1 and j>=mid)||(i==n and j<=mid)||(j==1 and i<=mid)||(j==n and i>=mid)){
			cout<<"* ";
		}else {
			cout<<"  ";
		}
	}cout<<endl;
}

	return 0;
}
