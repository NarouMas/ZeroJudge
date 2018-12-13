#include<iostream>
using namespace std;

int main()
{
	long n,right,left,t;
	while(cin>>n)
	{
		t=0,right=0,left=0;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			if(i%2==0)
				left+=t;
			else
				right+=t;
		}
		if(left>right)
			cout<<"left"<<endl;
		else
			cout<<"right"<<endl;
	}
}
