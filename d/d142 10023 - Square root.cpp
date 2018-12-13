#include<iostream>
#define size 2000
using namespace std;

char a[size],b[size],c[size],e[size],f[size];
int d[size],g[size];
int la,lb,lc,ld,le,lf,lg;
void div();
bool big();
void dis0();
int main()
{	
	while(cin>>c)
	{
		for(int i=0;c[i]!='\0';i++)
			lc=i;
		if(lc%2==0)
		{
			a[0]=c[0];
			la=0;
		}
		else
		{
			a[0]=c[0],a[1]=c[1];
			la=1;
		}
		b[0]='1';
		lb=0,lg=-1;
		for(int i=0,j=0;i<=lc;i+=2,j++)
		{
			if(i==0)
				i+=la;			
			div();			
			ld--;
			//dis0();
			cout<<"i:"<<i<<endl;
			cout<<"d:";
			for(int k=0;k<=ld;k++)
				cout<<d[k];
			cout<<endl;
			if(d[ld]!=int(b[lb]-'0'))
			{
				cout<<"d["<<ld<<"]:"<<d[ld]<<" b["<<lb<<"]:"<<b[lb]<<endl;
				cout<<"bb:"<<b[j];
				b[j]+=1;
				cout<<"  ba:"<<b[j]<<endl;
				i-=2;
				j-=1;
			}
			else
			{
				cout<<"f:";
				for(int k=0;k<=lf;k++)
					cout<<f[i];
				cout<<endl;
				for(int k=0;k<=lf;k++)
					a[k]=f[k];
				a[i+1]=c[i+1],a[i+2]=c[i+2];
				la+=2;
				b[j]+=d[ld];
				b[j+1]='0';
				lb++;
				for(int k=0;k<=lb/2;k++)
					swap(b[k],b[lb-k]);
				for(int k=0;k<=lb;k++)
				{
					if(b[k]>'9')
					{
						if(k==lb)
						{
							lb++;
							b[k+1]='0';
						}						
						b[k]-=10;
						b[k+1]+=1;
						
					}
				}
				for(int k=0;k<=lb/2;k++)
					swap(b[k],b[lb-k]);
				g[j]=d[ld];
				cout<<"g["<<j<<"]:"<<g[j]<<endl;
				lg++;
			}
		}
		for(int i=0;i<=lg;i++)
			cout<<g[i];
		cout<<endl;
	}
}
void dis0()
{
	for(int i=0;i<=ld;i++)
	{
		if(d[i]!=0)
		{
			ld=ld-i;
			break;
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
	cout<<"e:";
	for(int i=0;i<=le;i++)
		cout<<e[i];
	cout<<endl;
	cout<<"b:";
	for(int i=0;i<=lb;i++)
		cout<<b[i];
	cout<<endl;
	system("pause");
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
