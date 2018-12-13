#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string s1,s;
	char s2[100];
	int len,ans;
	float t;
	while(cin>>s1)
	{
		len=0;
		for(int i=0;i<s1.size();i++)
		{
			s2[len]=s1[i];
			len++;
			if(s1[i+1]>='a'&&s1[i+1]<='z'&&s1[i]>='0'&&s1[i]<='9')
				s2[len]=' ',len++;
			if(s1[i+1]>='0'&&s1[i+1]<='9'&&s1[i]>='a'&&s1[i]<='z')
				s2[len]=' ',len++;
		}
		s2[len]='\0';
		//cout<<"s2:"<<s2<<endl;
		stringstream ss(s2);
		ans=0;
		
		while(ss>>t>>s)
		{
			if(s=="h"||s=="hour")
				ans+=t*60*60*1000;
			else if(s=="m"||s=="min")
				ans+=t*60*1000;
			else if(s=="s")
				ans+=t*1000;
			else
				ans+=t;
		}
		cout<<ans<<endl;
	}
}
