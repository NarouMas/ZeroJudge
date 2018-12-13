#include<iostream>
using namespace std;

int main()
{
	int n,a,b[2];
	bool d[10],e;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a>>b[0]>>b[1];
			e=true;
			for(int i=1;i<=9;i++)
				d[i]=false;
			if(a==1)
				d[2]=d[4]=true;
			else if(a==2)
				d[1]=d[3]=d[5]=true;
			else if(a==3)
				d[2]=d[6]=true;
			else if(a==4)
				d[1]=d[5]=d[7]=true;
			else if(a==5)
				d[2]=d[4]=d[6]=d[8]=true;
			else if(a==6)
				d[3]=d[5]=d[9]=true;
			else if(a==7)
				d[4]=d[8]=true;
			else if(a==8)
				d[5]=d[7]=d[9]=true;
			else if(a==9)
				d[6]=d[8]=true;
			for(int i=0;i<2;i++)
			{
				if(b[i]==1)
					d[2]=d[4]=false;
				else if(b[i]==2)
					d[1]=d[3]=d[5]=false;
				else if(b[i]==3)
					d[2]=d[6]=false;
				else if(b[i]==4)
					d[1]=d[5]=d[7]=false;
				else if(b[i]==5)
					d[2]=d[4]=d[6]=d[8]=false;
				else if(b[i]==6)
					d[3]=d[5]=d[9]=false;
				else if(b[i]==7)
					d[4]=d[8]=false;
				else if(b[i]==8)
					d[5]=d[7]=d[9]=false;
				else if(b[i]==9)
					d[6]=d[8]=false;
			}
			for(int i=1;i<=9;i++)
				if(d[i])
				{
					cout<<i<<' ';
					e=false;
				}
			if(e)
				cout<<"Empty";
			cout<<endl;
		}
	}
}
