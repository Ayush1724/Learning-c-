#include <iostream>
using namespace std;
int main()
{int a[5]={1,2,3,4,5};
int b[5]={6,7,8,9,10};
int c[5]={11,12,13,14,15};
int d[5]={16,17,18,19,20};
int e[5]={21,22,23,24,25};
float ttl1,ttl2,ttl3,ttl4,ttl5,avg1,avg2,avg3,avg4,avg5,ttl,avg;
for(int i=0;i<5;i++){
	ttl1=ttl1+a[i];
}
for(int i=0;i<5;i++){
	ttl2=ttl2+b[i];
}
for(int i=0;i<5;i++){
	ttl3=ttl3+c[i];
}
for(int i=0;i<5;i++){
	ttl4=ttl4+d[i];
}
for(int i=0;i<5;i++){
	ttl5=ttl5+e[i];
}
cout<<" total of a is :- "<<ttl1<<" total of b is :- "<<ttl2<<" total of c is :- "<<ttl3<<" total of d is :- "<<ttl4<<" total of e is :- "<<ttl5<<endl;
avg1=ttl1/5;
avg2=ttl2/5;
avg3=ttl3/5;
avg4=ttl4/5;
avg5=ttl5/5;
cout<<endl;
cout<<"average of a is :- "<<avg1<<"average of b is :- "<<avg2<<"average of c is :- "<<avg3<<"average of d is :- "<<avg4<<"average of e is :- "<<avg5<<endl;
	cout<<endl;
	ttl=ttl1+ttl2+ttl3+ttl4+ttl5;
	avg=ttl/5;
	cout<<"Total of all array is :- "<<ttl<<" Average of all the array is :- "<<avg;
	
	return 0;
}
