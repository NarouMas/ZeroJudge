#include<iostream>
using namespace std;

int main()
{
	int num;
	int n;
	/*while(true)
	{
		for(int i=0;i<1000;i++)
		{
			cin>>num[i];
			n=i;
			if(num[i]==0)
				break;
		}
		for(int i=0;i<n;i++)
		{		
			for(int j=1;j<num[i];j++)
				if(j%7!=0)
					cout<<j<<" ";
			cout<<endl;
		}
	}*/
	while(cin>>num)
	{
		for(int i=1;i<num;i++)
			if(i%7!=0)
				cout<<i<<" ";
		cout<<endl;
	}
}
