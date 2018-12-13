#include<iostream>
using namespace std;

int main()
{
	char s[4],k[4];
	int n;
	int a,b;
	while(cin>>s)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			a=0,b=0;
			cin>>k;
			for(int j=0;j<4;j++)
			{
				if(s[j]==k[j])
					a++;
				else
				{
					for(int l=0;l<4;l++)
						if(k[j]==s[l])
							b++;
				}
			}
			
			cout<<a<<"A"<<b<<"B\n";
		}
	}
}
