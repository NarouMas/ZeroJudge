#include<iostream>
#include<sstream>
using namespace std; 

int gcd(int a,int b)
{
	int t;
	while(b)
		t=a%b,a=b,b=t;
	return a;
}
int main()
{
	int m,k,p[10],z,lcm;
	string s;
	while(cin>>m>>k)
	{
		cin.ignore();
		s.clear();
		getline(cin,s);
		stringstream ss(s);
		z=0;
		while(ss>>p[z++]);
		lcm=p[0];
		z--;
		//cout<<z<<endl;
		for(int i=1;i<z;i++)
		{
			//cout<<"lcm:"<<lcm<<" p:"<<p[i]<<" gcd:"<<gcd(lcm,p[i])<<endl;
			lcm=lcm*p[i]/gcd(lcm,p[i]);
			//cout<<i<<":"<<lcm<<endl;
		}
		//for(int i=0;i<z;i++)
		//	cout<<p[i]<<" ";
		//cout<<endl;
		//cout<<"lcm:"<<lcm<<endl;
		//system("pause");
		z=lcm;
		while(lcm+k<m)
		{
			cout<<lcm+k<<' ';
			lcm+=z;
		}
		cout<<endl;
	}
}
