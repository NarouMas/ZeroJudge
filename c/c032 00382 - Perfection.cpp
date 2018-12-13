#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[60001];
	a[0]=-1;
	int s,n,t;
	for(int i=1,ci,j;i<=60000;i++)
	{
		s=0,ci=i;
		j=1,t=0;
		while(i>j)
		{
			if(t*j==i)
				break;
			if(i%j==0)
			{
				s+=j;
				s+=i/j;
				//cout<<"j:"<<j<<" i/j:"<<i/j<<endl;
				t=j;
			}
			j++;
		}
		s-=i;
		//for(int j=1;j<i;j++)
		//	if(i%j==0)
		//		s+=j;
		//cout<<"n:"<<n<<" s:"<<s<<endl;
		if(s==i)
		{
			//cout<<"s==i "<<"i:"<<i<<" s:"<<s<<endl;
			a[i]=0;
		}
			//a[i]=0;
		else if(s>i)
		{
			//cout<<"s>i "<<"i:"<<i<<" s:"<<s<<endl;
			a[i]=1;
		}
		else
		{
			//cout<<"s<i "<<"i:"<<i<<" s:"<<s<<endl;
			a[i]=2;
		}
		//cout<<" "<<a[i]<<endl;
	}
	cout<<"PERFECTION OUTPUT\n";
	while(cin>>n)
	{
		if(n!=0)
			cout<<setw(5)<<n;
		if(a[n]==0)
			cout<<"  PERFECT\n";
		else if(a[n]==1)
			cout<<"  ABUNDANT\n";
		else if(a[n]==2)
			cout<<"  DEFICIENT\n";
		else
		{
			cout<<"END OF OUTPUT\n";
			break;
		}
		//cout<<a[n]<<endl;
	}
}
