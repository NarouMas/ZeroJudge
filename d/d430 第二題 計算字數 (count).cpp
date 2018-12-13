#include<iostream>
#include<sstream>
using namespace std;

bool add(string s)
{
	bool disa,disn,disA;
	disa=disn=disA=false;
	for(int i=0;i<s.size();i++)
		if(s[i]>='a'&&s[i]<='z')
			disa=true;
	for(int i=0;i<s.size();i++)
		if(s[i]>='A'&&s[i]<='Z')
			disA=true;
	for(int i=0;i<s.size();i++)
		if(s[i]>='0'&&s[i]<='9')
			disn=true;
	if(disa||disn||disA)
		return true;
	else
		return false;
}

int main()
{
	string s;
	int n;
	n=0;
	while(getline(cin,s))
	{
		stringstream ss(s);
		s.clear();
		while(ss>>s)
		{
			if(add(s))
				n++;
			s.clear();
		}
			
		s.clear();
	}
	cout<<n<<endl;
}
