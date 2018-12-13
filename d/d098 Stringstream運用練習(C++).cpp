#include<iostream>
#include<algorithm>
#define size 1000000
using namespace std;

int main()
{
	char a[size];
	bool dlen,br;
	int len,ans,t;
	for(int i=0;i<size;i++)
		a[i]=' ';
	while(cin.getline(a,size))
	{
		dlen=true;
		for(int i=0;i<size;i++)
			if(a[i]==' ')
			{
				for(int j=i+1;j<size;j++)
					if(a[j]!=' ')
						dlen=false;
				if(dlen)
				{
					len=i;
					goto p;
				}
				else
					dlen=true;	
			}
	p:
		len--;
		for(int i=0;i<len/2;i++)
			swap(a[i],a[len-1-i]);
		ans=0;
		for(int i=0;i<len;i++)
		{
			t=0;
			br=false;
			//cout<<"t=0\n";
			if(a[i]!=' ')
			{			
				for(int j=i,k=1;a[j]!=' '&&j<len;j++,i++)
				{
					if(a[j]>='0'&&a[j]<='9'&&!br)
					{
						t+=int(a[j]-'0')*k;
						k*=10;
						//cout<<"a["<<j<<"]:"<<a[j]<<endl;
					}
					else
					{
						br=true;
						//cout<<"a["<<j<<"]:"<<a[j]<<" len:"<<len<<endl;
					}
				}
			}
			//cout<<"t:"<<t<<" i:"<<i<<endl;
			if(!br)
				ans+=t;
		}
		cout<<ans<<endl;
		for(int i=0;i<size;i++)
			a[i]=' ';
	}
}
