#include <iostream>
#include <fstream>
using namespace std;
int main()
{ ofstream obj("abc.txt");
 if(obj.is_open()){
 	for (int i=1;i<=10;i++){
 		obj<<"2 x "<<i<<" = "<<2*i<<endl;
	 }
	 obj.close();
 }
else{
	cout<<"There is no file";
}
	return 0;
}
