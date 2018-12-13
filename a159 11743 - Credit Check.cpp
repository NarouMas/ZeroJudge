#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	char a[30],b[10],c[10];
	int n,ans,t;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		cin.getline(a,30);
		ans=0;
		b[0]=a[0],b[1]=a[2],b[2]=a[5],b[3]=a[7],b[4]=a[10],b[5]=a[12],b[6]=a[15],b[7]=a[17];
		c[0]=a[1],c[1]=a[3],c[2]=a[6],c[3]=a[8],c[4]=a[11],c[5]=a[13],c[6]=a[16],c[7]=a[18];
		for(int i=0;i<8;i++)
		{
			t=int(b[i]-'0')*2;
			ans+=(t%10)+(t/10)+int(c[i]-'0');
		}
		if(ans%10==0)
			cout<<"Valid\n";
		else
			cout<<"Invalid\n";
	}
}
