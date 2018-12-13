#include<iostream>
using namespace std;

int main()
{
	float s,t,n,seat,a,sum;
	while(cin>>s>>t>>n)
	{
		seat=sum=0;
		while(n--)
		{
			cin>>a;
			seat+=a;
		}
		//cout<<"s:"<<seat<<endl;
		for(int i=0;i<3;i++)
		{
			if(t*0.2<seat)
			{
				switch(i)
				{
					case 0: sum+=t*0.2*s*0.7; break;
					case 1: sum+=t*0.2*s*0.8; break;
					case 2: sum+=t*0.2*s*0.9; break;
				}
				seat-=t*0.2;
				//cout<<"a s:"<<seat<<" sum:"<<sum<<endl;
			}
			else
			{
				switch(i)
				{
					case 0: sum+=seat*s*0.7; break;
					case 1: sum+=seat*s*0.8; break;
					case 2: sum+=seat*s*0.9; break;
				}
				seat=0;
				//cout<<"b s:"<<seat<<" sum:"<<sum<<endl;
			}
		}
		if(seat>0)
			sum+=seat*s;
		//cout<<"c s:"<<seat<<" sum:"<<sum<<endl;
		cout<<sum-(s*t*0.3)<<endl;
	}
}
