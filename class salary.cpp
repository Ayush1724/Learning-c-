#include <iostream>
using namespace std;
class abc{
	private :
		int salary;
		int ta;
		int da;
		int hra;
		int pf;
		int ttl,ttl1;
		int tax;
		public:
			void party(){
				cout<<"enter your salary ";
				cin>>salary;
				ta=0.15*salary;
				da=0.35*salary;
				hra=0.30*salary;
				pf=0.125*salary;
				cout<<"Basic salary "<<salary<<endl;
				cout<<"TA "<<ta<<endl;
				cout<<"DA "<<da<<endl;
				cout<<"HRA "<<hra<<endl;
				cout<<"PF "<<pf<<endl;
				ttl=salary+ta+da+hra-pf;
				cout<<"salary befor tax "<<ttl<<endl;
				if(ttl>85000 and ttl<100000){
					tax=0.10*salary;
				}
				else if(ttl>100000 and ttl<120000){
					tax=0.20*salary;
				}else if  (ttl>120000){
					tax=0.30*salary;
				}
				else{
					tax=0;
				}
				ttl1=ttl-tax;
				cout<<"Total salary after tax is "<<ttl1<<endl;
			}
};
int main()
{abc obj;
obj.party();

	return 0;
}
