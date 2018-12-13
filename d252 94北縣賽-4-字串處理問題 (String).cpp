#include<iostream>
#include<list>
using namespace std;

int main()
{
	string s;
	char a[300],t1,t2;
	list<char> l;
	list<char>::iterator it;
	list<char>::iterator it2;
	while(getline(cin,s))
	{
		l.clear();
		for(int i=0;i<s.size();i++)
			l.push_back(s[i]);
		cin>>a;
		for(int i=0;a[i]!='\0';i++)
		{
			
			//cout<<"i"<<i<<" a:"<<a[i]<<endl;
			switch(a[i])
			{
				case '0':
					it=l.begin();
					break;
				case '$':
					it=l.end();
					//it++;
					break;
				case 'x':
					if(it!=l.end())
						l.erase(it);
					it++;
					break;
				case 's':
					t1=*it;
					it++;
					//cout<<"t1:"<<t1<<endl;
					t2=*it;
					//cout<<"t2:"<<t2<<endl;
					it--;
					l.erase(it);
					it++;
					l.erase(it);
					//it++;
					it2=l.begin();
					/*cout<<"1.";
					for(int j=0;j<l.size();j++)
					{
						cout<<*it2;
						it2++;
					}
					cout<<endl;
					cout<<"t2:"<<t2<<endl;*/
					l.insert(it,t2);
					it++;
					it2=l.begin();
					/*cout<<"2.";
					for(int j=0;j<l.size();j++)
					{
						cout<<*it2;
						it2++;
					}
					cout<<endl;
					cout<<"t1:"<<t1<<endl;*/
					l.insert(it,t1);
					//it--;
					//l.swap(it,it+1);
					break;
				case 'i':
					l.insert(it,a[i+1]);
					i++;
					break;
				case 'u':
					if(*it>='a'&&*it<='z')
					{
						t1=*it;
						t1-=' ';
						l.erase(it);
						it++;
						l.insert(it,t1);
					}
					//it++;
					break;
				case '+':
					it++;
					break;
				case '-':
					it--;
					break;
			}
			/*it2=l.begin();
			for(int j=0;j<l.size();j++)
			{
				cout<<*it2;
				it2++;
			}
			cout<<endl;*/
		}
		it=l.begin();
		for(int i=0;i<l.size();i++)
		{
			cout<<*it;
			it++;
		}
			
		cout<<endl;
	}
}
