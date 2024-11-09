#include <iostream>
#include <Thread>
using namespace std;

void a()
{
    for(int i=1; i<=100; i++)
    {
        cout<<"T1 "<<i<<endl;
    }
}
void b()
{
    for(int i=1; i<=100; i++)
    {
        cout<<"T2 "<<i<<endl;
    }
}
void c()
{
    for(int i=1; i<=100; i++)
    {
        cout<<"T3 "<<i<<endl;
    }
}
int main()
{
    thread tt1(a);
    thread tt2(b);
    thread tt3(c);

    tt1.join();
    tt2.join();
    tt3.join();
    
   
    
    return 0;
}