#include<iostream>
using namespace std;

int main()
{
	char a[10000];
	bool dlen;
	int len,n,l;
	long ans,t,k;
	for(int i=0;i<10000;i++)
		a[i]=' ';
	while(cin>>n)
	{
		l=n;
		for(l=0;l<n;l++)
		{
			if(l==0)
				cin.getline(a,10000);
			cin.getline(a,10000);
			dlen=true;
			for(int i=0;i<10000;i++)
				if(a[i]==' ')
				{
					for(int j=i+1;j<10000;j++)
						if(a[j]!=' ')
							dlen=false;
					if(dlen)
					{
						len=i;
						goto p;
					}
					else
						dlen=true;	
				}
		p:
			len--,ans=0;
			//cout<<len<<endl;
			for(int i=len-1;i>=0;i--)
			{
				t=0,k=1;
				//cout<<"a\n";
				if(a[i]!=' ')
				{
					for(int j=i;a[j]!=' '&&j>=0;j--)
					{
						if(a[j]!='-')
						{
							t+=int(a[j]-'0')*k;
							k=k*10;
							//cout<<"k="<<k<<endl;
						}
						else
							t=t*-1;
						
						i--;
					}
					
					ans+=t;
				}
			}
			cout<<ans<<endl;
			for(int i=0;i<10000;i++)
				a[i]=' ';
		}
		
	}
}
