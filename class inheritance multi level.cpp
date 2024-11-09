#include <iostream>
using namespace std;
class papa{
	public:
		void home(){
			cout<<"This is papa house "<<endl;
		}
};
class mom:public papa{
	public:
		void sab(){
			cout<<"This is mom's world "<<endl;
		}
};
class son:public mom{
	public:
		void bike(){
			cout<<"This is son bike "<<endl;
		}
};
int main()
{son abc;
abc.home();
abc.bike();
abc.sab();

	return 0;
}
