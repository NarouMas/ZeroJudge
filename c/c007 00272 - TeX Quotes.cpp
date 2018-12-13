#include<iostream>
using namespace std;

int main()
{
	string s;
	int n;
	n=0;
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='\"'||s[i]=='\'')
			{
				if(n%2==0)
				{
					if(s[i]=='\"')
						cout<<"``";
					else
						cout<<"`";
				}
				else
				{
					if(s[i]=='\"')
						cout<<"''";
					else
						cout<<"'";
				}
				n++;
			}
			else
				cout<<s[i];
		}
		cout<<endl;
		s.clear();
	}
}
