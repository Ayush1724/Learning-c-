#include <iostream>
using namespace std;
struct stud{
	int roll;
	string name;
	int cls;
	double per;
	bool result; 
};
int main()
{ stud s1,s2;
s1.roll=101;
s1.name="Ayush";
s1.cls=12;
s1.per=78.85;
s1.result=true;

s2.roll=103;
s2.name="lalu";
s2.cls=11;
s2.per=38.62;
s2.result=false;

cout<<"Name :- "<<s1.name<<endl<<"class :- "<<s1.cls<<endl<<"Roll no. :- "<<s1.roll<<endl<<"Percentage :- "<<s1.per<<endl<<"Result :- "<<s1.result<<endl<<endl<<endl;
cout<<"Name :- "<<s2.name<<endl<<"class :- "<<s2.cls<<endl<<"Roll no. :- "<<s2.roll<<endl<<"Percentage :- "<<s2.per<<endl<<"Result :- "<<s2.result<<endl;
	return 0;
}
