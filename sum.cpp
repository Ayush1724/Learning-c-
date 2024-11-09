#include <iostream>
using namespace std;
int myfun(int n){
	if (n==1){
		return 1;
	}
	return n + myfun(n-1);
}
int main()
{ cout<<myfun(10);

	return 0;
}
