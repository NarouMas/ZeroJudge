#include<iostream>
#include<cstring>
using namespace std;

bool da[5][5],db[5][5];

int check()
{
	bool disa,disb;
	int a=0,b=0;
	for(int i=0;i<5;i++)
	{
		disa=true;
		for(int j=0;j<5;j++)
			if(da[i][j]==false)
				disa=false;
		if(disa)
			a++;
	}
	for(int i=0;i<5;i++)
	{
		disa=true;
		for(int j=0;j<5;j++)
			if(da[j][i]==false)
				disa=false;
		if(disa)
			a++;
	}
	
	disa=true;
	for(int i=0,j=0;i<5;i++,j++)
		if(da[i][j]==false)
			disa=false;
	if(disa)
		a++;
		
	disa=true;
	for(int i=0,j=4;i<5;i++,j--)
		if(da[i][j]==false)
			disa=false;
	if(disa)
		a++;
	
	for(int i=0;i<5;i++)
	{
		disb=true;
		for(int j=0;j<5;j++)
			if(db[i][j]==false)
				disb=false;
		if(disb)
			b++;
	}
	for(int i=0;i<5;i++)
	{
		disb=true;
		for(int j=0;j<5;j++)
			if(db[j][i]==false)
				disb=false;
		if(disb)
			b++;
	}
	
	disb=true;
	for(int i=0,j=0;i<5;i++,j++)
		if(db[i][j]==false)
			disb=false;
	if(disb)
		b++;
	
	disb=true;
	for(int i=0,j=4;i<5;i++,j--)
		if(db[i][j]==false)
			disb=false;
	if(disb)
		b++;
	
	if(a>=5&&b>=5)
		return 3;
	else if(a>=5)
		return 1;
	else if(b>=5)
		return 2;
	else
		return 0;
}

int main()
{
	int a[5][5],b[5][5],n[25],d;
	while(cin>>a[0][0]>>a[0][1]>>a[0][2]>>a[0][3]>>a[0][4])
	{
		memset(da,false,sizeof(da));
		memset(db,false,sizeof(db));
		for(int i=1;i<5;i++)
			for(int j=0;j<5;j++)
				cin>>a[i][j];
		for(int i=0;i<5;i++)
			for(int j=0;j<5;j++)
				cin>>b[i][j];
		for(int i=0;i<25;i++)
			cin>>n[i];
		for(int k=0;k<25;k++)
		{
			for(int i=0;i<5;i++)
				for(int j=0;j<5;j++)
					if(n[k]==a[i][j])
					{
						da[i][j]=true;
						break;
					}
			for(int i=0;i<5;i++)
				for(int j=0;j<5;j++)
					if(n[k]==b[i][j])
					{
						db[i][j]=true;
						break;
					}
			d=-1;
			if(k>=4)
			{
				d=check();
			}
			if(d==1)
			{
				cout<<"A "<<n[k]<<endl;
				break;
			}
			else if(d==2)
			{
				cout<<"B "<<n[k]<<endl;
				break;
			}
			else if(d==3)
			{
				cout<<"AB "<<n[k]<<endl;
				break;
			}
		}
	}
}
