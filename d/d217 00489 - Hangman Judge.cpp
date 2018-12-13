#include<iostream>
using namespace std;

int main()
{
	bool gue[26],cd;
	int ans[26],round,n,w,done;
	char a[100],b[100];
	while(cin>>round)
	{
		if(round==-1)
			break;
		for(int i=0;i<26;i++)
			ans[i]=0,gue[i]=false;
		cin>>a>>b;
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]>='A'&&a[i]<='Z')
				a[i]+=' ';
			ans[int(a[i]-'a')]=1;
		}
		done=0,n=0,w=0;
		while(done==0)
		{
			if(b[n]=='\0')
				break;
			gue[int(b[n]-'a')]=true;
			if(ans[int(b[n]-'a')]==0)
				w++,ans[int(b[n]-'a')]=-1;
			else if(ans[int(b[n]-'a')]==1)
				ans[int(b[n]-'a')]=2;
			cd=true;
			for(int i=0;i<26;i++)
				if(ans[i]==1)
					cd=false;
			if(w==7)
				done=1;
			else if(cd)
				done=2;
			n++;
		}
		cout<<"Round "<<round<<endl;
		switch(done)
		{
			case 0: cout<<"You chickened out.\n"; break;
			case 1: cout<<"You lose.\n"; break;
			case 2: cout<<"You win.\n"; break;
		}
	}
}
