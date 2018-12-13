#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std; 

bool isa(char c)
{
	if(c>='a'&&c<='z')
		return true;
	else if(c>='A'&&c<='Z')
		return true;
	return false;
}

int main()
{
	string s;
	double n1[26],n2[26],l,k;
	while(getline(cin,s))
	{
		memset(n1,0,sizeof(n1));
		memset(n2,0,sizeof(n2));
		
		
		l=s.size(),k=0;
		for(int i=0;i<l;i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
				s[i]+=' ';
			if(s[i]!=' '&&isa(s[i]))
			{
				k++;
				n1[int(s[i]-'a')]++;
			}
		}
		
		for(int i=0;i<26;i++)
			cout<<fixed<<setprecision(0)<<n1[i]<<" ";
		cout<<endl;
		for(int i=0;i<26;i++)
		{
			cout<<fixed<<setprecision(2)<<n1[i]*100/k<<" ";
		}
		cout<<endl;
	}
}
