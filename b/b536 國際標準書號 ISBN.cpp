#include<iostream>
using namespace std;

int main()
{
	int n,len,k,sum;
	char a[20],b[20];
	
	while(cin>>n)
	{
		
		while(n--)
		{
			for(int i=0;i<20;i++)
				a[i]=b[i]=' ';
			k=sum=0;
			cin>>a;
			for(int i=0;a[i]!=' ';i++)
				len=i;
			for(int i=0;i<len;i++)
				if(a[i]!='-')
				{
					b[k]=a[i];
					k++;
				}
			//cout<<"k="<<k<<endl;
			if(k==10)
			{
				for(int i=0;i<9;i++)
					sum+=int(b[i]-'0')*(10-i);
				sum=sum%11;
				sum=11-sum;
				if(sum==10&&b[9]=='X')
					cout<<'T';
				else if(sum==11&&b[9]=='0')
					cout<<'T';
				else if(int(b[9]-'0')==sum)
					cout<<'T';
				else
					cout<<'F';
			}
			if(k==13)
			{
				for(int i=0;i<12;i++)
				{
					if(i%2==0)
						sum+=int(b[i]-'0');
					else
						sum+=int(b[i]-'0')*3;
				}
				sum=sum%10;
				sum=10-sum;
				if(sum==10&&b[12]=='0')
					cout<<'T';
				else if(int(b[12]-'0')==sum)
					cout<<'T';
				else
					cout<<'F';
			}
			cout<<endl;
		}
	}
}
