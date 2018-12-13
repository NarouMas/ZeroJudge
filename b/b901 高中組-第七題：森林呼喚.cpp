#include<iostream>
#include<algorithm>
#define size  200000
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	char a[size],b[size],ca[size];
	int c[size],n,l;
	int lena,lenb,max,zero;
	for(int i=0;i<size;i++)
	{
		a[i]=b[i]=' ';
		c[i]=0;
	}
	while(cin>>l)
	{
		while(l--)
		{
			cin>>n;
			a[0]='1';
			for(int z=2,zi,k;z<=n;z++)
			{
				zi=z,k=0;
				while(zi!=0)
				{
					b[k]=char(zi%10)+'0';
					zi/=10;
					k++;
				}
				max=0;
				for(int i=0;a[i]!=' ';i++)
					lena=i;
				for(int i=0;b[i]!=' ';i++)
					lenb=i;
				lena++,lenb++;
				/*cout<<"b:";
				for(int i=0;i<lena;i++)
					cout<<a[i];
				cout<<endl;*/
				/*for(int i=0;i<lena/2;i++)
					swap(a[i],a[lena-1-i]);*/
				/*for(int i=0;i<lenb/2;i++)
					swap(b[i],b[lenb-1-i]);*/
				//cout<<a[0]<<" "<<b[0]<<endl;
				/*cout<<"a:";
				for(int i=0;i<lena;i++)
					cout<<a[i];
				cout<<endl;*/
				for(int i=0;i<lenb;i++)
				{
					for(int j=0;j<lena;j++)
					{
						c[i+j]+=int(b[i]-'0')*int(a[j]-'0');
						if(i+j>max)
							max=i+j;
					}
				}
				for(int i=0;i<=max;i++)
				{
					if(c[i]>=10)
					{
						c[i+1]+=c[i]/10;
						c[i]=c[i]%10;
						if(i==max)
							max++;
					}
				}
				//for(int i=0;i<lena;i++)
				//	cout<<a[i];
				//cout<<endl;
				//cout<<"lena:"<<lena<<" lenb:"<<lenb<<" max:"<<max<<endl;
				for(int i=max;i>=0;i--)
					ca[i]=char(c[i])+'0';
				for(int i=0;i<=max;i++)
				{
					if(ca[i]!='0')
					{
						zero=i;
						break;
					}
				}
				for(int i=zero,j=0;i<=max;i++,j++)
					a[j]=ca[i];
				//for(int i=max,j=0;i>=0;i--)
				//cout<<z<<" ";
				/*for(int i=max;i>=0;i--)
					cout<<c[i]<<" ";
				cout<<endl;*/
				/*for(int i=0;i<=max;i++)
					cout<<c[i];
				cout<<endl;*/
				for(int i=0;i<=lenb;i++)
					b[i]=' ';
				for(int i=0;i<=max;i++)
					c[i]=0;
			}
			for(int i=0;i<=max;i++)
				if(a[i]!='0')
				{
					cout<<a[i]<<endl;
					break;
				}
			for(int i=0;i<size;i++)
			{
				a[i]=b[i]=' ';
				c[i]=0;
			}
		}
		
	}
}
