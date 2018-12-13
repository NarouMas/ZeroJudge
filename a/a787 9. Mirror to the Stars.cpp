#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string name;
	int w,h,len;
	char cmd[10];
	while(cin>>name)
	{
		for(int i=0;i<10;i++)
			cmd[i]=' ';
		cin>>w>>h;
		cin>>cmd;
		char map[h][w];
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				cin>>map[i][j];
		for(int i=0;cmd[i]!=' ';i++)
			len=i;
		
		for(int i=0;i<len;i++)
		{
			if(cmd[i]=='R')
			{
				for(int l=0;l<h;l++)
					for(int j=0;j<w/2;j++)
						swap(map[l][j],map[l][w-1-j]);
			}
			if(cmd[i]=='I')
			{
				for(int l=0;l<h/2;l++)
					for(int j=0;j<w;j++)
						swap(map[l][j],map[h-1-l][j]);
			}
		}
		cout<<name<<endl;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
				cout<<map[i][j];
			cout<<endl;
		}
			
	}
}
