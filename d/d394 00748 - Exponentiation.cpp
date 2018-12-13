#include<iostream>
#define size 1000000
using namespace std;

char a[size],b[300],ans[size];
int c[size];
int main()
{	
	bool b0,n0;
	int n,t,len,la,lc;
	while(cin>>a>>n)
	{
		t=-1;
		for(int i=0;a[i]!='\0';i++)
			len=i;
		b0=true,n0=false;
		for(int i=len,j=0;i>=0;i--,j++)
		{
			if(a[i]=='.')
				t=j;
		}
		if(t>=0)
			for(int i=len;b0;i--)
			{
				if(a[i]=='0')
					len--;
				else if(a[i]=='.')
				{
					n0=true;
					b0=false;
				}
				else
					b0=false;
			}
		for(int i=len,j=0;i>=0;i--,j++)
			if(a[i]=='.')
				t=j;
		for(int i=0,j=0;i<=len;i++)
		{
			if(a[i]!='.')
			{
				b[j]=a[i];
				//cout<<"j:"<<j<<" b:"<<b[j]<<endl; 
				j++;
			}
		}
		if(t>=0)
			len--;
		for(int i=0;i<=len;i++)
			a[i]=b[i];
		for(int i=0;i<=len/2;i++)
		{
			swap(a[i],a[len-i]);
			swap(b[i],b[len-i]);
		}
		la=len;
		for(int i=0;i<size;i++)
			c[i]=0;		
		/*for(int i=0;i<=la;i++)
			cout<<a[i];
		cout<<endl;
		for(int i=0;i<=len;i++)
			cout<<b[i];
		cout<<endl;
		system("pause");*/
		t=t*n;
		n--;
		while(n--)
		{
			for(int i=0;i<=len;i++)
				for(int j=0;j<=la;j++)
				{
					c[i+j]+=int(b[i]-'0')*int(a[j]-'0');
					//cout<<"c:"<<c[i+j]<<endl;
				}
			lc=len+la;
			for(int i=0;i<=lc;i++)
			{
				if(c[i]>=10)
				{
					c[i+1]+=c[i]/10;
					c[i]=c[i]%10;
					if(i+1>lc)
						lc++;
				}
			}
			for(int i=0;i<=lc;i++)
				a[i]=char(c[i])+'0';
			//cout<<n<<":";
			/*for(int i=lc;i>=0;i--)
				cout<<a[i];
			cout<<endl;*/
			la=lc;
			for(int i=0;i<=size;i++)
				c[i]=0;
		}
		if(t<0)
		{
			for(int i=la;i>=0;i--)
				cout<<a[i];
			cout<<endl;
		}
		else
		{
			for(int i=0,j=0;i<=la;i++,j++)
			{
				ans[j]=a[i];
				//cout<<"j1:"<<j<<endl;
				if(j==t-1)
				{
					j++;
					ans[j]='.';
					//cout<<"j2:"<<j<<endl;
				}
			}
			if(ans[la+1]=='0')
				la--;
			if(n0)
				la--;
			for(int i=la+1;i>=0;i--)
			{
				cout<<ans[i];
			}
			cout<<endl;
		}
		//cout<<"t:"<<t<<" n:"<<n<<endl;
		//t=t*n;
		//cout<<"t:"<<t<<endl;
		
	}
}
