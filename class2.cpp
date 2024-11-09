#include <iostream>
using namespace std;
struct stud{
	int roll;
	string name;
	int cls;
	int marks[5];
	double per;
	bool result;
	
} stud[10];

void getdata()
{
	int s;
	cout<<"Enter the number of student :- ";
	cin>>s;
	for (int i =0;i<s;i++)
	{
		cout<<"Enter the roll no. :- ";
		cin>>stud[i].roll;
		cout<<"Enter the name :- ";
		cin>>stud[i].name;
		cout<<"Enter the Class :- ";
		cin>>stud[i].cls;
		
		cout<<"Enter the marks :- "<<endl;
		float ttl=0;
		for(int j=0;j<5;j++)
		{
			cout<<"Enter the marks of subject "<<j+1 <<" :- ";
			cin>>stud[i].marks[j];
			ttl +=stud[i].marks[j];
		}
		stud[i].per=ttl/5;
		if(stud[i].per>50)
		{
			stud[i].result=true;
		}
		else
		stud[i].result=false;
	}
	for(int i=0;i<s;i++)
	cout<<"Name :- "<<stud[i].name<<endl<<"Class :- "<<stud[i].cls<<endl<<"Roll no. :- "<<stud[i].roll<<endl<<"Percentage :- "<<stud[i].per<<endl<<"Result :- "<<stud[i].result<<endl<<endl<<endl;
}

int main()
{getdata();

	return 0;
}
