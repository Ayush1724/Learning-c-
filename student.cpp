#include <iostream>
#include <fstream>
using namespace std;
int main()
{ ofstream obj("student.txt");
float st,p,c,m,t,per;
if (obj.is_open()){
	for (int i=1;i<=5;i++){
		cout<<"Enter the marks of physics of student "<<i<<" :- ";
		cin>>p;
		cout<<"Enter the marks of chemistry of student "<<i<<" :- ";
		cin>>c;
		cout<<"Enter the marks of math of student "<<i<<" :- ";
		cin>>m;
		obj<<"Student "<<i<<" : "<<" Physics = "<<p<<", Chemistry = "<<c<<", Maths = "<<m<<", Total :- "<<p+c+m<<", Percentage :- "<<(p+c+m)/3<<endl<<endl<<endl;
		
		
		
	}
	obj.close();
}else{
	cout<<"There is no file ";
}

	return 0;
}
