#include <iostream>
using namespace std;
class A{
	public:
		void show(int x,double y){
			cout<<"int double"<<endl;
		}
		
		void show(double x,int y){
			cout<<"double int"<<endl;
		}
		
		void show(int x,int y){
			cout<<"int int"<<endl;
		}
		
		void show(double x,double y){
			cout<<"double double"<<endl;
		}
};
int main()
{ A obj;
	obj.show(2.3,2.5);
	obj.show(1,2);

	return 0;
}
