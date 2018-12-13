#include<iostream>
using namespace std;

int main()
{
	long long a,b;
	long long sum;
	while(cin>>a>>b)
	{
		sum=0;
		if(a==0)
		{
			cout<<"0\n";
		}
		if(a==1||a==3||a==4)
		{
			if(b<10)
			{
				cout<<"0\n";
				break;
			}
			if(b>=10)
				sum++;
			if(b>=30)
				sum++;
			if(b>=70)
				sum++;
			if(b>=120)
				sum+=3;
			for(int i=0;i<b-10;i++)
				sum+=3;
			cout<<sum<<endl;			
		}
		if(a==2)
		{
			if(b<8)
			{
				cout<<"0\n";
				break;
			}
			if(b>=8)
				sum++;
			if(b>=30)
				sum++;
			if(b>=70)
				sum++;
			if(b>=120)
				sum+=3;
			for(int i=0;i<b-8;i++)
				sum+=3;
			cout<<sum<<endl;	
		}
	}
}
