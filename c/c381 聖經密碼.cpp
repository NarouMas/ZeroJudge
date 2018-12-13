#include<iostream>
#include<list>
using namespace std;

list<char> s;
list<char>::iterator it;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);	
	int n,m,a;
	char word[101];
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		for(int i=0;i<n;i++)
		{
			cin>>word;
			for(int j=0;word[j]!='\0';j++)
			{
				if(word[j]!=' ')
					s.push_back(word[j]);
			}
		}
		for(int i=0;i<m;i++)
		{
			cin>>a;
			it=s.begin();
			for(int j=1;j<a;j++)
				it++;
			cout<<*it;
		}
		cout<<endl;
	}
}
