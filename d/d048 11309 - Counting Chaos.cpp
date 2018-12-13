#include<iostream>
using namespace std;

bool dis(int n)
{
	int d=0;
	char a[10];
	while(n>0)
	{
		a[d]=char(n%10+'0');
		d++;
		n/=10;
	}
	for(int i=0;i<d;i++)
		if(a[i]!=a[d-1-i])
			return false;
	return true;
}

int main()
{
	int n,h,m,t;
	bool done;
	while(cin>>n)
	{
		while(n--)
		{
			scanf("%d:%d",&h,&m);
			t=h*100+m+1;
			done=false;
			while(!done)
			{
				if(t%100>=60)
				{
					t+=100,t-=60;
				}
				if(t/100>=24)
				{
					t-=2400;
				}
				if(dis(t))
				{
					h=t/100,m=t%100;
					if(h<10)
						cout<<"0";
					cout<<h<<":";
					if(m<10)
						cout<<"0";
					cout<<m<<endl;
					done=true;
				}
				t++;
			}
		}
	}
}
