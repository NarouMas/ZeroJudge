#include<iostream>
using namespace std;

int main()
{
	string a[10000],b[10000],c[10000],d[10000];
	int n,s,t,t2,ac;
	bool dis,dis2;
	while(cin>>n)
	{
		t=s=ac=t2=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			c[i]=d[i]=' ';
		}
			
		for(int i=n-1;i>=0;i--)
		{
			dis=dis2=false;
			for(int j=0;j<t;j++)
			{
				if(a[i]==c[j])
					dis=true;
			}
			for(int j=0;j<t2;j++)
			{
				if(a[i]==d[j])
					dis2=true;
			}
			if(!dis)
			{
				if(b[i]=="AC")
				{
					s++,ac++;
					c[t]=a[i];
					d[t2]=a[i];
					//cout<<"s:"<<a[i]<<endl;
					t++,t2++;
				}
				else
				{
					c[t]=a[i];
				//cout<<c[t]<<endl;
				t++;
				}
			}
			else
			{
				if(b[i]=="AC"&&!dis2)
				{
					ac++;
					d[t2]=a[i];
					//cout<<"d:"<<a[i]<<endl;
					t2++;
				}
			}
			/*if(!dis&&b[i]=="AC")
			{
				s++,ac++;
				c[t]=a[i];
				d[t2]=a[i];
				cout<<a[i]<<endl;
				t++;
			}
			else if(!dis)
			{
				c[t]=a[i];
				//cout<<c[t]<<endl;
				t++;
			}*/
			//else if(b[i]=="AC")
			//	ac++;
		}
		//cout<<c[0]<<endl;
		cout<<(s*100)/ac<<"%\n";
	}
}
