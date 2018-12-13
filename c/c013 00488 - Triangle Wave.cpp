#include<iostream>
using namespace std;

int main()
{
	int n,a,f;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a>>f;
			for(int j=0;j<f;j++)
			{
				int l=1;
				while(l<=a)
				{
					for(int k=0;k<l;k++)
						cout<<l;
					cout<<endl;
					l++;
				}
				l-=2;
				while(l>0)
				{
					for(int k=0;k<l;k++)
						cout<<l;
					cout<<endl;
					l--;
				}
				cout<<endl;
			}
		}
	}
}
