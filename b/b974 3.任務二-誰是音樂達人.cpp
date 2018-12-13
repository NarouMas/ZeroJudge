#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
	int n,m,k;
	int t[100],ans;
	bool fir;
	string s1,s2,as;
	while(cin>>n>>m)
	{
		cin.ignore();
		ans=0;
		for(int i=0;i<m;i++)
			t[i]=0;
		while(n--)
		{
			s1.clear();
			getline(cin,s1);
			stringstream ss(s1);
			as.clear();
			s2.clear();
			ss>>as;
			while(ss>>k>>s2)
			{
				if(s2==as)
				{
					t[k-1]++;
					break;
				}
				s2.clear();
			}
			for(int i=0;i<m;i++)
				if(t[i]>ans)
					ans=t[i];
		}
		fir=true;
		for(int i=0;i<m;i++)
		{
			if(t[i]==ans)
			{
				if(fir)
				{
					fir=false;
					cout<<i+1;
				}				
				else
					cout<<" "<<i+1;
			}
		}
		cout<<endl;
		for(int i=0;i<m;i++)
			cout<<i+1<<" "<<t[i]<<endl;
	}
}
