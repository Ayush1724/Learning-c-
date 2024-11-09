#include <iostream>
using namespace std;
class abc{
	public:
		int x;
		abc(int a){
			x=a;
		}
		void show(){
			cout<<"SQ :- "<<x;
		}
		void operator !(){
			x=x*x;
		}
};

int main()
{ abc obj(4);
//obj.show();
!(obj);
obj.show();

	return 0;
}
