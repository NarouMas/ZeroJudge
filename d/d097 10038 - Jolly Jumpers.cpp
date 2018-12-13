#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int a[3000],b[3000];
	bool d;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			b[i]=a[i+1]-a[i];
			if(b[i]<0)
				b[i]*=-1;
		}
			
		n--;
		d=true;
		sort(b,b+n);
		for(int i=0;i<n-1;i++)
		{
			//cout<<b[i+1]<<" "<<b[i]<<endl;
			if(b[i+1]-b[i]!=1)
				d=false;
		}
			
		if(d)
			cout<<"Jolly\n";
		else
			cout<<"Not jolly\n";
	}
}
