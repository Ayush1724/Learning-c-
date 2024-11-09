#include <iostream>
using namespace std;
int main()
{ int i=2,j=3,k=4;
int arr[i][j][k]={{{10,20,30,40},{50,60,70,80},{90,100,110,120}},{{130,140,150,160},{170,180,190,200},{210,220,230,240}}};
for(int i=0;i<2;i++)
{
	for(int j=0;j<3;j++)
	{
		for(int k=0;k<4;k++)
		{
			cout<<arr[i][j][k]<<" ";
		}
		cout<<endl;
	}
	cout<<"__________________________________________"<<endl;
}

	return 0;
}
