#include<iostream>
using namespace std;

int main()
{
	char a[100000];
	bool b,c,d;
	int ans;
	for(int i=0;i<100000;i++)
		a[i]='1';
	while(cin.getline(a,100000))
	{
		ans=0;
		for(int i=0;a[i]!='1';i++)
		{
			b=false,c=false,d=false;
			if(int(a[i])>64&&int(a[i])<91)
				b=true;
			if(int(a[i])>96&&int(a[i])<123)
				b=true;
			if(int(a[i+1])==32)
				c=true;
			if(int(a[i+2])>64&&int(a[i+2])<91)
				d=true;
			if(int(a[i+2])>96&&int(a[i+2])<123)
				d=true;
			if(b&&c&&d)
				ans++;
		}
		cout<<ans+1<<endl;
		for(int i=0;i<100000;i++)
			a[i]='1';
	}
}
