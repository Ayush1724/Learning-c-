#include <iostream>
using namespace std;
class papa{
	public:
		void home(){
			cout<<"this is papa house "<<endl;
		}
};
class mom{
	public:
		void sabkuch(){
			cout<<"this is mom world "<<endl;
		}
};
class son:public papa,public mom{
	public:
		void bike()
		{
		cout<<"This is son bike "<<endl;
		}
};
int main()
{son abc;
abc.bike();
abc.home();
abc.sabkuch();

	return 0;
}
