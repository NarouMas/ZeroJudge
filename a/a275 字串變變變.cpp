#include<iostream>
#include<algorithm>
#define size 1000001
using namespace std;

int main()
{
	char a[size],b[size];
	int la,lb;
	bool d;
	while(cin>>a)
	{
		if(a[0]=='S'&&a[1]=='T'&&a[2]=='O'&&a[3]=='P'&&a[4]=='!'&&a[5]=='!'&&a[6]=='\0')
			break;
		cin>>b;
		for(int i=0;a[i]!='\0';i++)
			la=i;
		for(int i=0;b[i]!='\0';i++)
			lb=i;
		if(la!=lb)
		{
			cout<<"no\n";
		}
		else
		{
			la++;
			sort(a,a+la);
			sort(b,b+la);
			d=true;
			for(int i=0;i<=la;i++)
			{
				if(a[i]!=b[i])
				{
					d=false;
					break;
				}
			}
			if(d)
				cout<<"yes\n";
			else
				cout<<"no\n";
		}
	}
}
