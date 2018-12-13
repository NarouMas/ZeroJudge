#include<iostream>
using namespace std;

bool num[2000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a;
	for(int i=1,ci;i<=1000000;i++)
	{
		a=i;
		ci=i;
		while(ci>0)
		{
			a+=ci%10;
			ci/=10;
		}
		//cout<<"a:"<<a<<endl;
		num[a]=true;
	}
	for(int i=1;i<=1000000;i++)
		if(!num[i])
			cout<<i<<endl;
}
