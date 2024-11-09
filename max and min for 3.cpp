#include <iostream>
using namespace std;
class abc{
	int n1,n2,n3;
	public:
		abc(int a,int b,int c){
			n1=a;
			n2=b;
			n3=c;
		}
		void show(){
			cout<<"Number 1 :- "<<n1<<" Number 2 :- "<<n2<<" Number 3 :- "<<n3<<endl;
		}
		abc operator >(abc &obj){
			abc temp(0,0,0);
			temp.n1=(n1>obj.n1)?(n1):(obj.n1);
			temp.n2=(n2>obj.n2)?(n2):(obj.n2);
			temp.n3=(n3>obj.n3)?(n3):(obj.n3);
			return temp;
		}
		abc operator <(abc &obj){
			abc temp(0,0,0);
			temp.n1=(n1<obj.n1)?(n1):(obj.n1);
			temp.n2=(n2<obj.n2)?(n2):(obj.n2);
			temp.n3=(n3<obj.n3)?(n3):(obj.n3);
			return temp;
		}
};
int main()
{abc ob1(21,22,12);
ob1.show();
abc ob2(12,26,10);
ob2.show();
abc obmax(0,0,0);
obmax=ob1>ob2;
cout<<" max value :- "<<endl;
obmax.show();
abc obmin(0,0,0);
obmin=ob1<ob2;
cout<<" Min value :- "<<endl;
obmin.show();
	return 0;
}
