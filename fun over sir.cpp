#include <iostream>
using namespace std;

class A{
    public:
    void show(int x)
    {
        cout<<"SHOW A"<<endl;
    }

    void show(int x, int y)
    {
        cout<<"SHOW B"<<endl;
    }
    
    void show(int x, int y, int z)
    {
        cout<<"SHOW C"<<endl;
    }

};

int main()
{
    A obj;
    obj.show(2,6,7);
    
    return 0;
}