#include <iostream>
#include <Thread>
using namespace std;
int aa,bb,cc;
void a(){
	cout<<"Enter the number :- "<<endl;
	cin>>aa;
	for(int i =1;i<=10;i++){
		cout<<aa<<"X"<<i<<"="<<aa*i<<endl;
	}
}
void b(){
	cout<<"Enter the number :- "<<endl;
	cin>>bb;
	for(int i =1;i<=10;i++){
		cout<<bb<<"X"<<i<<"="<<bb*i<<endl;
	}
}
void c(){
	cout<<"Enter the number :- "<<endl;
	cin>>cc;
	for(int i =1;i<=10;i++){
		cout<<cc<<"X"<<i<<"="<<cc*i<<endl;
	}
}
int main()
{
thread tt1(a);
thread tt2(b);
thread tt3(c);
tt1.join();
tt2.join();
tt3.join();
	return 0;
}
