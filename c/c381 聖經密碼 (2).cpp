#include<iostream>
using namespace std;

char a[60000000];

int main()
{
	int n,m,t;
	int ans[200];
	char c[200];
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		t=0;
		for(int i=0;i<n;i++)
		{
			cin>>c;
			for(int j=0;c[j]!='\0';j++)
				a[t]=c[j],t++;
		}
		for(int i=0;i<m;i++)
			cin>>ans[i];
		for(int i=0;i<m;i++)
			cout<<a[ans[i]-1];
		cout<<endl;
	}
}
