#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	int n,a[5],b[5],t,ans;
	string s;
	cin>>n;
	cin.ignore();
	while(n--)
	{		
		getline(cin,s);
		for(int i=0;i<s.size();i++)
			if(s[i]==',')
				s[i]=' ';
		t=0;
		stringstream ss1(s);
		while(ss1>>a[t])
			t++;
		s.clear();
		getline(cin,s);
		for(int i=0;i<s.size();i++)
			if(s[i]==',')
				s[i]=' ';
		t=0;
		stringstream ss2(s);
		while(ss2>>b[t])
			t++;
		s.clear();
		ans=0;
		/*for(int i=0;i<5;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		for(int i=0;i<5;i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		for(int i=0;i<5;i++)
			for(int j=0;j<5;j++)
				if(a[i]==b[j])
					ans++;
		cout<<ans<<endl;
	}
}
