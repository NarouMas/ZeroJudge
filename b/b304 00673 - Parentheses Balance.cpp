#include<iostream>
#include<stack>
#define siz 100000
using namespace std;

int main()
{
	int n,len,sts;
	char a[siz];
	stack<char> st;
	bool d;
	while(cin>>n)
	{
		cin.ignore();
		while(n--)
		{
			d=false;
			st.empty();
			a[0]='A';
			//cin.getline(a,siz);
			cin.getline(a,siz);
			//if(a[0]=='\0')
			//	cout<<"ds\n";
			//cout<<"a:"<<int('\0')<<endl;
			if(int(a[0])!='\0')
			{
				for(int i=0;a[i]!='\0';i++)
					len=i;
				for(int i=0;i<=len&&!d;i++)
				{
					sts=st.size();
					if(a[i]=='('||a[i]=='[')
						st.push(a[i]);
					else if(a[i]==')')
					{
						//cout<<"s:"<<sts<<endl;
						if(sts==0)
						{
							//cout<<"d\n";
							d=true;
						}
						else if(sts>0)
							if(st.top()=='(')
								st.pop();
						else
						{
							d=true;	
						}	
					}
					else if(a[i]==']')
					{
						if(sts==0)
						{
							//cout<<"d\n";
							d=true;
						}
						else if(sts>0)
							if(st.top()=='[')
								st.pop();
						else
						{
							d=true;	
						}
					}
					//if(st.size()>0)
					//	cout<<"size:"<<st.size()<<" top:"<<st.top()<<endl;
				}
			}
			//else
			//	cout<<"Yes\n";
			if(d||st.size()!=0)
				cout<<"No\n";
			else
				cout<<"Yes\n";
		}
	}
}
