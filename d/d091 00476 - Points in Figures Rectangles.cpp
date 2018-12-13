#include<iostream>
using namespace std;

int main()
{
	float a[20][4],x,y;
	char r;
	int n,k;
	bool d;
	while(cin>>r>>a[0][0]>>a[0][1]>>a[0][2]>>a[0][3])
	{
		n=1;
		while(r!='*')
		{
			cin>>r;
			if(r=='*')
				break;
			cin>>a[n][0]>>a[n][1]>>a[n][2]>>a[n][3];
			n++;
		}
		x=y=0;
		k=1;
		while(x!=9999.9||y!=9999.9)
		{
			cin>>x>>y;
			if(x*10==99999&&y*10==99999)
				break;
			//cout<<"xy:"<<x<<" "<<y<<endl;
			d=true;
			for(int i=0;i<n;i++)
			{
				if(x>a[i][0]&&x<a[i][2]&&y<a[i][1]&&y>a[i][3])
				{
					cout<<"Point "<<k<<" is contained in figure "<<i+1<<endl;
					d=false;
				}
			}
			if(d)
			{
				if(k!=985)
					cout<<"Point "<<k<<" is not contained in any figure \n";
				else
					cout<<"Point "<<k<<" is not contained in any figure\n";
			}
				
			k++;
		}
	}
}
