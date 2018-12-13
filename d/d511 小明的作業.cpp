#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long a[3];
	int s;
	while(cin>>a[0]>>a[1]>>a[2])
	{
		s=0;
		sort(a,a+3);
		if((a[0]+a[1])>a[2])
			s++;
		for(int i=0;i<4;i++)
		{
			cin>>a[0]>>a[1]>>a[2];
			sort(a,a+3);
			if((a[0]+a[1])>a[2])
				s++;
		}
		cout<<s<<endl;
	}
}
