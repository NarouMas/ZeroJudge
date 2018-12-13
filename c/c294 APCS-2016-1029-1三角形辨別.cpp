#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long a[3];
	while(cin>>a[0]>>a[1]>>a[2])
	{
		sort(a,a+3);
		cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<endl;
		if(a[0]+a[1]<=a[2])
			cout<<"No\n";
		else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2])
			cout<<"Obtuse\n";
		else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
			cout<<"Right\n";
		else
			cout<<"Acute\n";
	}
}
