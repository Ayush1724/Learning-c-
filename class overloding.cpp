#include <iostream>
using namespace std;
class a{
	public:
		
		void show(int x,float y)
		{
			cout<<"int "<<x<<" Double "<<y;
		}
};
int main()
{ a obj;
obj.show(2,2.5);

	return 0;
}
