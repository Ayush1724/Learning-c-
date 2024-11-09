#include <iostream>
using namespace std;
bool isPrime();
int main()
{
    if(isPrime())
    {
        cout<<"This is prime ";
    }
    else
    {
        cout<<"This is not prime ";
    }
    
    return 0;
}

bool isPrime()
{
    int n, c=0;
    cout<<"Enter number for chk is prime or not : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        c++;
    } 
    if(c==2)
    return true;
    else
    return false;
}
