#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	int p[200],k[200],z,m,cm,po;
	string s;
	bool done;
	s.clear();
	while(getline(cin,s))
	{
		stringstream ss(s);
		z=m=0;
		while(ss>>p[z++]);
		z--;
		for(int i=0;i<z;i++)
		{
			if(p[i]>m)
				m=p[i],po=i;
			cin>>k[i];
		}
		cin.ignore();
		/*for(int i=0;i<z;i++)
			cout<<p[i]<<' ';
		cout<<endl;
		for(int i=0;i<z;i++)
			cout<<k[i]<<' ';
		cout<<endl;*/
		//cout<<m<<endl;
		done=false,cm=m;
		while(!done)
		{
			done=true;
			for(int i=0;i<z;i++)
			{
				if((m+k[po])%p[i]!=k[i])
					done=false;
			}
			if(done)
				cout<<m+k[po]<<endl;
			m+=cm;
		}
	}
}
