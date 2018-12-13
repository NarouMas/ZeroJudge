#include<iostream>
#include<sstream>
using namespace std;

int getnumber(char a)
{
	if(a>='0'&&a<='9')
		return int(a-'0');
	else
		return int(a-'A')+10;
}
int main()
{
	string s;
	int n[3],t;
	s.clear();
	while(getline(cin,s))
	{
		if(s[0]=='#')
		{
			for(int i=0;i<3;i++)
			{
				n[i]=getnumber(s[i*2+1])*16;
				n[i]+=getnumber(s[i*2+2]);
				
				cout<<n[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			stringstream ss(s);
			t=0;
			while(ss>>n[t])
				t++;
			cout<<"#";
			for(int i=0;i<3;i++)
			{
				if(n[i]/16>=10)
					cout<<char(n[i]/16-10+'A');
				else
					cout<<n[i]/16;
				if(n[i]%16>=10)
					cout<<char(n[i]%16-10+'A');
				else
					cout<<n[i]%16;
			}
			cout<<endl;
		}
		s.clear();
	}
}
