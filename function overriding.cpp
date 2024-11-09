#include <iostream>
using namespace std;
class A{
	public:
		void show(int x){
			cout<<"Papa ki dukan"<<endl;
		}
		
		};
class B:public A{
	public:
		void show(int y){
			cout<<"Sons ki shop"<<endl;
		}
};		
int main()
{
B obj;
obj.show(45);
	return 0;
}
