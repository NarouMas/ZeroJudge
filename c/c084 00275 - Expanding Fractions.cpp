#include<iostream>
using namespace std;

int main()
{
	int a,b,c[3000],n;
	bool d;
	while(cin>>a>>b)
	{
		if(a==b&&a==0)
			break;
		c[0]=a;
		a*=10;
		d=true,n=1;
		cout<<".";
		while(d)
		{
			if(n%50==0)
				cout<<endl;
			cout<<a/b;
			c[n]=a%b;
			a=c[n]*10;		
			if(c[n]==0)
			{
				cout<<"\nThis expansion terminates.\n";
				d=false;
			}
				
			else
				for(int i=0;i<n;i++)
					if(c[n]==c[i])
					{
						/*for(int j=0;j<=n;j++)
							cout<<j<<" "<<c[j]<<endl;*/
						cout<<"\nThe last "<<n-i<<" digits repeat forever.\n";
						d=false;
					}
			n++;
		}
	}
}
