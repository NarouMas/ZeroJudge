#include<iostream>
using namespace std;

int main()
{
	int a[105],s,n;
	for(int i=0;i<105;i++)
		a[i]=0;
	cin>>s;
	while(s!=-1)
	{
		cin>>n;
		a[s]=n;
		cin>>s;
	}
	cin>>s;
	while(s!=-1)
	{
		cin>>n;
		a[s]+=n;
		cin>>s;
	}
	for(int i=0;i<105;i++)
		if(a[i]!=0)
			cout<<i<<" "<<a[i]<<endl;
}
