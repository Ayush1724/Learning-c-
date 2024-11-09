 #include <iostream>
using namespace std;
int main()
{ int x=1; 
for (int i=1;i<=5;i++)
{
	for(int j=1;j<=5;j++)
	{
		cout<<x<<" ";
		x+=2;
		if(x==7){
			x+=2;
		}
		x=x%10;
	}cout<<endl;
}

	return 0;
}
