#include<iostream>
using namespace std;

bool isa(char a)
{
	if(a>='a'&&a<='z')
		return true;
	else if(a>='A'&&a<='Z')
		return true;
	else
		return false;
}

int main()
{
	char a[1005];
	bool dis;
	while(cin.getline(a,1005))
	{
		dis=true;
		for(int i=0;a[i]!='\0';i++)
		{
			if(i==0&&isa(a[i]))
				a[i]-=' ',dis=false;
			else if(a[i]=='.'||a[i]=='!'||a[i]=='?')
				dis=true;
			else if(isa(a[i])&&dis)
				a[i]-=' ',dis=false;
			else if(!isa(a[i-1])&&!isa(a[i+1])&&a[i]=='i')
				a[i]-=' ',dis=false;
		}
		for(int i=0;a[i]!='\0';i++)
			cout<<a[i];
		cout<<endl;
	}
}
