#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string s1,s;
	char s2[100];
	int len;
	int ans[20],t1;
	float t;
	bool dis;
	while(cin>>s1)
	{
		//cout<<s1<<endl;
		len=0;
		for(int i=0;i<20;i++)
			ans[i]=0;
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

		while(ss>>t>>s)
		{
			t1=t;
			//cout<<"t1:"<<t1<<" t:"<<t<<endl;
			if(s=="gb"||s=="g")
			{
				ans[9]+=t1*8;
				ans[8]+=(t-t1)*80;
			}
				
			else if(s=="mb"||s=="m")
			{
				ans[6]+=t1*8;
				ans[5]+=(t-t1)*80;
			}
				
			else if(s=="kb"||s=="k")
			{
				ans[3]+=t1*8;
				ans[2]+=(t-t1)*80;
			}
				
			else if(s=="byte")
			{
				ans[0]+=t1*8;
				ans[0]+=(t-t1)*10;
			}
				
			else if(s=="bit")
			{
				ans[0]+=t;
			}
				
			for(int i=0;i<20;i++)
			{
				if(ans[i]>=10)
				{
					ans[i+1]+=ans[i]/10;
					ans[i]=ans[i]%10;
				}
			}
		}
		dis=false;
		for(int i=19;i>=0;i--)
		{
			if(ans[i]!=0)
				dis=true;
			if(dis)
				cout<<ans[i];
		}
		if(!dis)
			cout<<"0";
		cout<<endl;
	}
}
