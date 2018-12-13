#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int b,w;
	while(cin>>n)
	{
		b=101,w=-1;
		int num[n];
		for(int i=0;i<n;i++)
			cin>>num[i];
		sort(num,num+n);
		for(int i=0;i<n;i++)
		{
			if(i!=n-1)
				cout<<num[i]<<' ';
			else
				cout<<num[i]<<endl;
			if(num[i]>=60&&num[i]<b)
				b=num[i];
			if(num[i]<60&&num[i]>w)
				w=num[i];
		}
		if(w!=-1)
			cout<<w<<endl;
		else
			cout<<"best case\n";
		if(b!=101)
			cout<<b<<endl;
		else
			cout<<"worst case\n";
	}
}
