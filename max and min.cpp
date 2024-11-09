#include <iostream>
using namespace std;
class abc{
	int n1,n2;
	public:
		abc(int a,int b){
			n1=a;
			n2=b;
		}
		void show(){
			cout<<"Number 1 :- "<<n1<<"Number 2 :- "<<n2<<endl;
		}
		abc operator >(abc &obj){
			abc temp(0,0);
			temp.n1=(n1>obj.n1)?(n1):(obj.n1);
			temp.n2=(n2>obj.n2)?(n2):(obj.n2);
			return temp;
		}
};
int main()
{
abc ob1(12,5);
ob1.show();
abc ob2(4,17);
ob2.show();
abc ob3(0,0);
ob3=ob1>ob2;
ob3.show();
	return 0;
}
