#include<iostream>
using namespace std;

int main()
{
	int n,m,a,b;
	int t;
	int all;
	int min;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			all=0,min=0;
			cin>>m;
			for(int j=0;j<m;j++)
			{
				cin>>a>>b;
				t=a*60+b;
				all+=t;
				if(j==0||t<min)
					min=t;
			}
			all=all/m;
			cout<<"Track "<<i+1<<":\n"
				<<"Best Lap: "<<min/60<<" minute(s) "<<min%60<<" second(s).\n"
				<<"Average: "<<all/60<<" minute(s) "<<all%60<<" second(s).\n";
		}
	}
}
