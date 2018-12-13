#include<iostream>
using namespace std;

int main()
{
	int n,age;
	int d1,m1,y1,d2,m2,y2;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d/%d/%d",&d1,&m1,&y1);
			scanf("%d/%d/%d",&d2,&m2,&y2);
			age=y1-y2-1;
			if(m1>m2)
			{
				age++;
			}
			else if(m1==m2)
			{
				if(d1>=d2)
				{
					age++;
				}
			}
			if(age<0)
				cout<<"Case #"<<i+1<<": Invalid birth date\n";
			else if(age>130)
				cout<<"Case #"<<i+1<<": Check birth date\n";
			else
				cout<<"Case #"<<i+1<<": "<<age<<endl;
		}
	}
}
