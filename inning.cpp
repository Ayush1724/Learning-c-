#include <iostream>
using namespace std;
class abc{
	public:
		int in1,in2,t1,t2;
		abc(int a, int b){
			cout<<"Enter the run of first inning :- ";
			cin>>a;
			cout<<"Enter the run of second inning :- ";
			cin>>b;
			in1=a;
			in2=b;
		}
		void show(){
			cout<<"Total run is "<<in1<<"+"<<in2<<" = "<<in1+in2<<endl;
		}
		abc operator +(abc &obj){
			abc temp(0,0);
			temp.t1=in1+in2;
			temp.t2=obj.in1+obj.in2;
			return temp;
		}
			abc temp(0,0);
			if (temp.t1>temp.t2){
				cout<<"Team 1 win the match by "<<temp.t1-temp.t2<<endl;
			}
			else{
				cout<<"Team 2 win the match by "<<temp.t2-temp.t1<<endl;
			}
			
		}
};
int main()
{
abc ob1(0,0);
ob1.show();
abc ob2(0,0);
ob2.show();
abc ob3(0,0);
ob3=ob1+ob2;
ob3=ob1>ob2;
	return 0;
}
