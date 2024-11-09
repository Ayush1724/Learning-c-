#include <iostream>
using namespace std;
class abc{
	private :
		int salary=65000;
		public:
			void party(){
				cout<<"Salary agai hai "<<salary<<endl;
			}
};
int main()
{abc obj;
obj.party();

	return 0;
}
