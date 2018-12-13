#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	long s,v1,v2,a,b;
	string name[2];
	while(cin>>n>>name[0]>>name[1])
	{
		a=b=0;
		for(int i=0;i<n;i++)		
		{
			cin>>s>>v1>>v2;
			if(v1>v2)
				a+=s;
			else if(v2>v1)
				b+=s;
		}
		if(a>b)
			cout<<name[0];
		else if(b>a)
			cout<<name[1];
		else
			cout<<"Tie";
		cout<<"\n";
	}
	
}
