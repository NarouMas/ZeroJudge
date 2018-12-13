#include<iostream>
using namespace std;

int main()
{
	int n,m;
	string a,b;
	while(cin>>n>>m)
	{
		string br[n],co[n];
		for(int i=0;i<n;i++)
			cin>>br[i]>>co[i];
		while(m--)
		{
			cin>>a>>b;
			if(a=="brand")
			{
				for(int i=0;i<n;i++)
					if(br[i]==b)
						cout<<br[i]<<" "<<co[i]<<endl;
			}
			else
			{
				for(int i=0;i<n;i++)
					if(co[i]==b)
						cout<<br[i]<<" "<<co[i]<<endl;
			}
		}
		cout<<endl;
	}
}
