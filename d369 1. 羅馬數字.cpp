#include<iostream>
using namespace std;

struct rome
{
	char c;
	int v;
};

int main()
{
	int n,t,ans,b[20],la;
	char a[20];
	rome r[7];
	string s[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int num[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	r[0].c='I',r[0].v=1;
	r[1].c='V',r[1].v=5;
	r[2].c='X',r[2].v=10;
	r[3].c='L',r[3].v=50;
	r[4].c='C',r[4].v=100;
	r[5].c='D',r[5].v=500;
	r[6].c='M',r[6].v=1000;
	while(cin>>n)
		while(n--)
		{
			cin>>t;
			if(t==1)
			{
				cin>>a;
				ans=0;
				for(int i=0;a[i]!='\0';i++)
				{
					for(int j=0;j<7;j++)
						if(a[i]==r[j].c)
							b[i]=r[j].v,b[i+1]=0;
				}
				for(int i=0;a[i]!='\0';i++)
				{
					if(b[i]>=b[i+1])
						ans+=b[i];
					else
						ans+=b[i+1]-b[i],i++;
				}
				cout<<ans<<endl;
			}
			else
			{
				cin>>b[0];
				la=0;
				while(b[0]>0)
				{
					for(int i=0;i<13;i++)
					{
						if(b[0]>=num[i])
						{
							b[0]-=num[i];
							cout<<s[i];
							break;
						}
					}
				}
				cout<<endl;
			}
		}
}
