#include <iostream>
#include <fstream>
using namespace std;
int main()
{ifstream obj("ayush.txt");
string str;
if(obj.is_open()){
	while(getline(obj,str)){
		cout<<str<<endl;
	}
	obj.close();
}
else{
	cout<<"There is no data ";
}

	return 0;
}
