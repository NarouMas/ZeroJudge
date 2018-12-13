#include<iostream>
using namespace std;

int l[10000000];
int main()
{
	int z,k,m;
	int ans,n;
	bool dis;
	n=1;
	while(cin>>z>>k>>m>>l[0])
	{
		if(z==0&&z==k&&k==m&&m==l[0])
			break;
		ans=1,dis=true;
		while(dis)
		{
			l[ans]=(z*l[ans-1]+k)%m;
			for(int i=0;i<ans;i++)
				if(l[ans]==l[i])
				{
					ans=ans-i;
					dis=false;
				}
			ans++;
		}
		cout<<"Case "<<n<<": "<<ans-1<<endl;
		n++;
	}
}
