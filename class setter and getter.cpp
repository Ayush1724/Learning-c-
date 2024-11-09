#include <iostream>
using namespace std;
class emp{
	private:
		int sal;
		public:
			void setter(int s){
				sal=s;
			}
			void getter(){
				cout<<"Your salary is "<<sal<<endl;
			}
};
int main()
{emp abc;
abc.setter(40000);
abc.getter();

	return 0;
}
