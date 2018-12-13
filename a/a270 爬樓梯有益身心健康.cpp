#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,t1,t2,time;
	int a[4],b[8];
	bool d;
	while(cin>>n)
	{
		d=true;
		for(int i=0;i<4;i++)
			cin>>a[i];
		for(int i=0;i<8;i++)
			cin>>b[i];
		for(int i=1;i<8;i++)
		{
			time=0;
			t1=b[i],t2=b[i-1];
			if(t2>t1)
				swap(t1,t2);
			for(int j=t2;j<t1;j++)
			{
				time+=a[j-1];
				//cout<<"j-1:"<<j-1;
			}
			//cout<<" time:"<<time<<endl;
				
			if(time>n)
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
