#include<iostream>
#include<sstream>
#include<map>
using namespace std;

int main()
{
	int a,b;
	long long int ans;
	string s;
	map<int,int> vector;
	map<int,int>::iterator it;
	while(getline(cin,s))
	{
		vector.clear();
		for(int i=0;s[i]!='\0';i++)
			if(s[i]==':')
				s[i]=' ';
		stringstream ss1(s);
		while(ss1>>a>>b)
		{
			vector[a]=b;
		}
		/*if(a!=0||b!=0)
		{
			scanf(" ");
			cout<<"a:"<<a<<" b:"<<b<<endl;
			vector[a]=b;
			scanf("%d:%d",&a,&b);
		}
		scanf("\n");*/
		ans=0;
		s.clear();
		getline(cin,s);
		for(int i=0;s[i]!='\0';i++)
			if(s[i]==':')
				s[i]=' ';
		stringstream ss2(s);
		while(ss2>>a>>b)
		{
			it=vector.find(a);
			if(it!=vector.end())
				ans+=vector[a]*b;
		}
		/*scanf("%d:%d",&a,&b);
		while(a!=0||b!=0)
		{
			it=vector.find(a);
			if(it!=vector.end())
				ans+=vector[a]*b;
			scanf("%d:%d",&a,&b);
		}*/
		cout<<ans<<"\n";
	}
}
