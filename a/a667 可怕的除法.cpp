#include<iostream>
#define size 1300
using namespace std;

char a[size],b[size],c,e[size],f[size];
int d[size];
int la,lb,ld,le,lf;
void div();
bool big();
int main()
{
	while(cin>>a>>b)
	{
		for(int i=0;a[i]!='\0';i++)
			la=i;
		for(int i=0;b[i]!='\0';i++)
			lb=i;
		if(a[0]=='0')
			cout<<"0    0\n";
		else
		{
			div();
			bool f0=false;
			ld--;
			for(int i=0;i<=ld;i++)
			{
				if(d[i]!=0&&!f0)
					{
						f0=true;
					}
						
				if(f0||i==ld)
				{				
					cout<<d[i];
				}
			}
			cout<<"    ";
			for(int i=0;i<=le;i++)
			{
				if(e[i]!='0'&&!f0)
					{
						f0=true;
					}
						
				if(f0||i==le)
				{				
					cout<<e[i];
				}
			}
			cout<<endl;
		}		
	}
}
void div()
{
	le=0,e[0]=a[0],ld=0;
	for(int i=la,t=1;i>=0;i--,t++)
	{
		d[ld]=0;
		if(big())
		{
			//d[ld]=0;
			while(big())
			{
				d[ld]++;
				//cout<<"d:"<<d[ld]<<" ld:"<<ld<<endl;
				for(int j=0;j<=le/2;j++)
					swap(e[j],e[le-j]);
				for(int j=0;j<=lb/2;j++)
					swap(b[j],b[lb-j]);
				for(int j=0;j<=le||j<=lb;j++)
				{
					f[j]='0';
					if(j<=le)
						f[j]+=int(e[j]-'0');
					if(j<=lb)
						f[j]-=int(b[j]-'0');
					lf=j;
				}
				for(int j=0;j<=lf;j++)
				{
					if(f[j]<'0')
					{
						f[j+1]-=1;
						f[j]+=10;
						if(j+1==lf&&f[j+1]=='0')
							lf--;
					}
				}
				bool f0=false;
				//cout<<"ine:";
				for(int j=0,k=lf;k>=0;k--)
				{
					if(f[k]!='0'&&!f0)
					{
						f0=true;
					}
						
					if(f0||k==0)
					{
						e[j]=f[k];
						le=j;
						j++;				
						//cout<<e[j];
					}
					
				}
				//cout<<" end"<<endl;
				for(int j=0;j<=lb/2;j++)
					swap(b[j],b[lb-j]);
			}
			//ld++;
		}
		le++,ld++;;
		e[le]=a[t];
		
	}
}
bool big()
{
	/*cout<<"e:";
	for(int i=0;i<=le;i++)
		cout<<e[i];
	cout<<endl;
	cout<<"b:";
	for(int i=0;i<=lb;i++)
		cout<<b[i];
	cout<<endl;*/
	//system("pause");
	if(le==lb)
		for(int j=0;j<=le;j++)
		{
			if(e[j]>b[j])
				return true;
			if(e[j]<b[j])
				return false;
			if(j==le&&e[j]==b[j])
				return true;
		}
	else if(le>lb)
		return true;
	return false;
}
