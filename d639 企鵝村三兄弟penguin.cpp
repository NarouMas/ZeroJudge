#include<iostream>
using namespace std;

struct Matrices
{
	int a,b,c,d,e,f,g,h,i;
};

Matrices product(Matrices a,Matrices c)
{
	Matrices b;
	b.a=(a.a*c.a+a.b*c.d+a.c*c.g)%10007, b.b=(a.a*c.b+a.b*c.e+a.c*c.h)%10007, b.c=(a.a*c.c+a.b*c.f+a.c*c.i)%10007;
	b.d=(a.d*c.a+a.e*c.d+a.f*c.g)%10007, b.e=(a.d*c.b+a.e*c.e+a.f*c.h)%10007, b.f=(a.d*c.c+a.e*c.f+a.f*c.i)%10007;
	b.g=(a.g*c.a+a.h*c.d+a.i*c.g)%10007, b.h=(a.g*c.b+a.h*c.e+a.i*c.h)%10007, b.i=(a.g*c.c+a.h*c.f+a.i*c.i)%10007;
	
	return b;
}

int main()
{
	int n,t;
	int bin[50];
	Matrices a,ans;
	while(cin>>n)
	{
		n--;
		if(n!=0)
		{
			a.a=1,a.b=1,a.c=1;
			a.d=1,a.e=0,a.f=0;
			a.g=0,a.h=1,a.i=0;
			
			ans.a=1,ans.b=0,ans.c=0;
			ans.d=0,ans.e=1,ans.f=0;
			ans.g=0,ans.h=0,ans.i=1;
			
			t=0;
			while(n>0)
			{
				if(n%2==0)
					bin[t]=0;
				else
					bin[t]=1;
				//n=n>>1;
				n/=2;
				t++;
			}
			//for(int i=t-1;i>=0;i--)
			//	cout<<bin[i];
			//cout<<endl;
			for(int i=0;i<t;i++)
			{
				if(i!=0)
					a=product(a,a);
				if(bin[i]==1)
					ans=product(ans,a);
			}
			/*cout<<ans.a<<" "<<ans.b<<" "<<ans.c<<endl
				<<ans.d<<" "<<ans.e<<" "<<ans.f<<endl
				<<ans.g<<" "<<ans.h<<" "<<ans.i<<endl;*/
			
			cout<<(ans.g+ans.h+ans.i)%10007<<endl;
		}
		else
			cout<<"1\n";
	}
}
