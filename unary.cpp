#include <iostream>
using namespace std;
class abc{
	public:
		int age;
		abc(int n){
			cout<<"Enter your age :- ";
			cin>>n;
			age=n;
		}
		abc operator ++(){
			age=age*2;
		}
		void show(){
			cout<<"Double of your age is :- "<<age;
		}
};
int main()
{abc obj(0);
++obj;
obj.show();

	return 0;
}
