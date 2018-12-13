#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l;
	list<int>::iterator it;
	list<int>::iterator it2;
	unsigned long long c;
	int n,a,t,M,n1,n2;
	while(cin>>n)
	{
		l.clear();
		//cin>>a;
		//l.push_front(a);
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(i==0)
			{
				l.push_back(a);
				//cout<<a<<endl;			
				it=l.begin();
			}
			else
			{
				it2=l.begin();
				M=*it;
				for(int i=0;i<l.size();i++)
				{
					if(*it2>M)
						M=*it2;
					it2++;
				}
				if(a>M)
					l.push_back(a);
				else
				{
					it2=l.begin();
					while(true)
						{
							n1=*it2;
							it2++;
							n2=*it2;
							if(a>=n1&&a<n2)
							{
								l.insert(it2,a);
								break;
							}
							else if(a<n1)
							{
								l.push_front(a);
								break;
							}
						}
				}
				/*cin>>a;
				it=l.begin();
				t=0;
				while(a>*it&&t<l.size())
					it++,t;
				l.insert(it,a);*/
			}
		}
		c=0;
		for(int i=0;i<n-1;i++)
		{
			c+=l.front();
			l.pop_front();
			c+=l.front();
			l.pop_front();
			if(l.size()==0)
			{
				l.push_back(c);
				//cout<<a<<endl;			
				it=l.begin();
			}
			else
			{
				it2=l.begin();
				M=*it;
				for(int i=0;i<l.size();i++)
				{
					if(*it2>M)
						M=*it2;
					it2++;
				}
				if(c>M)
					l.push_back(c);
				else
				{
					it2=l.begin();
					while(true)
						{
							n1=*it2;
							it2++;
							n2=*it2;
							if(c>=n1&&c<n2)
							{
								l.insert(it2,c);
								break;
							}
							else if(c<n1)
							{
								l.push_front(c);
								break;
							}
						}
				}
				/*cin>>a;
				it=l.begin();
				t=0;
				while(a>*it&&t<l.size())
					it++,t;
				l.insert(it,a);*/
			}
		}
		/*it=l.begin();
		for(int i=0;i<l.size();i++)
		{
			cout<<*it<<" ";
			it++;
		}
		cout<<endl;*/
		cout<<c<<endl;
	}
}
