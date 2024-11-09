#include <iostream>
using namespace std;
bool isPrime(int);
int main()
{ for(int j=10;j<=100;j++)
{
 	if(isPrime(j))
	{int r =0,rev=0,a=0;
		a=j;
		while (a>0){
			r=a%10;
			rev=rev*10+r;
			a=a/10;
		}
		cout<<"Your prime number is :- "<<j<<" and it's reverse number is :- "<<rev<<endl;
	}
	
}

	return 0;
}
bool isPrime(int n)
{
	int c=0;
	for(int i=10;i<n;i++)
	{
	  if(n%i==0)
	  {
	  	c++;
	  }	
	  
	}
	if(c==0)
	  return true;
	  else
	  return false;
}
