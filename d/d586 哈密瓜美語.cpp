#include<iostream>
#define size 50000
using namespace std;

int main()
{
	int n,len,m,sum,cm;
	char a[size],b[20000];
	char d1[27]={"mjqhofawcpnsexdkvgtzblryui"};
	char d2[27]={"uzrmatifxopnhwvbslekycqjgd"};
	bool d;
	while(cin>>n)
	{
		//scanf("\n");
		cin.getline(a,size);
		while(n--)
		{
			cin.getline(a,size);
			for(int i=0;a[i]!='\0';i++)
				len=i;
			m=int(a[0]-'0');
			cm=m;
			if(a[len]>='0'&&a[len]<='9')
				d=true;
			else
				d=false;
			if(d)
			{
				sum=0;
				for(int i=len,t=1;i>=1;i--)
				{
					if(a[i]!=' ')
					{
						sum+=int(a[i]-'0')*t;
						t*=10;
					}
					else
					{
						//cout<<sum<<endl;
						b[m]=d1[sum-1];
						m--,t=1,sum=0;
					}
				}
				for(int i=1;i<=cm;i++)
					cout<<b[i];
				cout<<endl;
			}
			else
			{
				sum=0;
				for(int i=len;i>=2;i-=2)
				{
					for(int j=0;j<26;j++)
						if(a[i]==d2[j])
						{
							sum+=j+1;
							//cout<<"a["<<i<<"]:"<<a[i]<<" j+1:"<<j+1<<endl;
						}
							
				}
				cout<<sum<<endl;
			}
		}
	}
}
