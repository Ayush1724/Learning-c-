#include <iostream>
using namespace std;
int main()
{ int arr[3][4]={{10,20,30,40},{60,70,80,90},{11,12,13,14}};
int ttl[4];
for(int j=0;j<4;j++)
{
	ttl[j]=0;
	for(int i=0;i<3;i++)
	{
		ttl[j]=ttl[j]+arr[i][j];
	}
	
}
cout<<"ans is "<<ttl[0]<<endl;
cout<<"ans is "<<ttl[1]<<endl;
cout<<"ans is "<<ttl[2]<<endl;
cout<<"ans is "<<ttl[3]<<endl;

	return 0;
}
