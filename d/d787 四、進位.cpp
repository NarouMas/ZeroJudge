#include<iostream>
using namespace std;

int main()
{
	char a[1000],b[1000];
	int c[1000];
	int n,ans;
	int la,lb,lc;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a>>b;
			for(int i=0;i<1000;i++)
				c[i]=0;
			for(int i=0;a[i]!='\0';i++)
				la=i;
			for(int i=0;b[i]!='\0';i++)
				lb=i;
			for(int i=0;i<la/2;i++)
				swap(a[i],a[la-i]);
			for(int i=0;i<lb/2;i++)
				swap(b[i],b[lb-i]);
			
			ans=0;
			for(int i=0;i<=la||i<=lb;i++)
			{
				c[i]+=int(a[i]-'0')+int(b[i]-'0');
				lc=i;
			}
			for(int i=0;i<=lc;i++)
			{
				if(c[i]>=10)
				{
					ans++;
					c[i+1]+=c[i]/10;
					c[i]=c[i]%10;
					if(i==lc)
						lc++;
				}
			}
			cout<<ans<<endl;
		}
	}
}
