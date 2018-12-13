#include<iostream>
#include<list>
using namespace std;

int main()
{
	string s1,s2,s3;
	list<string> l;
	list<string>::iterator it;
	while(cin>>s1)
	{
		if(s1=="ADD")
		{
			cin>>s2;
			l.push_back(s2);
		}
		else if(s1=="INSERT")
		{
			cin>>s2>>s3;
			it=l.begin();
			while(*it!=s3)
				it++;
			l.insert(it,s2);
		}
		else if(s1=="REMOVE")
		{
			cin>>s2;
			//it=l.begin();
			//while(*it!=s2)
			//	it++;
			l.remove(s2);
		}
		else if(s1=="SHOW")
		{
			it=l.begin();
			for(int i=0;i<l.size();i++)
			{
				cout<<*it<<" ";
				it++;
			}
			cout<<endl;
			l.clear();
		}
	}
}
