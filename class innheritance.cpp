#include <iostream>
using namespace std;
class papa{
	public:
		void home()
		{
		cout<<"This is papa house "<<endl;
		}
};
class son:public papa{
	public:
		void bike(){
			cout<<"this is son bike "<<endl;
		}
};
int main()
{son obj;
obj.bike();
obj.home();

	return 0;
}
