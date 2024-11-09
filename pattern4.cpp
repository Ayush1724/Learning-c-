#include <iostream>
using namespace std;
int main()
{  int n = 11;
    int mid  = (n+1)/2;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if( (j==mid and i<=mid) || i==1 || j==1 || j==n)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
	return 0;
}
