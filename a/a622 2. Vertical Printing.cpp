#include<iostream>
using namespace std;

int main()
{
	string s[20];
	int n,ml;
	n=0;
	while(getline(cin,s[n]))
	{
		while(s[n]!="END")
		{
			n++;
			s[n].clear();
			getline(cin,s[n]);
		}
		
		ml=0;
		for(int i=0;i<n;i++)
			if(s[i].length()>ml)
				ml=s[i].length();
		
		for(int i=0;i<ml;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(s[j].length()>=i+1)
					cout<<s[j][i]<<"  ";
				else
					cout<<"   ";
			}
			cout<<endl;
		}
		n=0;
		s[n].clear();
	}
}
