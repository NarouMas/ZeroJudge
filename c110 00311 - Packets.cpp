#include<iostream>
using namespace std;

int main()
{
	int n[7],ans;
	bool flag;
	while(cin>>n[1]>>n[2]>>n[3]>>n[4]>>n[5]>>n[6])
	{
		flag=true;
		for(int i=1;i<=6;i++)
			if(n[i]!=0)
				flag=false;
		if(flag)
			break;
		ans=0;
		ans+=n[6]+n[5]+n[4];
		n[1]-=n[5]*11;
		if(n[2]<n[4]*5&&n[1]>0)
		{
			switch(n[2]%5)
			{
				case 0:n[1]-=20; break;
				case 1:n[1]-=16; break;
				case 2:n[1]-=12; break;
				case 3:n[1]-=8; break;
				case 4:n[1]-=4; break;
			}
			
		}
		n[2]-=n[4]*5;
		
		ans+=n[3]/4;
		//cout<<"a:"<<ans<<"\n";
		switch(n[3]%4)
		{
			flag=false;
			case 1:
				ans++;
				for(int i=0;i<=5;i++)
					if(n[2]==i)
						n[2]=0,n[1]-=27-(i*4),flag=true;
				if(!flag)
					n[2]-=5,n[1]-=7;
				break;
			case 2:
				ans++;
				for(int i=0;i<=3;i++)
					if(n[2]==i)
						n[2]=0,n[1]-=18-(i*4),flag=true;
				if(!flag)
					n[2]-=3,n[1]-=6;
				break;
			case 3:
				ans++;
				if(n[2]==0)
					n[1]-=9;
				else
					n[2]-=1,n[1]-=5;
				break;
		}
		//cout<<"n2:"<<n[2]<<" n1:"<<n[1]<<"\n";
		while(n[2]>=9)
			n[2]-=9,ans++;
		if(n[2]>0)
		{
			ans++;
			for(int i=1;i<=8;i++)
				if(n[2]==i)
					n[2]=0,n[1]-=36-4*i;
		}
		while(n[1]>0)
		{
			ans++;
			n[1]-=36;
		}
		cout<<ans<<"\n";
	}
}
