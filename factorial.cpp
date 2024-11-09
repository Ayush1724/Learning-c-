#include <iostream>
using namespace std;
int myfun(int n){
	if (n==1 ||n==0){
		return 1;
	}
	return n * myfun(n-1);
}
int main()
{
cout<<myfun(6);
	return 0;
}
