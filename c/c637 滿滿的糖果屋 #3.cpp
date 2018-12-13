#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	unsigned long long p[20],k[20],pro,ans;
	unsigned long long a[20],b[20];
	int z;
	string s;
	s.clear();
	while(getline(cin,s))
	{
		z=0;
		stringstream ss(s);
		while(ss>>p[z++]);
		z--;
		pro=1;
		for(int i=0;i<z;i++)
		{
			pro*=p[i];
			cin>>k[i];
		}		
		cin.ignore();
		for(int i=0;i<z;i++)
		{
			a[i]=pro/p[i];
			for(int j=1;j<=p[i];j++)
			{
				if(a[i]*j%p[i]==1)
				{
					b[i]=a[i]*j;
					break;
				}
			}
		}
		ans=0;
		for(int i=0;i<z;i++)
			ans+=(b[i]*k[i])%pro;
		cout<<ans%pro<<"\n";
		s.clear();
	}
}
