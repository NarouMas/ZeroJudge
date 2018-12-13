#include<iostream>
using namespace std;

int main()
{
	int n,x,p[200],k;
	int cn,t;
	bool a[1000];
	k=1;
	while(cin>>n>>x)
	{
		for(int i=1;i<=n;i++)
			a[i]=true;
		for(int i=0;i<20;i++)
			cin>>p[i];
		cn=n,t=0;
		while(cn>x)
		{
			if(p[t]==0)
				break;
			for(int i=1,j=0;i<=n;i++)
			{
				if(a[i])
				{
					j++;
				}
				if(j%p[t]==0&&a[i])
				{
					a[i]=false;
					//cout<<"j="<<j<<endl;
					cn--;
					if(cn==x)
						goto end;
				}
			}
			t++;
			if(t==20)
				break;
		}
	end:
		cout<<"Selection #"<<k<<endl;
		for(int i=1,j=0;i<=n;i++)
			if(a[i])
			{
				if(j!=cn-1)
					cout<<i<<' ';
				else
					cout<<i<<endl;
				j++;
			}
				
		cout<<endl;
		k++;
		//cout<<"cn="<<cn<<endl;
	}
}
