#include<iostream>
using namespace std;

int main()
{
	int n;
	int s[20017];
	s[1]=1,s[2]=2;
	for(int i=3;i<20017;i++)
	{
		s[i]=s[i-1]+s[i-2];
		s[i]%=10007;
	}
	while(cin>>n)
	{
		n%=20016;
		cout<<s[n]<<endl;
	}
}
