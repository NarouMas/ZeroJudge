#include<iostream>
using namespace std;

int main()
{
	int a,b,ans,now_out,total_out,n;
	string hit[9][5],s;
	bool ram[3];
	while(cin>>a)
	{
		for(int i=0;i<a;i++)
			cin>>hit[0][i];
		for(int i=1;i<9;i++)
		{
			cin>>a;
			for(int j=0;j<a;j++)
				cin>>hit[i][j];
		}
		cin>>b;
		ans=now_out=total_out=n=0;
		for(int i=0;i<3;i++)
			ram[i]=false;
		while(total_out!=b)
		{
			s=hit[n%9][n/9];
			//cout<<"s:"<<s<<endl;
			//cout<<"b:"<<b<<" to:"<<total_out<<endl;
			if(s=="1B")
			{
				if(ram[2])
					ram[2]=false,ans++;
				if(ram[1])
					ram[2]=true,ram[1]=false;
				if(ram[0])
					ram[1]=true,ram[0]=false;
				ram[0]=true;
			}
			else if(s=="2B")
			{
				if(ram[2])
					ram[2]=false,ans++;
				if(ram[1])
					ram[1]=false,ans++;
				if(ram[0])
					ram[2]=true,ram[0]=false;
				ram[1]=true;
			}
			else if(s=="3B")
			{
				if(ram[2])
					ram[2]=false,ans++;
				if(ram[1])
					ram[1]=false,ans++;
				if(ram[0])
					ram[0]=false,ans++;
				ram[2]=true;
			}
			else if(s=="HR")
			{
				for(int i=0;i<3;i++)
					if(ram[i])
						ram[i]=false,ans++;
				ans++;
			}
			else if(s=="FO"||s=="GO"||s=="SO")
			{
				now_out++;
				total_out++;
				if(now_out==3)
					for(int i=0;i<3;i++)
						ram[i]=false,now_out=0;
			}
			//cout<<"s:"<<s<<" n:"<<n<<" ans:"<<ans<<" now_out:"<<now_out<<" total_out:"<<total_out<<endl;
			//cout<<"ram:"<<ram[0]<<" "<<ram[1]<<" "<<ram[2]<<endl;
			n++;
		}
		//cout<<"b:"<<b<<" to:"<<total_out<<endl;
		cout<<ans<<endl;
	}
}
