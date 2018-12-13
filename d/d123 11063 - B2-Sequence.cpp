#include<iostream>
using namespace std;

int main()
{
	int n,b[105],add[6000],t,nn;
	b[0]=0,nn=1;
	bool dis;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
			cin>>b[i];
		t=0,dis=true;
		if(b[1]<1)
			dis=false;
		for(int i=1;i<=n;i++)
		{
			if(b[i]<b[i-1])
				dis=false;
			for(int j=i;j<=n;j++)
			{
				add[t]=b[i]+b[j];
				for(int l=0;l<t;l++)
					if(add[l]==add[t])
						dis=false;
				if(dis)
					t++;
			}
			if(!dis)
				break;
		}
		cout<<"Case #"<<nn<<": ";
		if(dis)
			cout<<"It is a B2-Sequence.\n";
		else
			cout<<"It is not a B2-Sequence.\n";
		nn++;
	}
}
