#include <iostream>
using namespace std;
struct vote{
	int age;
	char gen;
	char v;
}vote[10];


void age(){
	int p;
	cout<<"Enter the number of people came :- ";
	cin>>p;
	int ttla=0,ttlb=0,ttlc=0,ttld=0;
	int c=0;
	for (int i=0;i<p;i++){
		cout<<"Enter the gender :- ";
	cin>>vote[i].gen;
	cout<<"Enter the age :- ";
	cin>>vote[i].age;
	if(vote[i].age>=18){
		c=c+1;
		cout<<"You vote for (A,B,C,D):- ";
		cin>>vote[i].v;
		char vo=vote[i].v;
		if(vote[i].v=='A'){
			ttla +=1;
		}else if(vote[i].v=='B') {
			ttlb +=1;
				}
				else if(vote[i].v=='C') {
			ttlc +=1;
				}
				else if(vote[i].v=='D') {
			ttld +=1;
				}
	}else
	{cout<<"Your under age";
	}
	
	
}	
if(ttla>ttlb && ttla>ttlc &&ttla>ttld ){
	cout<<"A won the election .Total vote he got is :- "<<ttla<<endl;
}
else if(ttlb>ttla && ttlb>ttlc &&ttlb>ttld ){
	cout<<"B won the election .Total vote he got is :- "<<ttlb<<endl;
}
else if(ttlc>ttla && ttlc>ttlb &&ttlc>ttld ){
	cout<<"C won the election .Total vote he got is :- "<<ttlc<<endl;
}else
cout<<"D won the election .Total vote he got is :- "<<ttld<<endl;
	
}

int main()
{
age();
	return 0;
}
