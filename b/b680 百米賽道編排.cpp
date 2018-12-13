#include<iostream>
#include<algorithm>
using namespace std;

struct people
{
	int n;
	int t;
};

bool cmp(people a,people b)
{
	return a.t<b.t;
}

int main()
{
	int n;
	int g[100][8];
	float t;
	bool dis;
	people p[1000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>p[i].n>>t;
			t*=1000;
			p[i].t=t;
		}
			
		sort(p,p+n,cmp);
		
		/*for(int i=0;i<n;i++)
			cout<<p[i].n<<" "<<p[i].t<<endl;*/
		
		dis=true;
		for(int i=0,j=0,k=0;i<n;i++)
		{
			if(j==(n/8)||j==-1)
			{
				if(dis&&j==n/8)
					j=(n/8)-1,k++,dis=false;
				else if(!dis&&j==-1)
					j=0,k++,dis=true;
				
			}
			g[j][k]=p[i].n;
			if(dis)
				j++;
			else
				j--;
		}
		for(int i=0;i<n/8;i++)
			cout<<i+1<<" "<<g[i][6]<<" "<<g[i][4]<<" "<<g[i][2]<<" "<<g[i][0]<<" "<<g[i][1]<<" "<<g[i][3]<<" "<<g[i][5]<<" "<<g[i][7]<<endl;
	}
}
