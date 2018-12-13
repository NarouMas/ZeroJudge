#include<iostream>
using namespace std;

int main()
{
	int a,b,c[7],max[2];
	while(cin>>a>>b)
	{
		c[0]=a+b-8;
		for(int i=1;i<7;i++)
		{
			cin>>a>>b;
			c[i]=a+b-8;
		}
		max[0]=0,max[1]=7;
		for(int i=0;i<7;i++)
		{
			if(c[i]>max[0])
			{
				max[0]=c[i];
				max[1]=i;
			}
		}
		if(max[0]==0)
			cout<<"0\n";
		else
			cout<<max[1]+1<<endl;
	}
}
