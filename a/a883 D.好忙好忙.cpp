#include<iostream>
using namespace std;

int main()
{
	bool time[24],dis;
	for(int i=0;i<24;i++)
		time[i]=false;
	int s[3],k[3];
	while(cin>>s[0]>>k[0]>>s[1]>>k[1]>>s[2]>>k[2])
	{
		dis=false;
		for(int i=0;i<3;i++)
		{
			for(int j=s[i];j<k[i];j++)
			{
				if(!time[j])
					time[j]=true;
				else
					dis=true;
			}
		}
		if(dis)
			cout<<"QQ\n";
		else
			cout<<"Happy\n";
		for(int i=0;i<24;i++)
			time[i]=false;
	}
}
