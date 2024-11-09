#include <iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Contant A "<<endl;
		}
		void getpaisa(){
			cout<<"5000"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"Contant B"<<endl;
		}
};
class C:public A{
	public:
		C(){
			cout<<"Contant C"<<endl;
		}
};
class D:public C,public B{
	public:
		D(){
			cout<<"Contant D"<<endl;
		}
};
int main()
{ D d;

//d.getpaisa();

	return 0;
}
