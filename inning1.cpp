#include <iostream>
using namespace std;
class abc{
	public:
		int in1,in2,t1,t2,in3,in4;
		abc(int a, int b,int c,int d){
			cout<<"Enter the run of team 1 first inning :- ";
			cin>>a;
			cout<<"Enter the run of team 1 second inning :- ";
			cin>>b;
			in1=a;
			in2=b;
			cout<<"Enter the run of team 2 first inning :- ";
			cin>>c;
			cout<<"Enter the run of team 2 second inning :- ";
			cin>>d;
			in3=c;
			in4=d;
			t1=in1+in2;
			t2=in3+in4;
			void show(){
				cout<<"Total run scored by team 1 is "<<t1<<endl;
				cout<<"Total run scored by team 2 is"<<t2<<endl;
			}
};
int main()
{abc ob1(0,0,0,0);
ob1.show();
}

	

