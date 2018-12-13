#include<iostream>
#include<cstring>
using namespace std;

char a[100005],b[100005],t[100005];

bool big(int,int);

int main()
{
	int n,c[100005],la,lb;
	bool dis;
	while(cin>>n)
	{
		while(n--)
		{
			memset(a,'0',sizeof(a));
			memset(b,'0',sizeof(b));
			cin>>a>>b;
			memset(c,0,sizeof(c));
			for(int i=0;a[i]!='\0';i++)
				la=i;
			for(int i=0;b[i]!='\0';i++)
				lb=i;
			a[la+1]='0',b[lb+1]='0';
			for(int i=0;i<=la/2;i++)
				swap(a[i],a[la-i]);
			for(int i=0;i<=lb/2;i++)
				swap(b[i],b[lb-i]);
			/*cout<<"a:";
			for(int i=0;i<=la;i++)
				cout<<a[i];
			cout<<endl;
			cout<<"b:";
			for(int i=0;i<=lb;i++)
				cout<<b[i];
			cout<<endl;*/
			if(!big(la,lb))
			{
				for(int i=0;i<=la;i++)
					t[i]=a[i];
				for(int i=0;i<=lb;i++)
					a[i]=b[i];
				for(int i=0;i<=la;i++)
					b[i]=t[i];
				swap(la,lb);
				/*cout<<"a:";
				for(int i=0;i<=la;i++)
					cout<<a[i];
				cout<<endl;
				cout<<"b:";
				for(int i=0;i<=lb;i++)
					cout<<b[i];
				cout<<endl;*/
				
				cout<<"-";
			}
			
			
			for(int i=0;i<=la;i++)
			{
				if(i<=lb)
					c[i]+=int(a[i]-'0')-int(b[i]-'0');
				else
					c[i]+=int(a[i]-'0');
				//cout<<"i:"<<i<<" c:"<<c[i]<<endl;
				if(c[i]<0)
				{
					c[i]+=10;
					c[i+1]-=1;
				}
			}
			dis=false;
			for(int i=la;i>=0;i--)
			{
				if(c[i]!=0)
					dis=true;
				if(dis)
					cout<<c[i];
			}
			cout<<endl;
		}
	}
}

bool big(int la,int lb)
{
	if(la>lb)
	{
		//cout<<"A"<<endl;
		return true;
	}
		
	else if(la<lb)
		return false;
	else
	{
		for(int i=la;i>=0;i++)
		{
			if(a[i]>b[i])
			{
				//cout<<a[i]<<" "<<b[i]<<endl;
				//cout<<"B "<<i<<endl;
				return true;
			}
				
			else if(a[i]<b[i])
				return false;
		}
			
	}
	return true;
}
