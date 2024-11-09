#include <iostream>
using namespace std;
class abc{
	public:
	abc(){
		cout<<"constuructor call"<<endl;
	}
	void show(){
		cout<<"method"<<endl;
	}
	~abc(){
		cout<<"Distructor call"<<endl;
	}
};
int main()
{abc obj;
obj.show();

	return 0;
}
