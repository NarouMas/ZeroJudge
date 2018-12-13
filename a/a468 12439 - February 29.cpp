#include<iostream>
using namespace std;

bool year4(int i)
{
	if(i%400==0)
		return true;
	else if(i%100==0)
		return false;
	else if(i%4==0)
		return true;
	else
		return false;
}
int main()
{
	int t,k;
	string m1,m2;
	long long y1,y2,ans;
	char dc1[3],dc2[3];
	while(cin>>t)
	{
		for(int i=0;i<t;i++)
		{
			ans=0;
			cin>>m1>>dc1>>y1;
			cin>>m2>>dc2>>y2;
			if(year4(y1))
			{
				if(m1=="January"||m1=="February")
					ans++;				
			}
			if(year4(y2)&&y1!=y2)
			{
				if(m2!="January")
				{
					if(m2!="February")
						ans++;
					else if(dc2[0]=='2'&&dc2[1]=='9')
						ans++;
				}					
			}
			y1++;
			//int k;
			switch(y1%4)
			{
				case 0: k=y1; break;
				case 1: k=y1+3; break;
				case 2: k=y1+2; break;
				case 3: k=y1+1; break;
			}
			for(int j=k;j<y2;j+=4)
				if(year4(j))
					ans++;
			cout<<"Case "<<i+1<<": "<<ans<<endl;
		}
	}
}
