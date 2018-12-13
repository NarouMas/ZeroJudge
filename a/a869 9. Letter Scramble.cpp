#include<iostream>
using namespace std;

int main()
{
	int n,m,r,w,dir,ans,pro;
	int add[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	char d,s[100];
	string re[9][9];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>re[i][j];
		cin>>m;
		while(m--)
		{
			cin>>s>>r>>w>>d;
			r--,w--,ans=0,pro=1;
			if(d=='H')
				dir=0;
			else
				dir=1;
			for(int i=0;s[i]!='\0';i++)
			{
				if(re[r][w]=="[]")
					ans+=add[int(s[i]-'A')];
				else if(re[r][w]=="2L")
					ans+=add[int(s[i]-'A')]*2;
				else if(re[r][w]=="3L")
					ans+=add[int(s[i]-'A')]*3;
				else if(re[r][w]=="2W")
					ans+=add[int(s[i]-'A')],pro*=2;
				else if(re[r][w]=="3W")
					ans+=add[int(s[i]-'A')],pro*=3;
				if(dir==0)
					w++;
				else
					r++;
			}
			ans*=pro;
			for(int i=0;s[i]!='\0';i++)
				cout<<s[i];
			cout<<" "<<ans<<endl;
		}
	}
}
