#include <iostream>
using namespace std;
void myPrime()
{
	int x=10,y=100,c=0;
	while(x<=y)
	{
		for(int i=1;i<=x;i++)
		if(x%i==0)
		{
			c++;
		}
	if(c==2)
	{
		cout<<"following number is prime number :- "<<x<<endl;
	} 
	c=0;      
	x++;
	}
	}
int main()
{
myPrime();
	return 0;
}
