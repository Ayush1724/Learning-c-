#include <iostream>
using namespace std;
struct stud{
	int roll;
	string name;
	int cls;
	double per;
	bool result; 
}stud[10];
int main()
{
stud[0].roll=103;
stud[0].name="lalu";
stud[0].cls=11;
stud[0].per=38.62;
stud[0].result=false;

stud[1].roll=102;
stud[1].name="Ayush";
stud[1].cls=12;
stud[1].per=88.62;
stud[1].result=true;

stud[2].roll=101;
stud[2].name="LAlan";
stud[2].cls=10;
stud[2].per=68.62;
stud[2].result=true;

for(int i=0;i<3;i++){
	cout<<"Name :- "<<stud[i].name<<endl<<"class :- "<<stud[i].cls<<endl<<"Roll no. :- "<<stud[i].roll<<endl<<"Percentage :- "<<stud[i].per<<endl<<"Result :- "<<stud[i].result<<endl<<endl<<endl;
}
	return 0;
}
