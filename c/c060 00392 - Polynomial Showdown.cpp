#include<iostream>
using namespace std;

int main()
{
	int n[9];
	bool f,dis;
	while(cin>>n[0])
	{
		f=true,dis=true;
		if(n[0]!=0)
			dis=false;
		for(int i=1;i<9;i++)
		{
			cin>>n[i];
			//cout<<n[i]<<" "<<endl;
			if(n[i]!=0)
				dis=false;
		}
		//cout<<"end"<<endl;
		for(int i=8,j=0;i>=0;i--,j++)
		{
			if(n[j]!=0)
			{
				if(f)
				{
					if(n[j]==-1)
						cout<<"-";
					else if(n[j]!=1)
						cout<<n[j];
					f=false;
				}
				else
				{
					if(n[j]<0)
						n[j]*=-1;
					if(n[j]!=1||i==0)
						cout<<n[j];
				}
					
				if(i!=0&&!f)
				{
					cout<<"x";
					if(i!=1)
						cout<<"^"<<i<<" ";
					else
						cout<<" ";
				}
					
			}
			if(i!=0&&!f)
			{
				if(n[j+1]>0)
					cout<<"+ ";
				else if(n[j+1]<0)
					cout<<"- ";
			}
		}
		
		if(dis)
			cout<<"0";
		cout<<endl;
	}
}
