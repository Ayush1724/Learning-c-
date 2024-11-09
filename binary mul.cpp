#include <iostream>
using namespace std;
class abc{
	public:
		int x;
		abc(int a){
			x=a;
		}
		void show(){
			cout<<"Ans is "<<x<<endl;
		}
		abc operator -(abc temp){
			x=x*temp.x;
		}
};
int main()
{abc obj1(12);
abc obj2(10);
obj1.show();
obj2.show();
obj1-obj2;
obj1.show();

	return 0;
}
