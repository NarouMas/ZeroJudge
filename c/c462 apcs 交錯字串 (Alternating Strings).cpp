#include<iostream>
using namespace std;

int main()
{
	int k,ans,ma;
	bool bs,dis,re;
	char a[100000];
	while(cin>>k>>a)
	{
		ans=0,ma=0;
		if(a[0]>='a'&&a[0]<='z')
			bs=true;
		else
			bs=false;
		re=false;
		for(int i=0;a[i]!='\0';i++)
		{
			dis=true;
			if(bs)
			{
				for(int j=i;j<i+k;j++)
				{
					if(a[j]=='\0')
					{
						dis=false;
						break;
					}
					else if(a[j]>='A'&&a[j]<='Z')
					{
						dis=false;
						break;
					}
				}
			}
			else
			{
				for(int j=i;j<i+k;j++)
				{
					if(a[j]=='\0')
					{
						dis=false;
						break;
					}
					else if(a[j]>='a'&&a[j]<='z')
					{
						dis=false;
						break;
					}
				}
			}
			if(dis)
			{
				ans+=k;
				if(bs)
					bs=false;
				else
					bs=true;
				re=true;
				if(ans>ma)
					ma=ans;
				i+=k-1;
			}
			else
			{		
				ans=0;
				if(re)
				{
					if(bs)
						bs=false;
					else
						bs=true;
					re=false;
					i-=k;
				}
				else
				{
					if(a[i+1]>='a'&&a[i-1]<='z')
						bs=true;
					else
						bs=false;
					re=false;
				}
			}
		}
		cout<<ma<<endl;
	}
}
