#include<iostream>
using namespace std;

char a[600],b[600],c,e[600],f[600];
int d[600];
int la,lb,ld,le,lf;
void add();
void sub();
void mul();
void div();
bool big();
int main()
{
	for(int i=0;i<600;i++)
	{
		a[i]=b[i]=' ';
		d[i]=0;
	}
	while(cin>>a>>c>>b)
	{
		for(int i=0;a[i]!='\0';i++)
			la=i;
		for(int i=0;b[i]!='\0';i++)
			lb=i;
		if(c=='+')
		{
			add();
			for(int i=ld;i>=0;i--)
				cout<<d[i];
			cout<<endl;
		}
		else if(c=='-')
		{
			sub();
			for(int i=ld;i>=0;i--)
				cout<<d[i];
			cout<<endl;
		}
		else if(c=='*')
		{
			mul();
			for(int i=ld;i>=0;i--)
				cout<<d[i];
			cout<<endl;
		}
		else if(c=='/')
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
			cout<<endl;
		}
	}
	for(int i=0;i<600;i++)
	{
		a[i]=b[i]=' ';
		d[i]=0;
	}
}
void add()
{
	for(int i=0;i<=la/2;i++)
		swap(a[i],a[la-i]);
	for(int i=0;i<=lb/2;i++)
		swap(b[i],b[lb-i]);
	for(int i=0;i<=la||i<=lb;i++)
	{
		d[i]=0;
		if(i<=la)
			d[i]+=int(a[i]-'0');
		if(i<=lb)
			d[i]+=int(b[i]-'0');
		ld=i;
	}
	for(int i=0;i<=ld;i++)
	{
		if(d[i]>=10)
		{
			d[i+1]+=d[i]/10;
			d[i]=d[i]%10;
			if(i==ld)
				ld++;
		}
	}
}
void sub()
{
	bool ne;
	if(la==lb)
		for(int j=0;j<=la;j++)
		{
			if(a[j]>b[j])
				ne=true;
			if(a[j]<b[j])
				ne=false;
			if(j==la&&e[j]==b[j])
				ne=true;
		}
	else if(la>lb)
		ne=true;
	else
		ne=false;
	for(int i=0;i<=la/2;i++)
		swap(a[i],a[la-i]);
	for(int i=0;i<=lb/2;i++)
		swap(b[i],b[lb-i]);
	if(ne)
		for(int i=0;i<=la||i<=lb;i++)
		{
			d[i]=0;
			if(i<=la)
				d[i]+=int(a[i]-'0');
			if(i<=lb)
				d[i]-=int(b[i]-'0');
			ld=i;
		}
	else
		for(int i=0;i<=la||i<=lb;i++)
			{
				d[i]=0;
				if(i<=lb)
					d[i]+=int(b[i]-'0');
				if(i<=la)
					d[i]-=int(a[i]-'0');
				ld=i;
			}
	for(int i=0;i<=ld;i++)
	{
		if(d[i]<0)
		{
			d[i+1]-=1;
			d[i]+=10;
			if(i+1==ld&&d[i+1]==0)
				ld--;
		}
	}
	if(!ne)
		cout<<"-";
}
void mul()
{
	for(int i=0;i<600;i++)
		d[i]=0;
	for(int i=0;i<=la/2;i++)
		swap(a[i],a[la-i]);
	for(int i=0;i<=lb/2;i++)
		swap(b[i],b[lb-i]);
	for(int i=0;i<=lb;i++)
		for(int j=0;j<=la;j++)
		{
			d[i+j]+=int(a[j]-'0')*int(b[i]-'0');
		}
	ld=la+lb;
	for(int i=0;i<=ld;i++)
	{
		if(d[i]>=10)
		{
			if(i+1>ld)
			{
				d[i+1]=0;
				ld++;
			}
			d[i+1]+=d[i]/10;
			d[i]=d[i]%10;
		}
	}
	/*ld=0;
	for(int i=0;a[i]!=' ';i++)
		la=i;
	for(int i=0;b[i]!=' ';i++)
		lb=i;
	for(int i=0;i<la/2;i++)
		swap(a[i],a[la-1-i]);
	for(int i=0;i<lb/2;i++)
		swap(b[i],b[lb-1-i]);
	for(int i=0;i<lb;i++)
	{
		for(int j=0;j<la;j++)
		{
			d[i+j]+=int(b[i]-'0')*int(a[j]-'0');
			if(i+j>ld)
				ld=i+j;
		}
	}
	for(int i=0;i<=ld;i++)
	{
		if(d[i]>=10)
		{
			d[i+1]+=d[i]/10;
			d[i]=d[i]%10;
			if(i==ld)
				ld++;
		}
	}*/
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
