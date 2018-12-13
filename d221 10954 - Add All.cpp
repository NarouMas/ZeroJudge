#include<iostream>
#include<cstring>
#define size 100005
using namespace std;

int m[size];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,num,t1,t2,min,ans;
	while(cin>>n)
	{
		if(n==0)
			break;
		for(int i=0;i<size;i++)
			m[i]=0;
		/*for(int i=0;i<size;i++)
			if(m[i]!=0)
				cout<<"!\n";*/
		for(int i=0;i<n;i++)
		{
			cin>>num;
			m[num]++;
		}
		min=ans=0;
		for(int i=0;i<n-1;i++)
		{
			t1=t2=0;
			//cout<<"i:"<<i<<endl;
			for(int j=min;j<size&&t2<2;j++)
			{
				if(m[j]!=0)
				{
					t1+=j;
					m[j]--;
					if(m[j]!=0)
						j--;
					t2++;
					min=j;
					//cout<<"t1:"<<t1<<" ";
				}	
			}
			//cout<<endl;
			m[t1]++;
			ans+=t1;
		}
		cout<<ans<<"\n";
	}
}
