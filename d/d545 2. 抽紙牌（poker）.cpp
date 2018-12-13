#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,b[60],c[60],m,ans;
	char a[60];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			c[i]=(b[i]-1)*4;
			switch(a[i])
			{
				case 'C': c[i]+=0; break;
				case 'D': c[i]+=1; break;
				case 'H': c[i]+=2; break;
				case 'S': c[i]+=3; break;
			}
		}
		cin>>m;
		sort(c,c+n);
		ans=c[n-m];
		switch(ans%4)
		{
			case 0: cout<<"C "; ans-=0; break;
			case 1: cout<<"D "; ans-=1; break;
			case 2: cout<<"H "; ans-=2; break;
			case 3: cout<<"S "; ans-=3; break;
		}
		cout<<(ans/4)+1<<endl;
	}
}
