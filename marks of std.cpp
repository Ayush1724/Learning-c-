#include <iostream>
using namespace std;
int main()
{ int std1[5];
int std2[5];
int std3[5];
int std4[5];
int std5[5];
float ttl1, ttl2,ttl3,ttl4,ttl5;
for (int i=0;i<5;i++)
{
	cout<<"Enter student 1 marks of "<<i+1<<" subject :- ";
	cin>>std1[i];
}cout<<endl;
for (int i=0;i<5;i++)
{
	cout<<"Enter student 2 marks of "<<i+1<<" subject :- ";
	cin>>std2[i];
}cout<<endl;
for (int i=0;i<5;i++)
{
	cout<<"Enter student 3 marks of "<<i+1<<" subject :- ";
	cin>>std3[i];
}cout<<endl;
for (int i=0;i<5;i++)
{
	cout<<"Enter student 4 marks of "<<i+1<<" subject :- ";
	cin>>std4[i];
}cout<<endl;
for (int i=0;i<5;i++)
{
	cout<<"Enter student 5 marks of "<<i+1<<" subject :- ";
	cin>>std5[i];
}cout<<endl;
for(int i=0;i<5;i++){


ttl1=ttl1+std1[i];
ttl2=ttl2+std2[i];
ttl3=ttl3+std3[i];
ttl4=ttl4+std4[i];
ttl5=ttl5+std5[i];
}
float per1,per2,per3,per4,per5;
per1 =ttl1/5;
per2 =ttl2/5;
per3 =ttl3/5;
per4 =ttl4/5;
per5 =ttl5/5;
cout<<"Total marks if student 1 is :- "<<ttl1<<" and percentage is "<<per1<<endl;
cout<<"Total marks if student 2 is :- "<<ttl2<<" and percentage is "<<per2<<endl;
cout<<"Total marks if student 3 is :- "<<ttl3<<" and percentage is "<<per3<<endl;
cout<<"Total marks if student 4 is :- "<<ttl4<<" and percentage is "<<per4<<endl;
cout<<"Total marks if student 5 is :- "<<ttl5<<" and percentage is "<<per5<<endl;
cout<<endl;
if(per1>per2 && per1>per3 && per1>per4 && per1>per5 ){
	cout<<"Student 1 is topper with :- "<<per1<<" %";
}
else if(per2>per1 && per2>per3 && per2>per4 && per2>per5 ){
	cout<<"Student 2 is topper with :- "<<per2<<" %";
}
else if(per3>per2 && per3>per1 && per3>per4 && per3>per5 ){
	cout<<"Student 3 is topper with :- "<<per3<<" %";
}
else if(per4>per2 && per4>per3 && per4>per1 && per4>per5 ){
	cout<<"Student 4 is topper with :- "<<per4<<" %";
}
else if(per5>per2 && per5>per3 && per5>per4 && per5>per1 ){
	cout<<"Student 5 is topper with :- "<<per5<<" %";
}
	return 0;
}
