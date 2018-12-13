#include<iostream>
using namespace std;

string s[70000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	string t;
	bool dis;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i];
	cin>>q;
	while(q--)
	{
		dis=false;
		cin>>t;
		for(int i=0;i<n;i++)
			if(t==s[i])
			{
				dis=true;
				break;
			}
		if(dis)
			cout<<"yes\n";
		else
		{
			s[n]=t,n++;
			cout<<"no\n";
		}
	}
	
}
