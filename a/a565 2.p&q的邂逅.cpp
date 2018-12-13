#include<iostream>
using namespace std;

int main()
{
	int n,len,ans,t,p,q;
	char a;
	bool done;
	while(cin>>t)
	{
		scanf("\n");
		//a=getchar();
		while(t--)
		{
			ans=p=q=0;
			done=false;
			while(!done)
			{
				a=getchar();
				switch(a)
				{
					case 'p':p++;break;
					case 'q':
						if(p>0)
						{
							ans++;
							p--;
						}
						break;
					case '.':break;
					default:done=true;break;
				}
			}
			
			/*for(int i=0,j=0;i<len;i++)
			{
				if(a[i]=='p'||a[i]=='q')
				{
					if(j!=0)
					{
						if(b[j-1]=='p'&&a[i]=='q')
						{
							ans++;
							j--;
						}
						else
						{
							b[j]=a[i];
							j++;
						}
					}
					else
					{
						b[j]=a[i];
						j++;
					}
				}
			}*/
			scanf("\n");
			cout<<ans<<endl;
		}
		
	}
}
