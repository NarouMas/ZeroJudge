#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	char a[100],b[100],c[100];
	while(cin>>n)
	{
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<100;j++)
				a[j]=b[j]=c[j]=' ';
			if(i==0)
				cin.getline(a,100);
			cin.getline(a,100);
			cin.getline(b,100);
			bool dis=true;
			for(int j=0;j<100;j++)
				if(a[j]!=b[j])
					dis=false;
			if(dis)
				cout<<"Case "<<i+1<<": Yes\n";
			else
			{
				int t=0;
				for(int j=0;j<100;j++)
					if(a[j]!=' ')
					{
						c[t]=a[j];
						t++;
					}
				t--;
				dis=true;
				for(int j=0;j<t;j++)
					if(b[j]!=c[j])
						dis=false;
				if(dis)
					cout<<"Case "<<i+1<<": Output Format Error\n";
				else
					cout<<"Case "<<i+1<<": Wrong Answer\n";
			}
		}
	}
}
