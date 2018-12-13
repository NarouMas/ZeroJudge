#include<iostream>
using namespace std;

int main()
{
	int t,n,len;
	char a[101];
	while(cin>>t)
	{
		while(t--)
		{
			n=0;
			cin>>a;
			for(int i=0;a[i]!='\0';i++)
				len=i;
			for(long long i=len,j=1;i>=0;i--,j=(j*36)%1688)
			{
				if(a[i]>='0'&&a[i]<='9')
					n+=(int(a[i]-'0')*j)%1688;
				else
					n+=((int(a[i]-'A')+10)*j)%1688;
			}
			cout<<(n%1688)+1<<endl;
		}
		
	}
}
