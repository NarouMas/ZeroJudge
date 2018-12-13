#include<iostream>
using namespace std;

int main()
{
	int v[10];
	string s[10];
	int t,max;
	while(cin>>t)
	{
		for(int i=0;i<t;i++)
		{
			max=0;
			for(int j=0;j<10;j++)
				cin>>s[j]>>v[j];
			for(int j=0;j<10;j++)
				if(max<v[j])
					max=v[j];
			
			cout<<"Case #"<<i+1<<":\n";
			for(int j=0;j<10;j++)
				if(v[j]==max)
					cout<<s[j]<<endl;
		}
	}
}
