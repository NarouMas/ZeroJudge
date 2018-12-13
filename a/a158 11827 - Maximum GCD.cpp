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
	int n,m[200],t,max;
	string s;
	while(cin>>n)
	{
		cin.ignore();
		while(n--)
		{
			getline(cin,s);
			t=0;
			stringstream ss(s);
			while(ss>>m[t])
				t++;
			max=0;
			for(int i=0;i<t;i++)
			{
				for(int j=i+1;j<t;j++)
				{
					if(gcd(m[i],m[j])>max)
						max=gcd(m[i],m[j]);
				}
			}
			cout<<max<<endl;
			s.clear();
		}
	}
}
