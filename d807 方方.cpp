#include<iostream>
using namespace std;

int main()
{
	int n,m,t;
	while(cin>>n>>m)
	{
		while(n!=m)
		{
			if(n<m)
				swap(n,m);
			n-=m;
			if(n==1)
				break;
			//cout<<n<<" "<<m<<endl;
		}
		cout<<n<<endl;
	}
}
