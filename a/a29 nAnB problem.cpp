#include<iostream>
using namespace std;

typedef struct _t
{
	int nn;
	bool b;
} ti;
typedef struct _num
{
	int nn;
	bool b;
}nnn;
int main()
{
	nnn num[4];
	int n;
	int a[10000],b[10000];
	ti t[4];
	while(cin>>num[0].nn>>num[1].nn>>num[2].nn>>num[3].nn>>n)
	{
		for(int i=0;i<n;i++)
		{
			a[i]=0;
			b[i]=0;
			num[i].b=false;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<4;j++)
				{
					cin>>t[j].nn;
					t[j].b=false;
					num[j].b=false;
				}
				
			for(int j=0;j<4;j++)
				if(t[j].nn==num[j].nn)
				{
					a[i]++;
					t[j].b=true;
					num[j].b=true;
				}
			
			for(int j=0;j<4;j++)
				for(int k=0;k<4;k++)
					if(t[j].b==false&&num[k].b==false&&t[j].nn==num[k].nn)
					{
						b[i]++;
						t[j].b=true;
						num[k].b=true;
					}
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<"A"<<b[i]<<"B"<<endl;
	}
}
