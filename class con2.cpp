#include <iostream>
using namespace std;
class abc{
	public:
		int age;
		abc(int x){
			age = x;
		}
		void show(){
		cout<<"Value of age is "<<age<<endl;
		}
		abc(abc &i){
			age= i.age;
		}
};
int main()
{abc obj(31);
obj.show();
abc objcyp(obj);
objcyp.show();

	return 0;
}
