#include<iostream>
#include<sstream>
using namespace std;

bool isn(char a)
{
	if(a>='0'&&a<='9')
		return true;
	else
		return false;
}

char s[1001000];

int main()
{
	//string s;
	int n;
	while(cin>>s)
	{
		if(s[0]!='-')
			cout<<s<<endl;
		else if(s[1]=='0')
			cout<<"0\n";
		else
		{
			for(int i=0;s[i]!='\0';i++)
				n=i;
			if(n%2==1)
				cout<<"-";
			for(int i=0;s[i]!='\0';i++)
				if(s[i]!='-')
					cout<<s[i];
			cout<<endl;
		}
		/*if(s[1]=='\0')
			cout<<s<<endl;
		else if(s[0]=='-'&&isn(s[1]))
		{
			if(s[1]!='0')
				cout<<s<<endl;
			else
				cout<<"0\n";
		}
			
		else
		{
			for(int i=0;!isn(s[i]);i++)
				n=i;
			s[n]=' ';
			stringstream ss(s);
			ss>>s>>n;
			if(n<0)
				n*=-1;
			cout<<"-"<<n<<endl;
		}*/
		//s.clear();
	}
}
