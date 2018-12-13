#include<iostream>
using namespace std;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	int n,t,a[1000],r,f,ca;
	bool done;
	while(cin>>n)
	{
		ca=1;
		while(n--)
		{
			done=true,r=0;
			for(int i=0;i<1000;i++)
				a[i]=0;
			cin>>t;
			f=t;
			while(done)
			{			
				if(r!=0)
					t=a[r-1];
				while(t>0)
				{
					a[r]+=(t%10)*(t%10);
					t/=10;
				}
				//cout<<"a["<<r<<"]:"<<a[r]<<endl;
				if(a[r]==1)
				{
					cout<<"Case #"<<ca<<": "<<f<<" is a Happy number.\n";
					done=false;
				}
				else
				{
					for(int i=0;i<r;i++)
						if(a[i]==a[r])
						{
							cout<<"Case #"<<ca<<": "<<f<<" is an Unhappy number.\n";
							done=false;
						}
					if(done)
						r++;
				}
			}
			ca++;
		}
	}
}
