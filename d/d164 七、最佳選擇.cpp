#include<iostream>
using namespace std;

int main()
{
	int n,m;
	int a[10000];
	//bool b[10000];
	long long t,max;
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			//b[i]=false;
		}
		max=-1;	
		for(int i=0;i<n;i++)
		{
			t=0;
			for(int j=i;j<i+m;j++)
			{
				if(j>=n)
				{
					t+=a[j-n];
					//cout<<"j-n="<<j-n<<endl;
				}					
				else
				{
					t+=a[j];
					//cout<<"j="<<j<<endl;
				}
				//cout<<"t="<<t<<endl;
			}
			if(t>max)
				max=t;
		}
		cout<<max<<endl;
	}
}
