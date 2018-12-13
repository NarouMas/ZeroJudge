#include<iostream>
#define size 100000
using namespace std;

int main()
{
	char a[size];
	float len,ans,t,buffer;
	bool odd,d,ne;
	while(cin.getline(a,size))
	{
		ans=buffer=0;
		for(int i=0;a[i]!='\0';i++)
			len=i;
		ne=false;
		for(int i=0;i<=len;i++)
		{
			if(a[i]==':')
			{
				if(a[i-1]=='1'||a[i-1]=='3'||a[i-1]=='5'||a[i-1]=='7'||a[i-1]=='9')
					odd=true;
				else
					odd=false;
			}
			else if(a[i]=='-')
				ne=true;
			else if(a[i]=='.')
			{
				t=0.1;
			}
			else if(a[i]!=' ')
			{
				if(odd)
				{
					if(!ne)
						ans+=float(a[i]-'0')*t;
					else
						ans-=float(a[i]-'0')*t;
					//cout<<".+ "<<float(a[i]-'0')*t<<endl;
				}
					
				else
				{
					if(!ne)
						ans-=float(a[i]-'0')*t;
					else
						ans+=float(a[i]-'0')*t;
					//cout<<".- "<<float(a[i]-'0')*t<<endl;
				}
					
				t*=0.1;
			}
			else
			{
				t=0;
				ne=false;
			}
		}
		d=true,buffer=0,ne=false;
		for(int i=len;i>=0;i--)
		{
			if(d)
			{
				t=1;
				//cout<<"b:"<<buffer<<endl;
				if(!ne)
					ans+=buffer;
				else
					ans-=buffer;
				buffer=0,ne=false;
				for(int j=i;d;j--)
					if(a[j]==':')
					{
						if(a[j-1]=='1'||a[j-1]=='3'||a[j-1]=='5'||a[j-1]=='7'||a[j-1]=='9')
							odd=true;
						else
							odd=false;
						d=false;
					}
			}
			if(a[i]=='.')
			{
				t=1;
				buffer=0;
			}
			else if(a[i]=='-')
				ne=true;
			else if(a[i]!=' '&&a[i]!=':')
			{
				if(odd)
				{
					buffer+=float(a[i]-'0')*t;
					//cout<<"+ "<<float(a[i]-'0')*t<<" "<<i<<endl;
				}
					
				else
				{
					buffer-=float(a[i]-'0')*t;
					//cout<<"- "<<float(a[i]-'0')*t<<" "<<i<<endl;
				}
					
				t*=10;
			}
			else if(a[i]==':')
			{
				t=0;
			}
			else
			{
				t=0;
				d=true;
			}
		}
		if(!ne)
			ans+=buffer;
		else
			ans-=buffer;
		cout<<ans<<endl;
	}
}
