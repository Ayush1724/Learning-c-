#include <iostream>
using namespace std;
class abc{
	int num1,num2;
	public:
		abc(int a,int b){
			num1=a;
			num2=b;
		}
		void show(){
			cout<<"Number 1:- "<<num1<<" Number 2:- "<<num2<<endl;
		}
		abc operator +(abc &obj){
			abc temp(0,0);
			temp.num1=(num1 >obj.num1)?(num1):(obj.num1);
			temp.num2=(num2 >obj.num2)?(num2):(obj.num2);
		}
};
int main()
{
	abc ob1(12,5);
	ob1.show();
	abc ob2(4,17);
	ob2.show();
	abc ob3(0,0);
	ob3=ob1+ob2;
	ob3.show();

	return 0;
}
