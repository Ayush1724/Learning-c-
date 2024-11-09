#include <iostream>
using namespace std;
class abc{
	public:
		int x;
		abc(int n){
			x=n;
		}
		void show(){
			cout<<"Ans is "<<x<<endl;
		}
		abc operator -(abc temp){
			x=x+temp.x;
		}
};
int main()
{abc obj1(42);
abc obj2(43);
obj1.show();
obj2.show();
obj1-obj2;
obj1.show();

	return 0;
}
