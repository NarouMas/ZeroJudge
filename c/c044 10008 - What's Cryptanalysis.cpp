#include<iostream>
using namespace std;

int main()
{
	int n,m;
	int c[26];
	string s;
	while(cin>>n)
	{
		cin.ignore();
		for(int i=0;i<26;i++)
			c[i]=0;
		while(n--)
		{
			getline(cin,s);		
			for(int i=0;i<s.size();i++)
			{
				if(s[i]>='a'&&s[i]<='z')
					c[int(s[i]-'a')]++;
				else if(s[i]>='A'&&s[i]<='Z')
					c[int(s[i]-'A')]++;
			}			
		}		
		m=0;
		for(int i=0;i<26;i++)
			if(c[i]>m)
				m=c[i];
		for(int i=m;i>0;i--)
		{
			for(int j=0;j<26;j++)
			{
				if(c[j]==i)
				{
					cout<<char(j+'A')<<" "<<i<<endl;
				}
			}
		}
	}
}
