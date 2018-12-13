#include<iostream>
#define size 600
using namespace std;

bool big(char a[],char b[],int la,int lb)
{
	if(la>lb)
		return true;
	else if(la<lb)
		return false;
	else
	{
		for(int i=0;i<=la;i++)
		{
			if(a[i]>b[i])
				return true;
			else if(a[i]<b[i])
				return false;
		}
			
	}
	return true;
}

void dis0(char a[],int *la)
{
	int f0=-1;
	bool all0=true;
	for(int i=0;i<=*la;i++)
		if(a[i]!='0')
		{
			all0=false;
			break;
		}
	if(all0)
		*la=0;
	else
	{
		for(int i=0;a[i]=='0';i++)
			f0=i;
		if(f0!=-1)
		{
			for(int i=0;i<=*la-f0;i++)
				a[i]=a[f0+i+1];
			*la=*la-f0-1;
		}	
	}
}

void dis0int(int a[],int *la)
{
	int f0=-1;
	bool all0=true;
	for(int i=0;i<=*la;i++)
		if(a[i]!=0)
		{
			all0=false;
			break;
		}
	if(all0)
		*la=0;
	else
	{
		for(int i=0;i<=*la/2;i++)
			swap(a[i],a[*la-i]);
		for(int i=0;a[i]==0;i++)
			f0=i;
		if(f0!=-1)
		{
			for(int i=0;i<=*la-f0;i++)
				a[i]=a[f0+i+1];
			*la=*la-f0-1;
		}
		for(int i=0;i<=*la/2;i++)
			swap(a[i],a[*la-i]);
	}
}

int *sum(char a[],char b[],int la,int lb)
{
	int lans=max(la,lb);
	int *ans=new int[size];
	for(int i=0;i<size;i++)
		ans[i]=0;
	for(int i=0;i<=la/2;i++)
		swap(a[i],a[la-i]);
	for(int i=0;i<=lb/2;i++)
		swap(b[i],b[lb-i]);
	
	for(int i=0;i<=lans;i++)
		ans[i]=(a[i]-'0')+(b[i]-'0');
	
	for(int i=0;i<=lans;i++)
	{
		if(ans[i]>=10)
		{
			ans[i+1]+=ans[i]/10;
			ans[i]%=10;
			if(i==lans)
				lans++;
		}
	}
	ans[lans+1]=-1;
	return ans;
}

int *sub(char a[],char b[],int la,int lb)
{
	int lans=max(la,lb);
	int *ans=new int[size];
	bool all0;
	if(!big(a,b,la,lb))
	{
		cout<<"-";
		swap(a,b);
		swap(la,lb);
	}
	for(int i=0;i<size;i++)
		ans[i]=0;
	for(int i=0;i<=la/2;i++)
		swap(a[i],a[la-i]);
	for(int i=0;i<=lb/2;i++)
		swap(b[i],b[lb-i]);
	
	for(int i=0;i<=lans;i++)
		ans[i]=(a[i]-'0')-(b[i]-'0');
	
	for(int i=0;i<=lans;i++)
	{
		if(ans[i]<0)
		{
			ans[i+1]-=ans[i]/10+1;
			ans[i]+=(ans[i]/10+1)*10;
			if(i+1==lans&&ans[lans]==0)
				lans--;
		}
	}
	all0=true;
	for(int i=0;i<=lans;i++)
		if(ans[i]!=0)
			all0=false;
	if(all0)
		lans=0;
	else
		dis0int(ans,&lans);
	ans[lans+1]=-1;
	return ans;
}

int *mul(char a[],char b[],int la,int lb)
{
	int lans=la+lb;
	int *ans=new int[size];
	for(int i=0;i<size;i++)
		ans[i]=0;
	for(int i=0;i<=la/2;i++)
		swap(a[i],a[la-i]);
	for(int i=0;i<=lb/2;i++)
		swap(b[i],b[lb-i]);
	
	for(int i=0;i<=lb;i++)
	{
		for(int j=0;j<=la;j++)
		{
			ans[i+j]+=(b[i]-'0')*(a[j]-'0');
		}
	}
	for(int i=0;i<=lans;i++)
	{
		if(ans[i]>=10)
		{
			ans[i+1]+=ans[i]/10;
			ans[i]%=10;
			if(i==lans)
				lans++;
		}
	}
	dis0int(ans,&lans);
	ans[lans+1]=-1;
	return ans;
}

int *div(char a[],char b[],int la,int lb)
{
	int lans,lt=-1,tans,f0=-1;
	int *ans=new int[size];
	int *ti=new int [size];
	char *tc=new char[size];
	for(int i=0;i<size;i++)
		tc[i]='0',ti[i]=0,ans[i]=0;
	for(int i=0;i<=la;i++)
	{
		lt+=1,tans=0;
		tc[lt]=a[i];
		ti[lt]=a[i]-'0';
		while(big(tc,b,lt,lb))
		{
			ti=sub(tc,b,lt,lb);
			for(int j=0;j<=lb/2;j++)   //since entering sub() the array b will also be reversed
				swap(b[j],b[lb-j]);
			for(int j=0;ti[j]!=-1;j++)
				lt=j,tc[j]=ti[j]+'0';
			for(int j=0;j<=lt/2;j++)
			{
				swap(ti[j],ti[lt-j]);
				swap(tc[j],tc[lt-j]);
			}
			ti[lt+1]=0;
			tc[lt+1]='0';
			if(lt==0&&ti[0]==0)   //consider the case of 0
				lt=-1;
			tans++;
		}
		ans[i]=tans;
	}
	ans[la+1]=-1;
	for(int i=0;i<=la/2;i++)
		swap(ans[i],ans[la-i]);
	dis0int(ans,&la);
	ans[la+1]=-1;
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	char a[size],b[size],c;
	int la,lb,lans,*ans;
	for(int i=0;i<size;i++)
		a[i]='0';
	for(int i=0;i<size;i++)
		b[i]='0';
	while(cin>>a>>c>>b)
	{
		for(int i=0;a[i]!='\0';i++)
			la=i;
		for(int i=0;b[i]!='\0';i++)
			lb=i;
		a[la+1]='0',b[lb+1]='0';
		dis0(a,&la); dis0(b,&lb);
		switch(c)
		{
			case '+':
				ans=sum(a,b,la,lb);
				break;
			case '-':
				ans=sub(a,b,la,lb);
				break;
			case '*':
				ans=mul(a,b,la,lb);
				break;
			case '/':
				ans=div(a,b,la,lb);
				break;
		}
		for(int i=0;ans[i]!=-1;i++)
			lans=i;
		for(int i=lans;i>=0;i--)
			cout<<ans[i];
		cout<<"\n";
		delete [] ans;
		for(int i=0;i<size;i++)
			a[i]='0';
		for(int i=0;i<size;i++)
			b[i]='0';
	}
}
