#include<iostream>
using namespace std;

int main()
{
	char s[1000];
	char a[2000000];
	int len,ans,p,len2;
	bool d;
	while(cin>>s)
	{
		ans=0;
		scanf("\n");
		cin.getline(a,2000000);
		for(int i=0;s[i]!='\0';i++)
		{
			len=i;
			if(s[i]>='A'&&s[i]<='Z')
				s[i]+=' ';
		} 
			
		for(int i=0,k=0;a[i]!='\0';i++,k++)
		{
			d=true;
			if(a[i]>='A'&&a[i]<='Z')
				a[i]+=' ';
			if(a[i]!=' ')
			{
				for(int j=0;j<=len;j++,i++)
				{
					if(a[i]!=s[j])
						d=false;
				}
				while(a[i]!=' '&&a[i]!='\0')
				{
					i++;
					d=false;
				}
					
			}
			if(d&&ans==0)
				ans++,p=k;
			else if(d)
				ans++;
			len2=i;
			//cout<<len2<<endl;
			if(a[i]=='\0')
				break;
		}
		if(ans==0)
			cout<<"-1\n";
		else
			cout<<ans<<" "<<p<<endl;
		//cout<<len2<<endl;
		//system("pause");
		/*for(int i=0;i<=len;i++)
			cout<<s[i];
		cout<<" ";
		for(int i=0;i<=len2;i++)
			cout<<a[i];
		cout<<endl;*/
	}
}
