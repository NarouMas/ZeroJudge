#include<iostream>
using namespace std;

int main()
{
	int a[200];
	char b[200];
	int la,lb,lm;
	for(int i=0;i<200;i++)
		b[i]=0;
	while(cin>>b)
	{
		for(int i=0;i<200;i++)
			a[i]=0;
		for(int i=0;b[i]!='\0';i++)
			lb=i;
		la=0;
		while(true)
		{
			if(lb==0&&b[0]=='0')
				break;
			for(int i=0;i<=lb/2;i++)
				swap(b[i],b[lb-i]);
			if(la>=lb)
				lm=la;
			else
				lm=lb;
			for(int i=0;i<=lb;i++)
				a[i]+=int(b[i]-'0');
			for(int i=0;i<=lm;i++)
			{
				if(a[i]>=10)
				{
					a[i+1]+=a[i]/10;
					a[i]=a[i]%10;
					if(i==lm)
						lm++;
				}
			}
			la=lm;
			for(int i=0;i<=lb;i++)
				b[i]='0';
			cin>>b;
			for(int i=0;b[i]!='\0';i++)
				lb=i;
		}
		for(int i=lm;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
}
