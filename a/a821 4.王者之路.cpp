#include<iostream>
using namespace std;

int main()
{
	string a[30],b[30],t1,t2;
	int n,r,k1,k2;
	bool dis1,dis2;
	while(cin>>n>>r)
	{
		k1=k2=0;
		while(r--)
		{
			dis1=dis2=true;
			cin>>t1>>t2;
			for(int i=0;i<k1;i++)
				if(t1==a[i])
					dis1=false;
			for(int i=0;i<k2;i++)
				if(t2==b[i])
					dis2=false;
			if(dis1)
			{
				a[k1]=t1;
				k1++;
			}
			if(dis2)
			{
				b[k2]=t2;
				k2++;
			}
		}
		for(int i=0;i<k1;i++)
		{
			dis1=false;
			for(int j=0;j<k2;j++)
				if(a[i]==b[j])
					dis1=true;
			if(!dis1)
			{
				cout<<a[i]<<endl;
				break;
			}
		
		}
	}
}
