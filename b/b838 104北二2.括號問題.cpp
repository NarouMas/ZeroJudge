#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<char> l;
	list<char>::iterator it;
	int t,n;
	char c[50];
	while(cin>>t)
	{
		while(t--)
		{
			n=0;
			l.clear();
			cin>>c;
			for(int i=0;c[i]!='\0';i++)
			{
				if(c[i]=='(')
					l.push_front(c[i]);
				else
				{
					it=l.begin();
					if(*it=='(')
					{
						l.pop_front();
						n++;
					}
					else
					{
						n=0;
						goto end;
					}
				}
			}
		end:
			if(n==0||l.size()!=0)
				cout<<"0\n";
			else
				cout<<n<<"\n";
		}
	}
}
