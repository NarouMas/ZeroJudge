#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,t,m,s;
	char a[10];
	int time[30];
	while(cin>>n>>t)
	{		
		for(int i=0;i<30;i++)
			time[i]=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<t;j++)
			{
				//cin>>a;
				scanf("%d:%d",&m,&s);
				time[j]+=m*60+s;
				/*if(a[1]==':')
				{
					time[j]+=int(a[0]-'0')*60+int(a[2]-'0')*10+int(a[3]-'0');
				}
				else
					time[j]+=(int(a[0]-'0')*10+int(a[1]-'0'))*60+int(a[3]-'0')*10+int(a[4]-'0');*/
			}
		}
		sort(time,time+t);
		for(int i=0;i<t;i++)
			cout<<time[i]<<endl;
	}
}
