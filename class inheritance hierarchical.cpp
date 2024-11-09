#include <iostream>
using namespace std;
class papa{
	public:
		void home(){
			cout<<"This papa house"<<endl;
		}
};
class son:public papa{
	public:
		void bike(){
			cout<<"This is son bike "<<endl;
		}
};
class daug:public papa{
	public:
		void makeup(){
		cout<<"This is daughter makeup "<<endl;
		}
};
int main()
{son o1;
daug o2;
o1.bike();
o1.home();
o2.home();
o2.makeup();

	return 0;
}
