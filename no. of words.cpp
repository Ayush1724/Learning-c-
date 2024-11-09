#include <iostream>
using namespace std;
int main()
{ string str= "Cybrom       indrapuri   bhopal   mp";

 int c=0;
 for (int i=0;i<str.size();i++){
 	if(str[i]==' ' and str[i+1] !=' '){
 		c++;
	 }
 }
 cout<<c;
	return 0;
}
