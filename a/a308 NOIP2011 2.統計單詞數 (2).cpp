#include<iostream>
#include<sstream>
#define si 1000000
using namespace std;


int main()
{
	string s1,s2,s;
	int n=0;
	int f,t;
	s1.clear();
	cin>>s1;
	for(int i=0;i<s1.size();i++)
		if(s1[i]>='A'&&s1[i]<='Z')
			s1[i]+=' ';
	//cin.ignore();
	f=-1,t=0,n=0;
	while(cin>>s2)
	{
		for(int i=0;i<s2.size();i++)
		if(s2[i]>='A'&&s2[i]<='Z')
			s2[i]+=' ';
		if(s2==s1&&f==-1)
			t++,f=n;
		else if(s2==s1)
			t++;
		s2.clear();
		n++;
	}
	//cin.getline(s2,si);
			
	if(f==-1)
		cout<<"-1\n";
	else
		cout<<t<<" "<<f<<endl;
	//cout<<s2;	
	s1.clear();
	s.clear();
	
	/*stringstream ss(s2);
	
	s.clear();
	while(ss>>s)
	{
		
	}*/
	
	
}
