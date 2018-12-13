#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	int n,m1,f1,m2,f2,t;
	string s,s2;
	while(cin>>n)
	{
		cin.ignore();
		while(n--)
		{
			getline(cin,s);
			stringstream ss(s);
			m1=m2=f1=f2=t=0;
			while(ss>>s2)
			{
				if(s2[0]=='M')
					m1++;
				else
					f1++;
				if(s2[1]=='M')
					m2++;
				else
					f2++;
				t++;
			}
			//cout<<"m1:"<<m1<<" m2:"<<m2<<" f1:"<<f1<<" f2:"<<f2<<endl;
			if(m1==f2&&m2==f1&&t>1)
				cout<<"LOOP\n";
			else
				cout<<"NO LOOP\n";
		}
	}
}
