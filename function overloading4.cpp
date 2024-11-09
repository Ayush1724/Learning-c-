#include <iostream>
using namespace std;
class abc{
	public:
		void show(int x){
			cout<<"show a";
		}
		void show(int x,int y){
			cout<<"Show b";
		}
		void show(int x,int y,int z){
			cout<<"show c";
		}
};
int main()
{abc obj;
obj.show(2);

	return 0;
}
