#include<iostream>
using namespace std;

int main()
{
	int n,ans;
	char a[105];
	while(cin>>n)
	{
		cin.ignore();
		for(int t=1;t<=n;t++)
		{
			cin.getline(a,105);
			ans=0;
			for(int i=0;a[i]!='\0';i++)
			{
				if(a[i]>='a'&&a[i]<='r')
					ans+=(int(a[i]-'a')%3)+1;
				else if(a[i]>='s'&&a[i]<='z')
				{
					switch(a[i])
					{
						case 's':ans+=4;break;
						case 't':ans+=1;break;
						case 'u':ans+=2;break;
						case 'v':ans+=3;break;
						case 'w':ans+=1;break;
						case 'x':ans+=2;break;
						case 'y':ans+=3;break;
						case 'z':ans+=4;break;
					}
				}
				else if(a[i]==' ')
					ans+=1;
			}
			cout<<"Case #"<<t<<": "<<ans<<endl;
		}
	}
}
