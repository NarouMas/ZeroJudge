#include<iostream>
#define size 50000000
using namespace std;

char a[size];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int s,e;
	cin>>n>>a;
	while(cin>>s>>e)
	{
		s--;
		for(int i=s;i<e;i++)
			cout<<a[i];
		cout<<"\n";
	}
}
