#include<iostream>
using namespace std;

int joe(int n,int k)
{
	if(n==1)
		return 0;
	else
		return (joe(n-1,k)+k)%n;
}
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		cout<<joe(n,k)+1<<endl;
	}
}
