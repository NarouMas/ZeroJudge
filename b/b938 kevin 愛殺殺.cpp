#include<iostream>
#include<list>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	list<int> mlist;
	list<int>::iterator it;
	int n,m,k;
	bool d;
	while(cin>>n>>m)
	{
		for(int i=0,j=1;i<n;i++,j++)
			mlist.push_back(j);
		for(int i=0;i<m;i++)
		{
			cin>>k;
			d=true;
			it=mlist.begin();
			for(int j=0;j<n;j++,it++)
			{
				if(k<*it)
					break;
				else if(*it==k&&j<n-1)
				{
					it++;
					cout<<*it<<"\n";
					mlist.erase(it);
					n--,d=false;
					break;
				}
			}
			if(d)
				cout<<"0u0 ...... ?\n";
		}
	}
}
