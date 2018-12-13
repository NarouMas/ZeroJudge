#include<iostream>
#include<sstream>
using namespace std;

bool dis(char n)
{
	if(n>='a'&&n<='z')
		return true;
	else if(n>='A'&&n<='Z')
		return true;
	else
		return false;
}

int main()
{
	string s,s2;
	int ans;
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
			if(!dis(s[i]))
				s[i]=' ';
		}
		
		stringstream ss(s);
		ans=0;
		while(ss>>s2)
			ans++;
		cout<<ans<<endl;
		s.clear();
	}
}
