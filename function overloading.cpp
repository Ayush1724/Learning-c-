#include <iostream>
using namespace std;
class A{
	public:
	void show(int x){
		cout<<"Show A"<<endl;
	}
	void show(int x,int y){
		cout<<"Show b"<<endl;
	}
	void show(int x,int y,int z){
		cout<<"Show c"<<endl;
	}
	
};
int main()
{
     A obj;
    obj.show(2,3);
	return 0;
}
