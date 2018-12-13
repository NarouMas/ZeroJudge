#include<iostream>
#include<sstream>
#include<map>
using namespace std;

int main()
{
	string s;
	int a,b,n;
	map<int,int> stone;
	map<int,int>::iterator it;
	while(getline(cin,s))
	{
		stringstream ss(s);
		while(ss>>n)
		{
			it=stone.find(n);
			if(it==stone.end())
				stone[n]=1;
			else
				stone[n]++;
		}
		for(it=stone.begin();it!=stone.end();it++)
		{
			if(it->second%3!=0)
			{
				cout<<it->first<<"\n";
				break;
			}
		}
	}
}
