#include<iostream>
using namespace std;

int main()
{
	string s[1000];
	int n=0;
	bool dis;
	while(getline(cin,s[n]))
	{
		dis=false;
		for(int i=0;i<n;i++)
		{
			if(s[n]==s[i])
				dis=true;
		}
		if(dis)
		{
			cout<<"YES\n";
			s[n].clear();
		}
		else
		{
			cout<<"NO\n";
			n++;
		}
	}
}
