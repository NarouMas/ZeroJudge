#include<iostream>
using namespace std;

int main()
{
	string s;
	bool done;
	int len,space,ans;
	while(getline(cin,s))
	{
		done=false,len=s.size(),ans=0,space=0;
		while(!done)
		{
			done=true;
			for(int i=0;i<len;i++)
			{
				if(s[i]==' ')
					space++;
				else
					space=0;
				if(space==2)
				{
					for(int j=i+1;j<len;j++)
						s[j-1]=s[j];
					len--,done=false,space=0,i--;
				}
			}
			ans++;
			/*for(int j=0;j<len;j++)
				cout<<s[j];
			cout<<endl;*/
		}
		cout<<ans-1<<"\n";
	}
}
