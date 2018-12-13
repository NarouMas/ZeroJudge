#include<iostream>
#include<cmath>
#define size 10000
using namespace std;
bool prime[size];
void setprime()
{
	int sqrt_20000000=sqrt(size);
	prime[0]=prime[1]=true;
	for(int i=0;i<sqrt_20000000;i++)
		if(!prime[i])
			for(int k=(size-1)/i,j=i*k;k>=i;k--,j-=i)
				if(!prime[k])
					prime[j]=true;
}

int main()
{
	setprime();
	int num[10],sma[26],big[26];
	int t;
	bool dis;
	char a[3000];
	while(cin>>t)
	{
		for(int tt=1;tt<=t;tt++)
		{
			cin>>a;
			for(int i=0;i<10;i++)
				num[i]=0;
			for(int i=0;i<26;i++)
				sma[i]=0,big[i]=0;
			dis=true;
			for(int i=0;a[i]!='\0';i++)
			{
				if(a[i]>='0'&&a[i]<='9')
					num[int(a[i]-'0')]++;
				else if(a[i]>='A'&&a[i]<='Z')
					big[int(a[i]-'A')]++;
				else if(a[i]>='a'&&a[i]<='z')
					sma[int(a[i]-'a')]++;
			}
			
			cout<<"Case "<<tt<<": ";
			for(int i=0;i<10;i++)
				if(!prime[num[i]])
				{
					cout<<char(i+'0');
					dis=false;
				}
			for(int i=0;i<26;i++)
				if(!prime[big[i]])
				{
					cout<<char(i+'A');
					dis=false;
				}
					
			for(int i=0;i<26;i++)
				if(!prime[sma[i]])
				{
					cout<<char(i+'a');
					dis=false;
				}
					
			if(dis)
				cout<<"empty";
			cout<<endl;
		}
	}
}
