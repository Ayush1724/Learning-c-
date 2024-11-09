#include <iostream>
using namespace std;
class abc{
	public:
		int real,img;
		abc(int r,int i){
			real = r;
			img = i;
		}
		void show(){
			cout<<real<<" + "<<img<<"j"<<endl;
		}
		abc operator *(abc &obj){
			abc temp(0,0);
			temp.real=real+obj.real;
			temp.img=img+obj.img;
			return temp;
		}
};
int main ()
{
abc obj1(2,3);
abc obj2(4,5);
obj1.show();
obj2.show();
abc obj3(0,0);
obj3=obj1*obj2;
obj3.show();
		return 0;
}