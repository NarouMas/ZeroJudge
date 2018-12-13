#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
	string s;
	int a[100],k,b[100],t;
	while(cin>>s)
	{
		for(int i=0;i<s.length();i++)
			if(s[i]==',')
				s[i]=' ';
		//cout<<"s:"<<s<<endl;
		stringstream ss(s);
		k=-1;
		while(ss>>a[++k]);
		/*for(int i=0;i<k;i++)
			cout<<a[i]<<" ";
		cout<<endl;*/
		t=0;
		for(int i=0;i<k;i++)
			if(a[i]%2==0)
			{
				b[t]=a[i];
				t++;
			}
		sort(b,b+t);
		for(int i=0,j=0;i<k;i++)
			if(a[i]%2==0)
			{
				a[i]=b[j];
				j++;
			}
		for(int i=0;i<k;i++)
		{
			if(i!=k-1)
				cout<<a[i]<<",";
			else
				cout<<a[i]<<endl;
		}
	}
}
