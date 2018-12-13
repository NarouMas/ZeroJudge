#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t,len,sum;
	char a[10000];
	cin>>t;
	while(t--)
	{
		cin>>a;
		for(int i=0;a[i]!='\0';i++)
			len=i;
		sum=0;
		for(int i=len,j=0;i>=0;i--,j++)
		{
			if(a[i]=='1')
			{
				if(j%2==0)
					sum+=1;
				else
					sum+=2;
			}
		}
		if(sum%3==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}
