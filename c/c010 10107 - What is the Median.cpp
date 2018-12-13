#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int>l;
	list<int>::iterator it;
	list<int>::iterator it2; 
	int n,a;
	int n1,n2,M,nit;
	n=1;
	nit=0;
	while(cin>>a)
	{
		if(n==1)
		{
			l.push_back(a);
			cout<<a<<endl;			
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
			it=l.begin();
				for(int i=0;i<nit;i++)
					it++;	
			if(n%2==0)
			{				
				n1=*it;
				nit++,it++;
				n2=*it;
				cout<<(n1+n2)/2<<endl;
			}
			else
				cout<<*it<<endl;
		}
		n++;
	}
}
