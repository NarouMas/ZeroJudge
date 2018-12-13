#include<iostream>
using namespace std;

int main()
{
	int w,h,t,n;
	long double a[100000],b;
	while(cin>>n>>w>>h)
	{
		cout<<w<<' '<<h<<endl;
		for(int i=0;i<h;i++)
		{
			for(int j=1;j<=w*3;j++)
			{
				cin>>a[j];
				if(j%3==0)
				{
					//cout<<"j1="<<j<<endl;
					b=(a[j]+a[j-1]+a[j-2])/3;
					t=int(b);
					//if(b-t>0.6)
					//	b+=1;
					b=int(b);
					if(b>=n)
						b=255;
					else
						b=0;
					cout<<b<<' '<<b<<' '<<b<<' ';
					//cout<<"j2="<<j<<endl;
				}
				//cout<<"j3="<<j<<endl;
			}
			cout<<endl;
		}
			
	}
}
