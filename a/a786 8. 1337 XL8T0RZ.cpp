#include<iostream>
#include<sstream>
#define siz 10000
using namespace std;

int main()
{
	string str,s1[siz],s2[siz],s3[siz];
	int n,t;
	while(cin>>str)
	{
		n=0;
		while(true)
		{
			str.clear();
			cin>>str;
			if(str=="[1337]")
				break;
			for(int i=0;i<str.size();i++)
				if(str[i]==':')
				{
					str[i]=' ';
					break;
				}
			stringstream ss(str);
			while(ss>>s1[n]>>s2[n++]);
		}
		cin.ignore();
		while(true)
		{
			t=0;
			str.clear();
			getline(cin,str);
			if(str=="[3ND]")
				break;
			stringstream s(str);
			while(s>>s3[t++]);
			for(int i=0;i<t;i++)
				for(int j=0;j<n;j++)
					if(s3[i]==s1[j])
						cout<<s2[j]<<" ";
			cout<<endl;		
		}
	}
}
