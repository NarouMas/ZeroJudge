#include<iostream>
using namespace std;

int main()
{
	int t,len;
	int x,y,z,w,n,nn,m;
	bool dlen;
	char a[1000];
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>t)
	{
		for(int tt=0;tt<t;tt++)
		{
			nn=0;
			for(int i=0;i<1000;i++)
				a[i]=' ';
			cin>>x>>y>>z>>w>>n>>m;
			//if(tt==0)
				cin.getline(a,0000);
			cin.getline(a,1000);
			dlen=true;
			for(int i=0;i<1000;i++)
				if(a[i]==' ')
				{
					for(int j=i+1;j<1000;j++)
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
			len--;
		p:
			len--;
			for(int i=0;i<len;i++)
			{
				if(a[i]!=' ')
				{
					m-=nn;
					
					if(m<=0)
					{
						break;
					}
					switch(a[i])
					{
						case '1':m+=x;break;
						case '2':m+=y;break;
						case '3':m-=z;break;
						case '4':m-=w;nn+=n;break;
					}
				//	cout<<"m="<<m<<" i="<<i<<endl;
				}
				
			}
			if(m>0)
				cout<<m<<"g\n";
			else
				cout<<"bye~Rabbit\n";		
		}
	}
}
