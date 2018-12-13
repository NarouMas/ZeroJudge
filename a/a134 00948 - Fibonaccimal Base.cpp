#include<iostream>
using namespace std;

int main()
{
	int fi[41],n,a;
	bool dis;
	fi[1]=1,fi[2]=2;
	for(int i=3;i<41;i++)
		fi[i]=fi[i-1]+fi[i-2];
	//for(int i=1;i<41;i++)
	//	cout<<i<<" "<<fi[i]<<endl;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a;
			dis=true;
			cout<<a<<" = ";
			for(int i=40;i>0;i--)
			{
				if(a>=fi[i])
				{
					//cout<<"f:"<<fi[i]<<endl;
					cout<<"1";
					a-=fi[i];
					dis=false;
				}
				else if(!dis)
					cout<<"0";
			}
			cout<<" (fib)\n";
		}
	}
}
