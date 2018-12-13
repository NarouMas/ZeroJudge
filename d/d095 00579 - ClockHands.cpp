#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,b,len,m,h,ans;
	char c[10];
	while(cin>>c)
	{
		for(int i=0;c[i]!='\0';i++)
			len=i;
		if(c[0]=='0'&&c[1]==':'&&c[2]=='0'&&c[3]=='0'&&len==3)
			break;
		a=b=0;
		for(int i=len,t=1,j=0;i>=0;i--)
		{
			if(c[i]==':')
				t=j=1;
			else if(j==0)
			{
				b+=int(c[i]-'0')*t;
				t*=10;
			}
			else
			{
				a+=int(c[i]-'0')*t;
				t*=10;
			}
		}
		//cout<<"a:"<<a<<" b:"<<b<<endl;
		m=b*6,h=a*30+(m/12);
		ans=h-m;
		if(ans<0)
			ans+=360;
		if(ans>=360)
			ans-=360;
		if(ans>180)
			ans=180-(ans-180);
		cout<<fixed<<setprecision(3)<<ans<<endl;
	}
}
