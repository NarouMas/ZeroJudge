#include<iostream>
using namespace std;

int main()
{
	int n[2],m,sum,t;
	int l[2];
	char k[2][1000],ans[1000];
	while(cin>>n[0]>>k[0]>>n[1]>>k[1])
	{
		cin>>m;
		for(int i=0;k[0][i]!='\0';i++)
			l[0]=i;
		for(int i=0;k[1][i]!='\0';i++)
			l[1]=i;
			
		sum=0;	
		for(int tt=0;tt<2;tt++)
			for(int i=l[tt],j=1;i>=0;i--)
			{
				if(k[tt][i]>='0'&&k[tt][i]<='9')
					sum+=int(k[tt][i]-'0')*j;
				else
				{
					if(k[tt][i]>='a'&&k[tt][i]<='z')
						k[tt][i]-=' ';
					
					sum+=int(k[tt][i]-'A'+10)*j;
				}
				j*=n[tt];
			}
		//cout<<"S:"<<sum<<endl;
		if(sum%m>=10)
			ans[0]=char(sum%m-10+'A');
		else
			ans[0]=char(sum%m+'0');
		t=1;
		while(sum>0)
		{
			sum/=m;
			if(sum%m>=10)
				ans[t]=char(sum%m-10+'A');
			else
				ans[t]=char(sum%m+'0');
			t++;
		}
		t-=2;
		for(int i=t;i>=0;i--)
			cout<<ans[i];
		cout<<endl;
	}
}
